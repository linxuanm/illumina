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
 * 'out': (initialized) output array ptr
 */
#define UNLIST(out, lst, lst_type, elem_field, nxt_field, map_func)\
    do {\
        uint32_t len = 0;\
        lst_type curr = (lst);\
        while (curr != NULL) {\
            void *val = map_func(curr->elem_field);\
            g_array_append_val(out, val);\
            curr = curr->nxt_field;\
        }\
    } while (0)

#define UN_IDEN(x) ((x)->u.packname_.iden_)

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
            case is_GImport: {
                program_t *import = gen_import(decl->u.gimport_.importdecl_);
                g_array_append_val(node->val.program.imports, import);
                break;
            }
            default:
                COMPILER_SET_ERRNO(SANITY_CHECK, "Inexhausive enum switch");
        }

        curr = curr->listglobdecl_;
    }
})

AST_TRANS(gen_import(ImportDecl decl), {
    node->kind = IMPORT;
    node->val.import.attrs = 0;
    node->val.import.pkgs = g_array_new(FALSE, FALSE, sizeof(char *));

    UNLIST(
        node->val.import.pkgs, decl->u.iimport_.listpack_,
        ListPack, pack_, listpack_, UN_IDEN
    );
})

AST_TRANS(gen_class_decl(ClassDecl decl), {
    node->kind = DECL_CLASS;
})

AST_TRANS(gen_func_decl(FuncDecl decl), {

})

AST_TRANS(gen_gval_decl(GVarDef decl), {

})

AST_TRANS(gen_exp(Exp exp), {

})
