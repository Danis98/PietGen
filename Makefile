ifeq ($(OS), Windows_NT)
	EXEEST = .exe
endif

INCLUDE_DIR = ./include

OBJS = main.o	\
	lex.o	\
	parse.o

all: $(OBJS)
	g++ -o pietgen$(EXEEST) $(OBJS)

%.o: %.cpp
	g++ -c $< -o $@ -I$(INCLUDE_DIR) -std=c++11

clean:
	rm -rf $(OBJS) pietgen$(EXEEST)

