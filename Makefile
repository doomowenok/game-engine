build:
	g++ -Wall -std=c++17 src/*.cpp -L/opt/homebrew/lib -lSDL2 -o engine

run:
	./engine

clean:
	rm engine