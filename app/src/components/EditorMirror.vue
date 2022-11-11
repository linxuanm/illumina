<template>
    <div class="container p-0 my-3">
        <div id="mirror"></div>
    </div>
</template>

<script lang="ts">
import { luxMirror } from '@/assets/scripts/editor/mirror';
import { IS_MAC } from '@/assets/scripts/util/platform';

import { defineComponent } from 'vue';

export default defineComponent({
    name: 'EditorMirror',
    mounted() {
        document.getElementById('mirror')!.appendChild(luxMirror.dom);
        document.addEventListener('keydown', e => {
            if ((IS_MAC ? e.metaKey : e.ctrlKey) && e.key === 'e') {
                e.preventDefault();
                console.log('Run Code');
            }
        });
    }
});
</script>
