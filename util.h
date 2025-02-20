#ifndef UTIL_H
#define UTIL_H

#include "ast_node.h"
#include "line_iterator.h"

void assert_valid_type(char *expr_type, line *curr_line);

void assert_valid_symbol(char *symbol, line *curr_line);

void assert_token_equals(char *token, char *expected_token, line *curr_line);

void assert_has_min_tokens(int min_tokens, int line_offset, line *curr_line);

void assert_unique_var(char *var_name, namespace *ns, line *curr_line);

void raise_compiler_error(char *message, ...);

#endif //UTIL_H
