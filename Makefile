.SILENT:
all:main
	./main
	rm main

main: file_io.cpp
	g++ -o $@ $?