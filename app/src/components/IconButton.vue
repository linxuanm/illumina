<template>
    <div class="py-2">
        <div class="d-flex align-items-center justify-content-center icon-btn">
            <div class="text-white">
                <font-awesome-icon :icon="icon" :spin="spin" />
            </div>
        </div>
    </div>
</template>

<script lang="ts">
export default {
    name: 'IconButton',
    props: {
        icon: String,
        spin: {
            type: Boolean,
            default: false
        }
    }
};
</script>

<style scoped>
.icon-btn {
    width: 40px;
    height: 40px;
    border-radius: 50%;
    background-color: var(--lux-red);
    cursor: pointer;
    transition: 0.15s;
}

.icon-btn:hover {
    transform: scale(110%);
    background-color: var(--lux-orange);
}
</style>