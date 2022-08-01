#include <bits/stdc++.h>
using namespace std;

//This set stores the element in the sorted order but not store only unique element
int main(){
    multiset<int> ms; //{}
    ms.insert(1); //{1}
    ms.insert(1); //{1,1}
    ms.insert(1); //{1,1,1}
    ms.insert(1); //{1,1,1,1}

    int cnt = ms.count(1); //return the number of elements

    ms.erase(1); // erase all the 1's

    //rest of the functions are same as the set
}