#include "AST.h"

#include "common/util/assert.h"
#include "compiler/compiler_state.h"

#define AST_TRANS(header, cont)\
    program_t *(header) {\
        program_t *node = malloc(sizeof(program_t));\
        ASSERT_MALLOC(node);\
        cont\
        return node;\
    }

/*
 * 'out': ptr to array ptr
 */
#define UNLIST(out, lst, lst_type, elem_field, elem_type, nxt_field)\
    do {\
        uint32_t len = 0;\
        lst_type curr = (lst);\
        while (curr != NULL) {\
            ++len;\
            curr = curr->nxt_field;\
        }\
        *(out) = g_array_sized_new(FALSE, FALSE, sizeof(elem_type *), len);\
        curr = (lst);\
        for (uint32_t i = 0; i < len; ++i) {\
            g_array_insert_val(*(out), i, curr);\
            curr = curr->nxt_field;\
        }\
    } while (0)

AST_TRANS(gen_ast(Program program), {
    node->kind = PROGRAM;
    node->val.program.imports = g_array_new(FALSE, FALSE, sizeof(program_t *));
    node->val.program.classes = g_array_new(FALSE, FALSE, sizeof(program_t *));
    node->val.program.funcs = g_array_new(FALSE, FALSE, sizeof(program_t *));
    node->val.program.vars = g_array_new(FALSE, FALSE, sizeof(program_t *));

    ListGlobDecl curr = program->u.prog_.listglobdecl_;
    while (curr != NULL) {
        GlobDecl decl = curr->globdecl_;
        switch (decl->kind) {
            case is_GMemDecl:
                break;
            case is_GClassDecl:
                break;
            case is_GImport:
                break;
            default:
                COMPILER_SET_ERRNO(SANITY_CHECK, "Inexhausive enum switch");
        }

        curr = curr->listglobdecl_;
    }
})

AST_TRANS(gen_import(ImportDecl decl), {

})

AST_TRANS(gen_class_decl(ClassDecl decl), {

})

AST_TRANS(gen_func_decl(FuncDecl decl), {

})

AST_TRANS(gen_gval_decl(GVarDef decl), {

})

AST_TRANS(gen_exp(Exp exp), {

})
