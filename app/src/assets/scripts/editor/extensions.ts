import { EditorSelection, EditorState } from '@codemirror/state';
import { indentUnit, bracketMatching } from '@codemirror/language';
import { highlightSelectionMatches, searchKeymap } from '@codemirror/search';
import {
    history, historyKeymap,
    defaultKeymap, indentWithTab
} from '@codemirror/commands';
import {
    keymap,
    lineNumbers, highlightActiveLineGutter,
    rectangularSelection, drawSelection,
    highlightActiveLine,
    Command
} from '@codemirror/view';
import { closeBrackets, closeBracketsKeymap } from '@codemirror/autocomplete';

const indentNextLine: Command = ({state, dispatch}) => {
    if (state.readOnly) return false;
    
    const updated = state.changeByRange(range => {
        const line = state.doc.lineAt(range.from);
        const content = line.text;
        const indents = content.match(/^ */)![0];

        const changes = [{
            from: range.from,
            to: range.to,
            insert: '\n' + indents
        }];

        return {
            changes,
            range: EditorSelection.range(
                range.from + 1 + indents.length,
                range.from + 1 + indents.length
            )
        };
    });
    
    dispatch(state.update(updated, {userEvent: "input.type"}));
    return true;
};

export const luxMirrorSetup = [
    history(),
    lineNumbers(),
    indentUnit.of('    '),

    drawSelection(),
    EditorState.allowMultipleSelections.of(true),

    highlightActiveLineGutter(),
    rectangularSelection(),
    highlightActiveLine(),
    highlightSelectionMatches(),

    bracketMatching(),
    closeBrackets(),

    keymap.of([
        { key: "Enter", run: indentNextLine },
        ...searchKeymap,
        ...historyKeymap,
        ...defaultKeymap,
        ...closeBracketsKeymap,
        indentWithTab
    ])
];
