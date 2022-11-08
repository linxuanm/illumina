import { EditorView } from '@codemirror/view';

export const luxTheme = EditorView.theme({
    "&": {
        border: "2px solid #EAECEF",
        fontSize: "16px",
        backgroundColor: "#FCFCFC"
    },
    "&.cm-focused": {
        outline: "none !important"
    },
    ".cm-scroller": {
        lineHeight: "1.75"
    },
    ".cm-content": {
        fontFamily: 'Fira Code'
    },
    ".cm-line": {
        padding: "0 10px"
    },
    ".cm-gutters": {
        color: "#8A919966",
        backgroundColor: "#FCFCFC",
        width: "55px",
        borderRight: "1px solid #E9EAEB"
    },
    ".cm-gutter": {
        width: "100%",
        height: "100%"
    },
    ".cm-activeLineGutter": {
        backgroundColor: "#8A91991A",
        color: "#747A80"
    },
    ".cm-activeLine": {
        backgroundColor: "#8A91991A"
    },
    ".cm-gutterElement": {
        textAlign: "center !important"
    },
    "&.cm-focused .cm-selectionBackground, ::selection": {
        backgroundColor: "#036DD636"
    },
    ".cm-cursor": {
        borderLeft: "2px solid #FFAA33"
    }
}, { dark: false });
