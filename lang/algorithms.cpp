#include <algorithm>
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;
//do all common algorithms
//using the following link for basic algorithms uses
//[stl algorithms](https://www.cs.helsinki.fi/u/tpkarkka/alglib/k06/lectures/algorithms.html)
void algorithms(){
    //taking vector as sample here but can be used on any other sequential containers - deque, list etc
    vector<int> a{100,40,30,20,50,10,90,60,80,70};
    vector<int> b{20,50,10};    //this will be used to provide range of value when algorithms required
    vector<int> c{100,40,30,20,50,10,90,60,80,70};  //use this if write is required and don't want to change vector a

    //use these const_iterators for algorithms which will take read only access 
    auto cbegin = a.cbegin();
    auto cend = a.cend();

    //use these iterators if write access is required
    auto begin = a.begin();
    auto end = a.end();

    //so these algorithms generally return iterator - that means they kinda give position
    //search:
    //TODO: if element was not found where iterator will point - i.e. how will i know element was not found
    //search 1 element
    auto find_itr = find(cbegin,cend,1000); 
    auto find_itr2 = find_if(cbegin,cend,[=](int a){return a == 10;});    //takes unary predicate
    //search for range of elements
    auto search_itr = search(cbegin,cend,b.cbegin(),b.cend());

    //compare range


    //for_each()

    //copy
    copy(b.cbegin(),b.cend(),c.begin());

    //replace
    //replace(begin, end, old_value, new_value);
    replace(c.begin(), c.end(), 70, 7000);
    //replace_if(begin, end, predicate, new_value);
    replace_if(c.begin(), c.end(), [=](int a){return a < 50;}, 7000);

    //remove elements
    // remove(begin, end, value);
    //TODO: will this remove all elements or 1 element which is first found
    //TODO: does remove and emit the new iterator as clang-tidy is saying to use return value
    // remove(c.begin(),c.end(),7000);
    // remove_if(begin, end, predicate);
    // remove_if(c.begin(),c.end(),[](int a){return a > 50;});

    //partition
    //partition (begin, end, predicate);
    partition(c.begin(), c.end(), [=](int a){return a < 100;});

    //sort
    sort(a.begin(),a.end(),[=](int a, int b){return a < b;});    //order may be chabged for same values
    //stable_sort() is similar but if two elements are same it will ensure that order is not changed

    //binary search
    binary_search(a.begin(),a.end(),40);

    //merge
    // merge(a.cbegin(),a.cend(),b.cbegin(),b.cend(),c.begin());

    //binary heap
    // make_heap(c.begin(),c.end());
    // push_heap(c.begin(),c.end(),200);
    // pop_heap(c.begin(),c.end(),200);
    // sort_heap(c.begin(),c.end());
    // for (auto i : c){
    //     cout << i << " ";
    // }
    
    //fill ranges
    fill(c.begin(),c.end(),10);
    fill_n(c.begin(),5,20);
    //use this to print iterator for checking values
    // for (auto i : c){
    //     cout << i << " ";
    // }
    cout << endl;
}

int main(){
    algorithms();
}