#include<bits/stdc++.h>
using namespace std;
template <class p1>

void displayvecpair(const vector<p1> &p){
    for(auto i:p){
        cout << "(" << i.first << "," << i.second << ")" << endl; 
}
    cout << "Total Pairs = " << p.size() <<endl;
}

bool sortbysec(const pair<int,string> &p1,const pair<int,string> &p2){
    return (p1.second<p2.second);
}

int main(){
    vector<pair<int,int>> p;
    p.push_back({1,3});
    p.push_back(make_pair(2,4));
    displayvecpair(p);
    vector<pair<int,string>> p2;
    p2.push_back({10,"CEG"});
    p2.push_back({07,"CSE"});
    p2.push_back({18,"BHARATH"});
    p2.push_back({03,"SHANMUGAM"});
    sort(p2.begin(),p2.end());
    cout<<"----sorting by first pair-----"<<endl;
    displayvecpair(p2);
    cout<<"----sorting by second pair-----"<<endl;
    sort(p2.begin(),p2.end(),sortbysec);
    displayvecpair(p2);
}