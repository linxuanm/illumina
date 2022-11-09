import { EditorView } from '@codemirror/view';
import { syntaxHighlighting } from '@codemirror/language';

import { luxTheme } from '@/assets/scripts/editor/theme';
import { luxMirrorSetup } from '@/assets/scripts/editor/extensions';
import { language, highlightStyle } from '@/assets/scripts/editor/highlight';

export const luxMirror: EditorView = new EditorView({
    extensions: [
        language,
        syntaxHighlighting(highlightStyle),
        luxTheme,
        luxMirrorSetup
    ]
});
