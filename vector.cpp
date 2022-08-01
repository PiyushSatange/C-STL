#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    vector<int> v; //{}

    v.push_back(1); //{1}
    v.push_back(3); //{1,3}
    v.push_back(4); //{1,3,4}
    v.emplace_back(2); //{1,3,4,2}

    vector<pair<int,int>> vp; //{}
    vp.push_back({3,4}); //{{3,4}}
    vp.emplace_back(5,6); //{{3,4},{5,6}} we don't have to use curly braces here as emplace_back automatically reconize it as a pair
   
    vector<int> v1(5, 100); //{100, 100, 100, 100, 100}
    vector<int> v2(5); //{0,0,0,0,0}
    vector<int> v3(v1); // This will make the exact vector like v1

    //Accessing the elements
    cout<<v[0]<<" "<<v.at(1)<<endl;

    vector<int>::iterator it = v.begin(); //Now, this it is pointing to the address of the v[0]
    
    cout<<*(it)<<endl;//1 //Now this will print the value of v[0]
    it++;
    cout<<*(it)<<endl;//3

    vector<int>::iterator it1 = v.end(); //Now, this will not point the last addresss, this will point to the next of the last address

    cout<<v.back()<<endl; //This will print the last element in the vector

    //In the following way we can itrate over the vector by using the for loop
    for(vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    //auto automatically detect the data type of the variable
    for(auto it = v.begin(); it!=v.end(); it++){
        cout<<*(it)<<" ";
    }

    for(auto i : v){
        cout<<i<<endl;
    }

    //erase function
    // {1,2,3,4,5}
    v.erase(v.begin()+1); // it will erase 2 {1,3,4,5}

    //erase more than 1 value:we have to give the starting index and last index+1
    v.erase(v.begin()+1, v.begin()+3); //it will erase 2 and 3 {1,4,5}
    
    //insert function
    //{1,2,3,4,5}
    v.insert(v.begin(), 10); //{10,1,2,3,4,5}
    v.insert(v.begin()+2, 20); //{10,1,20,2,3,4,5}

    //inserting more than 1 element in the vector
    //v.insert(position, no of values, no)
    // {1,2,3,4,5}
    v.insert(v.begin(), 5, 50); //{50,50,50,50,50,1,2,3,4,5}

    vector<int> copy = {2,3};
    vector<int> paste = {1,2,3,4,5};
    //paste.insert(position where to copy, form position to copy, upto position to copy)
    paste.insert(paste.begin(), copy.begin(), copy.end()); //{2,3,1,2,3,4,5}

    //swapping the two vectors
    vector<int> vs1(1,2);
    vector<int> vs2(3,4);
    swap(vs1,vs2); //vs1->(3,4) vs2->(1,2)

    v.clear(); //erase the entire vector

    v.empty(); //return true or false

    return 0;
}