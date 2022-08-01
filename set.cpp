//It stores the elements in sorted way and stores only unique elements

#include <bits/stdc++.h>
using namespace std;

int main(){

    set<int> st;// {}

    st.insert(1); //{1}
    st.insert(4) ;//{1,4}
    st.emplace(3); //{1,3,4}
    st.insert(1); //{1,3,4}

    //{1,2,3,4,5}
    st.erase(3); // erase 3 from the array

    auto it = st.find(2); //it will point to the 2 in the set
    auto it1 = st.find(4); //it will poin to the 4 in the set
    int cnt = st.count(4); //return 1 if present returns 0 if not, because it stores only unique elements

    st.erase(it, it1); //{1,4,5}
    return 0;
}