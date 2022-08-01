#include <bits/stdc++.h>
using namespace std;


//In priority queue the largest element goes automatically at the top
//all the elements get sorted automatically
int main(){

    //This is the max heap
    priority_queue<int> pq; //{}

    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.emplace(8); //{8,5,2}
    pq.push(3); //{8,5,3,2}
    pq.pop();//{5,3,2}
    pq.pop();//{3,2}

    cout<<pq.top(); //returns the top element

    //This is the min heap
    priority_queue<int, vector<int>, greater<int>>; 
    pq.push(5);//{5}
    pq.emplace(4); //{4,5}
    pq.push(8); //{4,5,8}
    pq.top(); //4
    return 0;
}