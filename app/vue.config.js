const path = require('path');
const { defineConfig } = require('@vue/cli-service');

module.exports = defineConfig({
    transpileDependencies: true,
    filenameHashing: false,
    chainWebpack: cfg => {
        cfg.resolve.alias.set(
            '@script',
            path.resolve(__dirname, 'src/assets/scripts')
        );
    }
});


