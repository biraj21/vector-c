cc=gcc
flags=-Wall -Werror
src=src
bin=bin

all: setup  clean $(bin)/vector

setup:
	mkdir -p $(bin)	

clean:
	rm -f $(bin)/*

$(bin)/vector: $(src)/main.c $(src)/vector.c
	$(cc) $(flags) -o $@ $^
