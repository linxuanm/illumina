import { createStore } from 'vuex';
import { SessionArguments } from '@script/integration/CodeActionHandler';

export default createStore({
    state: {
        running: false
    },
    mutations: {
        setRunning(state, running) {
            state.running = running;
        }
    },
    actions: {
        runCode(ctx, args: SessionArguments) {
            ctx.commit('setRunning', true);
            console.log(args.code);

            // TODO: setRunning with false after execution finish
        },
        interruptCode(ctx) {
            // TODO: change to 'interruptCodeExecution().then()'

            ctx.commit('setRunning', false);
        }
    }
});
