#include <bits/stdc++.h>
using namespace std;

//it follows last in first out rule ie, LIFO rule
int main(){

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(7);

    cout<<st.top(); //This will return the top most element

    st.pop(); //remove the top most element

    st.empty(); //return true or false

    st.size(); //return the size of the stack

    stack<int> st1;
    stack<int> st2;

    swap(st1, st2); //swap the stacks


    return 0;
}