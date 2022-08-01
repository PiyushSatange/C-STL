#include <bits/stdc++.h>
using namespace std;

//it stores only unique element but not in the sorted order
int main(){
    unordered_set<int> us;
    us.insert(1);
    us.insert(2);
    us.insert(1); //this will not be inserted again
    us.insert(3);
    us.insert(4);
    //The order can be anything
    //rest of the fuctions are same as set
}