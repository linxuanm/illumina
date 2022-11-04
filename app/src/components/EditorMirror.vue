<template>
    <div class="container p-0 my-3">
        <div id="mirror"></div>
    </div>
</template>

<script lang="ts">
import { luxMirror } from '@/assets/scripts/editor/mirror';

import { defineComponent } from 'vue';

export default defineComponent({
    name: 'EditorMirror',
    mounted() {
        document.getElementById('mirror')!.appendChild(luxMirror.dom);
    }
});
</script>
