#include <bits/stdc++.h>
using namespace std;

//This is the doubly ended queue
int main(){

    deque<int> d; //{}
    d.push_back(1); //{1}
    d.emplace_back(2); //{1,2}
    d.push_front(3); //{3,1,2}
    d.emplace_front(4); //{4,3,1,2}

    d.pop_back(); //{4,3,1}
    d.pop_front(); //{3,1}

    //rest of the functions are same as vector
    //begin, end, empty, size, insert, swap

    return 0;
}