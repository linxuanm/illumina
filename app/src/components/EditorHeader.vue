<template>
    <div class="container">
        <div class="row py-4 align-items-center btm-border">
            <div class="col-3 text-secondary">Idle: program.lux</div>
            <div class="col-6 lux-red font-din text-center title">
                <font-awesome-icon icon="fa-solid fa-fire-alt" size="sm"/> Illumina
            </div>
            <div class="col-3 text-end">
                <a href="https://github.com/davidmaamoaix/Illumina/" target="_blank">
                    <font-awesome-icon icon="fa-brands fa-github" size="xl"/>
                </a>
            </div>
        </div>
        <div class="row">
            <nav class="p-0 navbar navbar-expand my-3 bg-light">
                <ul class="navbar-nav">
                    <li class="nav-item">Files</li>
                    <li class="nav-item">Edit</li>
                    <li class="nav-item">View</li>
                    <li class="nav-item">Run</li>
                </ul>
            </nav>
        </div>
    </div>
</template>

<script lang="ts">
import { defineComponent } from 'vue';

export default defineComponent({
    name: 'EditorHeader'
});
</script>

<style scoped>
a {
    color: var(--bs-black);
    transition: 0.25s;
}

li {
    padding: 7px 15px;
    cursor: pointer;
    transition: 0.15s;
}

li:hover {
    background-color: var(--bs-secondary);
}

.lux-red {
    color: var(--lux-red);
}

.title {
    font-size: 2.0rem;
    letter-spacing: 2px;
}

.btm-border {
    border-bottom: solid 1px var(--lux-red);
}
</style>
