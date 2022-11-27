<template>
    <div class="position-fixed sidebar">
        <div class="d-flex flex-column">
            <IconButton
                v-if="running"
                icon="fa-solid fa-spinner"
                @click="stop" :spin="true"
            />
            <IconButton v-else icon="fa-solid fa-play" @click="run" />
            <IconButton icon="fa-solid fa-redo" />
            <br class="user-select-none">
            <IconButton icon="fa-solid fa-stop" />
            <IconButton icon="fa-solid fa-eraser" />
            <IconButton icon="fa-solid fa-save" />
        </div>
    </div>
</template>

<script lang="ts">
import IconButton from '@/components/IconButton.vue';

export default {
    name: 'EditorSidebar',
    components: {
        IconButton
    },
    methods: {
        run: function() {
            this.$store.dispatch('runCode', { code: '123' });
        },
        stop: function() {
            this.$store.dispatch('interruptCode');
        }
    },
    computed: {
        running: function() {
            return this.$store.state.running
        }
    }
};
</script>

<style scoped>
.sidebar {
    top: 25%;
    left: 15px;
}
</style>
