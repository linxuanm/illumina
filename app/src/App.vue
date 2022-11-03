<template>
    <EditorView />
</template>

<script>
import { defineComponent } from 'vue';
import EditorView from '@/views/EditorView.vue';

export default defineComponent({
    name: 'App',
    components: {
        EditorView
    }
});
</script>