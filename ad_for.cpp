#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v(5);
    for(int i=0;i<5;i++){
        v[i]=i;
    }
    for(int j:v)
        cout<<j<<" ";
}