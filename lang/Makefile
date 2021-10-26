.SILENT:
all:main
	./main
	rm main

main: lambda.cpp
	clang++ -o $@ $< -std=c++17