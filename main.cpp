#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

void fatal(std::string msg){
	std::cout<<"[FATAL] "<<msg<<"\n";
	exit(0);
}

int main(int argc, char **argv){
	if(argc!=2)
		fatal("Select one input file");
	
	std::ifstream in_file(argv[1]);
	std::stringstream ss;
	ss<<in_file.rdbuf();
	std::string char_stream=ss.str();
	
	
}
