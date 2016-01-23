#ifndef __INCLUDE_LEX_H
#define __INCLUDE_LEX_H

#include <string>
#include <vector>

#define LEX_LIST \
	o(TOK_PROC, "proc",    1)\
	o(TOK_END,  "end",     2)\
	o(TOK_PUSH, "push",    3)\
	o(TOK_POP,  "pop",     4)\
	o(TOK_ADD,  "add",     5)\
	o(TOK_SUB,  "sub",     6)\
	o(TOK_MULT, "mult",    7)\
	o(TOK_DIV,  "div",     8)\
	o(TOK_MOD,  "mod",     9)\
	o(TOK_NOT,  "not",     10)\
	o(TOK_GT,   "greater", 11)\
	o(TOK_PTR,  "pointer", 12)\
	o(TOK_SW,   "switch",  13)\
	o(TOK_DUP,  "dup",     14)\
	o(TOK_ROLL, "roll",    15)\
	o(TOK_IN,   "in",      16)\
	o(TOK_OUT,  "out",     17)\
	o(TOK_INT,  "int",     18)\
	o(TOK_CHAR, "char",    19)\
	o(TOK_CALL, "call",    20)\
	o(TOK_EOS,  "$",       21)

typedef enum Keywords_enum{
	#define o(id, val, num) id=num,
		LEX_LIST
	#undef o
	TOK_INVALID=0
} Keyword;

typedef std::string token;

extern std::vector<token> tokens;

void lex(std::string char_stream);

#endif
