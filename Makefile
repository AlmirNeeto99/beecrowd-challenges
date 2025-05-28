CC=g++
LINK=-lm
FLAGS=-Wall -g

NAME=solution

SOURCES=$(shell find . -type f -name $(problem).cpp)

clean:
	rm $(NAME)

build: $(SOURCES)
	@echo "-> Building problem $(problm)"
	$(CC) $(SOURCES) -o $(NAME)
	@echo "-> Done!"
