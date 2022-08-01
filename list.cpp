#include <bits/stdc++.h>
using namespace std;

//This is the linked list
int main(){

    list<int> l; //{}
    l.push_back(1); //{1}
    l.emplace_back(2); //{1,2}
    l.push_front(3); //{3,1,2}
    l.emplace_front(4); //{4,3,1,2}
    l.pop_back(); //{4,3,1}
    l.pop_front(); //{3,1}

    //rest function same as vector
    //begin , end , clear , insert , swap , size

    return 0;
}