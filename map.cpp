//map store unique keys with sorted order
#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int, int> m;

    map<pair<int,int>, int> mp;

    map<int, pair<int,int>> mp1; 

    m[1] = 4; //m{(1,4)}
    m[4] = 2; //m{(1,4), (4,2)}
    m[2] = 8; //m{(1,4), (2,8), (4,2)}
    m.emplace(3,7); //m{(1,4), (2,8), (3,7), (4,2)}
    m.insert(5,7); //m{(1,4), (2,8), (3,7), (4,2), (5,7)}
    m.insert(4,2); //m{(1,4), (2,8), (3,7), (4,2), (5,7)} This will not work because the key 4 is allready present

    mp[{2,3}] = 10;

    cout<<m[3]<<endl; //7
    cout<<m[2]<<endl; //8

    auto it = m.find(4); //returns the pointer

    for(auto it : m){
        cout<<it.first<<" "<<it.second<<endl;
    }

    //rest of the functions are same

    return 0;
}