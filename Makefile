INCLUDE_DIR = ./include

OBJS = main.o

all: $(OBJS)
	g++ -o pietgen $<

%.o: %.cpp
	g++ -c $< -o $@

clean:
	rm -rf $(OBJS) pietgen

