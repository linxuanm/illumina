import { HighlightStyle, StreamLanguage } from "@codemirror/language";
import { tags } from '@lezer/highlight';

interface TokenMap { [key: string]: RegExp }
const langTokens: TokenMap = {
    comment: /--.*/,
    annotation: /@[a-z]+/,
    docComment: /:((print)|(plot))/,
    name: /[a-z][a-zA-Z0-9_]*/,
    typeName: /[A-Z][a-zA-Z0-9_]*/,
    number: /[0-9]+(\.[0-9]+)?/,
    string: /("[^\\"]*(\\"[^\\"]*)*")|('[^\\']*(\\'[^\\']*)*')/,
    operator: /[!#$%&*+./<=>?@^|-~]+/,
    punctuation: /[,()[]]/
};

interface KeywordSet { [key: string]: Set<string> }
const keywordSets: KeywordSet = {
    controlKeyword: new Set([
        'adt', 'type', 'where', 'interface'
    ]),
    bool: new Set(['True', 'False'])
};

export const language = StreamLanguage.define({
    token: (stream, state) => {
        stream.eatSpace();

        for (const i in langTokens) {
            const match = stream.match(langTokens[i]);
            if (match != null) {
                const value = (<RegExpMatchArray>match)[0];

                if (i === 'name') {
                    for (const tok in keywordSets) {
                        if (keywordSets[tok].has(value)) {
                            return tok;
                        }
                    }
                }

                return i;
            }
        }

        stream.next();
        return '';
    }
});

export const highlightStyle = HighlightStyle.define([
    {tag: tags.comment, color: '#787B80'},
    {tag: tags.string, color: '#86B300'},
    {tag: tags.controlKeyword, color: '#EA7D2E'},
    {tag: tags.typeName, color: '#1FB894'},
    {tag: tags.number, color: '#22A4E6'},
    {tag: tags.docComment, color: '#F02121'},
    {tag: tags.annotation, color: '#55B4D4'}
]);
