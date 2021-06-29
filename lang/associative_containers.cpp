#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <utility>

using namespace std;

/*
Associative containers:
these containers keep their elements based on some logic to their value inside
the containers they can reorder the element as per their wish for storing

map, unordered_map, multimap:
map gets ordered by its keys
unordered_map don't get ordered by keys they use hash function to put elements
at some location multimap can have same key more than once
*/

// pair api
// as pairs will be commonaly used in map
void pair_() {
  // creating pair
  pair<int, int> a;
  pair<int, int> b = make_pair(1, 10);
  pair<int, int> c(1, 10);
  pair<int, int> d = pair<int, int>(1, 10);

  // changing pair
  a.first = 1;
  a.second = 10;

  // get first and second element
  cout << b.first << endl;
  cout << b.second << endl;
}

void map_() {
  // create
  map<int, int> a;
  map<int, string> b = {{1, "Hello"},
                        {2, "World"}}; // using list initializer literal for map

  // insert/remove
  // TODO: emplace vs insert. difference ?
  // TODO: pair cleanup ?
  a.insert(pair<int, int>(1, 10));
  a.insert(make_pair(2, 20));
  a.emplace(make_pair(3, 30));
  a.erase(2);

  // indexing/subscript
  a[4] = 40; // change key 4 if not available add key,value pair
  int c = a.at(4);

  // find value
  auto d = a.find(30); // gives iterator to first matching element

  for (auto i : a) {
    cout << i.first << " " << i.second << endl;
  }
}

void unordered_map_() {
  unordered_map<int, int> a;

  // FIXME: insert() throwing error
  // a.insert(1,10);
  a.emplace(2, 20);

  a[3] = 30;

  for (auto i : a) {
    cout << i.first << " " << i.second << endl;
  }
}

void set_() {
  // create
  set<int> a = {10, 20, 30, 40, 50};

  a.insert(60);
  a.emplace(70);
  a.erase(30);

  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
}

void unordered_set_() {
  unordered_set<int> a = {10, 20, 30, 40, 50};

  a.insert(60);
  a.emplace(70);
  a.erase(30);

  for (auto i : a) {
    cout << i << " ";
  }
  cout << endl;
}

int main() { unordered_set_(); }