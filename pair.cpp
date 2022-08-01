#include <bits/stdc++.h>
using namespace std;

int main(){
    //In this way we can store two values
    pair <int,int> p = {3,5};
    cout<<"First number in pair is "<<p.first<<endl<<"Second number in pair is "<<p.second<<endl;

    //In this way we can store values 
    pair <int, pair <int, int>> p1 = {1, {2,3}};
    cout<<"First number in pair is "<<p1.first<<endl<<"Second number in pair is "<<p1.second.first<<endl<<"Third number in pair is "<<p1.second.second<<endl;;
    //In the same way above we can store 4, 5, 6 numbers of pair by nesting

    //We can insert values in pair like this
    pair <int, int> p2;
    p2.first = 8;
    p2.second = 1;
    cout<<"First number in pair is "<<p2.first<<endl<<"Second number in pair is "<<p2.second<<endl;


    return 0;
}