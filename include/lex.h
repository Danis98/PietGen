#ifndef __INCLUDE_LEX_H
#define __INCLUDE_LEX_H

#include <string>

#define TOK_PROC	"proc"
#define TOK_END		"end"
#define TOK_PUSH	"push"
#define TOK_POP		"pop"
#define TOK_ADD		"add"
#define TOK_SUB		"sub"
#define TOK_MULT	"mult"
#define TOK_DIV		"div"
#define TOK_MOD		"mod"
#define TOK_NOT		"not"
#define TOK_GT		"greater"
#define TOK_PTR		"pointer"
#define TOK_SW		"switch"
#define TOK_DUP		"dup"
#define TOK_ROLL	"roll"
#define TOK_IN		"in"
#define TOK_OUT		"out"
#define TOK_INT		"int"
#define TOK_CHAR	"char"

typedef std::string token;

extern std::vector<token> tokens;

void lex(std::string char_stream);

#endif
