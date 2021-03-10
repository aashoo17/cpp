.SILENT:
all:main
	./main
	rm main

main: memory.cpp
	g++ -o $@ $?