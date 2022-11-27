<template>
    <EditorSidebar />
    <EditorHeader />
    <EditorMirror />
</template>

<script>
import EditorSidebar from '@/components/EditorSidebar.vue';
import EditorHeader from '@/components/EditorHeader.vue';
import EditorMirror from '@/components/EditorMirror.vue';

export default {
    name: 'EditorView',
    components: {
        EditorHeader,
        EditorMirror,
        EditorSidebar
    }
};
</script>

