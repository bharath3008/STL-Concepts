#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[k+1];
    a[k]=1;
    for(int i=0;i<k;i++){
        cin>>a[i];
        a[k]*=a[i];
    }
    cout<< a[k] << " ";
    deque<int> q(a,a+k+1);
    int next;
    for(int i=k;i<n;i++){
        next = (q.back()*q.back())/q.front();
        cout<< next << " ";
        q.push_back(next);
        q.pop_front();
    }
    return 0;
}