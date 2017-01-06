project=asciibmp

all: $(project)
	./$(project) | less

$(project): $(project).cpp shape.h galaga.h
	g++ --std=c++14 -Os -lm $(project).cpp -s -o $(project)

check: $(project)
	strings $(project) | less

clean:
	rm -f $(project) *~
