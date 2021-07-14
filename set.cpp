#include<bits/stdc++.h>
using namespace std;

class comp{
    public :
    bool operator()(const pair<int,int> &p1,const pair<int,int> &p2){
        return (p1.first<p2.first);
    }
};

int main(){
    unordered_set<int> s1;
    s1.insert(1);
    s1.insert(4);
    s1.insert(1);
    s1.insert(6);
    s1.insert(12);
    s1.insert(2);
    for(auto i : s1)
        cout << i << " ";
    /*s1.erase(s1.begin(),s1.end());
    for(auto i : s1)
        cout << i << " "; */
    cout << s1.size() ;
    auto it = s1.find(4);
    s1.erase(s1.begin(),it);
    cout << endl;
    for(auto i : s1)
        cout << i << " ";
    set <pair <int,int>,comp> s2;
    s2.insert({3,1});
    s2.insert({3,3});
    s2.insert({8,3});
    s2.insert({12,12});
    s2.insert({1,3});
    cout<<endl<< "---Set using pairs---"<<endl;
    for(auto i : s2){
        cout <<"(" << i.first << "," << i.second << ")";
    }
}