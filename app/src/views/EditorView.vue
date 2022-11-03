<template>
    <EditorHeader />
    <EditorMirror />
</template>

<script>
import EditorHeader from '@/components/EditorHeader.vue';
import EditorMirror from '@/components/EditorMirror.vue';

export default {
    name: 'EditorView',
    components: {
        EditorHeader,
        EditorMirror
    }
};
</script>

