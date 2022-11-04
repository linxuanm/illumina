import { EditorView } from '@codemirror/view';

export const luxTheme = EditorView.theme({
    ".cm-content": {
        fontFamily: 'Fira Code'
    }
}, { dark: false });
