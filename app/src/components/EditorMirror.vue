<template>
    <div class="container p-0 my-3">
        <div id="mirror"></div>
    </div>
</template>

<script lang="ts">
import { luxMirror } from '@script/editor/mirror';
import { IS_MAC } from '@script/util/platform';

import { defineComponent } from 'vue';

export default defineComponent({
    name: 'EditorMirror',
    mounted() {
        document.getElementById('mirror')!.appendChild(luxMirror.dom);
        document.addEventListener('keydown', e => {
            if ((IS_MAC ? e.metaKey : e.ctrlKey) && e.key === 'e') {
                e.preventDefault();
                this.$store.dispatch('runCode', { code: 'abc' });
            }
        });
        document.addEventListener('keydown', e => {
            if ((IS_MAC ? e.metaKey : e.ctrlKey) && e.key === 'i') {
                e.preventDefault();
                this.$store.dispatch('interruptCode');
            }
        });
    }
});
</script>
