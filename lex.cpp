#include <lex.h>

std::vector<token> tokens;

void lex(std::string stream){
	token tok="";
	for(int i=0;i<stream.length();i++){
		if(stream[i]==' ' || stream[i]=='\t' || stream[i]=='\n'){
			if(tok.length()) tokens.push_back(tok);
			tok="";
		}
		else
			tok+=stream[i];
	}
	tokens.push_back("$");
}