import { createApp } from 'vue';
import App from './App.vue';

import { library } from '@fortawesome/fontawesome-svg-core';
import { FontAwesomeIcon } from '@fortawesome/vue-fontawesome';
import { faFireAlt } from '@fortawesome/free-solid-svg-icons';
import { faGithub } from '@fortawesome/free-brands-svg-icons';

library.add(faFireAlt, faGithub);

const app = createApp(App);

app.component('font-awesome-icon', FontAwesomeIcon);
app.mount('#app');

import 'bootstrap/dist/css/bootstrap.min.css';

import '@/assets/styles/global.css';
import '@/assets/styles/din-font.css';
