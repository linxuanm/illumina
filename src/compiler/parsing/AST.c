#include "AST.h"

#include "common/util/assert.h"

#define AST_TRANS(header, cont)\
    program_t *(header) {\
        program_t *node = malloc(sizeof(program_t));\
        ASSERT_MALLOC(node);\
        cont\
        return node;\
    }

// 'res': ptr to GEN_ARRAY
#define UNLIST(res, lst, lst_type, elem_field, elem_type, nxt_field)\
    do {\
        uint32_t length = 0;\
        lst_type curr = (lst);\
        while (curr != NULL) {\
            ++length;\
            curr = curr->nxt_field;\
        }\
        GEN_ARRAY_INIT((res), length, elem_type);\
        curr = (lst);\
        for (uint32_t i = 0; i < length; ++i) {\
            GEN_ARRAY_SET((res), i, curr->elem_field);\
            curr = curr->nxt_field;\
        }\
    } while (0)

AST_TRANS(gen_ast(Program program), {
    GEN_ARRAY_T(GlobDecl) decls;
    UNLIST(
        &decls, program->u.prog_.listglobdecl_, ListGlobDecl,
        globdecl_, GlobDecl, listglobdecl_
    );


})

AST_TRANS(gen_import(ImportDecl decl), {

})

AST_TRANS(gen_exp(Exp exp), {

})
