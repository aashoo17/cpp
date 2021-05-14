.SILENT:
all:main
	./main
	rm main

main: macro.cpp
	g++ -o $@ $?