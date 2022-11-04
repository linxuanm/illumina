import { EditorView } from '@codemirror/view';

import { luxTheme } from '@/assets/scripts/editor/theme';
import { luxMirrorSetup } from '@/assets/scripts/editor/extensions';

export const luxMirror: EditorView = new EditorView({
    extensions: [
        luxTheme,
        luxMirrorSetup
    ]
});
