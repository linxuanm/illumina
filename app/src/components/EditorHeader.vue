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
    </div>
</template>

<style scoped>
a {
    color: var(--bs-black);
    transition: 0.25s;
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
