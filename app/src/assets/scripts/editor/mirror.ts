import { EditorView } from '@codemirror/view';

import { luxTheme } from '@/assets/scripts/editor/theme';

export const luxMirror: EditorView = new EditorView({
    extensions: [
        luxTheme
    ]
});
