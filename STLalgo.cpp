#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if same
    if(p1.first > p2.first) return true;
    return false;
}

int main(){

    int arr[] = {4,2,3,1,6,5};
    sort(arr, arr+6); //in this way we can sort the arr
    sort(arr+2, arr+6); //in this way we can sort only specific array form starting index upto ending index
    sort(arr, arr+6, greater<int>()); //in this way we can sort in descinding order


    for(auto i: arr){
        cout<<i<<" ";
    }cout<<endl;

    //sort it according to my way
    pair<int,int> arr1[] = {{1,2}, {2,1}, {4,1}};
    sort(arr1, arr1+3, comp); //this is how we can sort according to our way
    //sort it accorinng to second element
    //ifthe second elements are same then sort it according to first element but in descending order
    for(auto i:arr1){
        cout<<i.first<<" "<<i.second<<endl;
    }
    vector<int> v = {7,5,6,8,2,4,3,1};
    sort(v.begin(), v.end()); //in this way we can sort the vector
    sort(v.begin()+2, v.end()); //in this way we can sort only specific vector from starting indes upto ending index
    sort(v.begin(), v.end(), greater<int>());  //in this way we can sort in descinding order

    for(auto i: v){
        cout<<i<<" ";
    }cout<<endl;

    return 0;
}