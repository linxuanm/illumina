import { HighlightStyle, StreamLanguage } from "@codemirror/language";
import { tags } from '@lezer/highlight';

const langTokens = {
    comment: /--.*/,
    annotation: /@[a-zA-Z_]+/,
    name: /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: /[0-9]+(\.[0-9]+)?/,
    string: /(".*?")|('.*?')/,
    operator: /(==)|(!=)|(>=)|(<=)|>|<|[+\-*%=!]/,
    punctuation: /[.,()\[\]]/,
};

const language = StreamLanguage.define({
    token: (stream, state) => {
        return '';
    }
});

export const highlightStyle = HighlightStyle.define([
    {tag: tags.controlKeyword, color: '#00C0FF'},
    {tag: tags.keyword, color: '#00CDAF'},
    {tag: tags.null, color: '#DBDDA4'},
    {tag: tags.bool, color: '#DBDDA4'},
    {tag: tags.operatorKeyword, color: '#D081C4'},
    {tag: tags.string, color: '#DBDDA4'},
    {tag: tags.number, color: '#D081C4'},
    {tag: tags.name, color: '#8ADDFF'},
    {tag: tags.comment, color: '#8A8A8A'},
    {tag: tags.annotation, color: '#FF3843'}
]);
