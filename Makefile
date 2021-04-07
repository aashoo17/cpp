.SILENT:
all:main
	./main
	rm main

main: template.cpp
	g++ -o $@ $?