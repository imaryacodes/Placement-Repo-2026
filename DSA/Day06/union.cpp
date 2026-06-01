#include <bits/stdc++.h>
using namespace std;

vector<int> sortedUnion(vector<int> &a, vector<int> &b)
{
    int n1 = a.size();
    int n2 = b.size();

    set<int> st;
    for (int i = 0; i < n1; i++){
        st.insert(a[i]);
    }
    for (int i = 0; i < n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for (auto it : st){
        temp.push_back(it);
    }
    return temp;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};

    vector<int> ans = sortedUnion(a, b);
    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}