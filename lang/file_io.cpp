#include <fstream>
#include <iostream>

using namespace std;

// read from file
void read_file() {
  ifstream f("file.txt");
  // TODO: what os f.open() calls used sometimes
  char buf[20];
  // f.read(buf, 20);
  f >> buf; // TODO: this seems to read till first white space huh
  f.close();

  cout << buf << endl;
}

// write to file
void write_file() {
  ofstream f("file.txt");

  f << "Hello World";
  // f.write()    can also be made
  f.close();
}

// open for read and write both
void read_write_file() {
  fstream f("file.txt");
  f << "Hello World from Ashu";

  char buf[30];
  f >> buf;

  f.close();
}

int main() { read_file(); }