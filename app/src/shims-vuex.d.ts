import state from '@/assets/scripts/util/state';

declare module '@vue/runtime-core' {
    interface ComponentCustomProperties {
        $store: state;
    }
}
