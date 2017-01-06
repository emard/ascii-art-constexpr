project=asciibmp

all: $(project)

$(project): $(project).cpp shape.h galaga.h
	g++ --std=c++14 -Os $(project).cpp -s -o $(project)

run: $(project)
	./$(project) | less

check: $(project)
	strings $(project) | less

clean:
	rm -f $(project) *~
