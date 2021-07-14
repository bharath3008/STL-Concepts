#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    vector<int>ar(arr,arr+n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar.begin(),ar.end());
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    if(binary_search (ar.begin(),ar.end(),2))
        cout << "HII"<<endl;
    else 
        cout<<"OOPS"<<endl;
    int ct = count(ar.begin(),ar.end(),2);
    cout<<ct<<endl;
    auto fi= find(ar.begin(),ar.end(),3);
    if(fi!=ar.end())
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;
    reverse(ar.begin(),ar.end());
    for(auto i=ar.begin();i<ar.end();i++)
        cout<<*i<<" ";
}