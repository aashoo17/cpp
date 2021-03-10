.SILENT:
all:main
	./main
	rm main

main: algorithms.cpp
	g++ -o $@ $?