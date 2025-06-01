CC=g++
LINK=-lm
FLAGS=-Wall -g -O2 -std=c++20

NAME=solution

SOURCES=$(shell find . -type f -name $(problem).cpp)

clean:
	rm $(NAME)

build: $(SOURCES)
	@echo "-> Building problem $(problem)"
	$(CC) $(SOURCES) -o $(NAME) $(LINK) $(FLAGS)
	@echo "-> Done!"
