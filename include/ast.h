#ifndef __INCLUDE_AST_H
#define __INCLUDE_AST_H

#include <vector>

#include <lex.h>

//Nonterminal IDs
#define STMT_LIST -1
#define STMT      -2
#define PROC      -3

class Node{
public:
	virtual ~Node(){}
	virtual int getID()=0;
};

class NStatement : public Node{
public:
	Keyword cmd;
	Keyword io_type;
	int val;
	std::string id;
	
	int getID(){return STMT;}
};

class NStatementList : public Node{
public:
	std::vector<NStatement*> stmts;
	
	int getID(){return STMT_LIST;}
};

class NProcedure : public NStatement{
public:
	std::string id;
	NStatementList block;
	
	int getID(){return PROC;}
};

#endif
