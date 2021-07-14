// Maps are Ordered by its Key(1st value)
#include<bits/stdc++.h>
using namespace std;

void display(map <char,int> mp){
        for(auto x : mp){
        cout << x.first << ":" << x.second <<endl;
        }
}

void display2(multimap <char,int> mp){
        for(auto x : mp){
        cout << x.first << ":" << x.second <<endl;
        }
}

int main(){
    /*map <char,int> mp;
    mp['q']=2;
    mp['z']=1;
    mp['b']=4;
    mp['a']=7;              // initializing By Random Access
    mp.insert({'f',1});     // initializing By inserting
    mp.insert(make_pair('n',10));
    //display(mp);            // display the map Keys with values
    if(mp.find('B')==mp.end())
        cout << "Not Found ! "<< endl;
    else
        cout << "found" <<endl;
    mp.erase('b');
    display(mp);  
    mp.erase(mp.begin(),mp.end());
    cout << mp.size() ;
    */
    multimap <char,int> mp2;
    mp2.insert({'a',1});
    mp2.insert({'a',1});
    mp2.insert({'z',4});
    mp2.insert({'a',1});
    mp2.insert({'b',2});
    mp2.insert({'a',1});
    auto occ= mp2.equal_range('a');
    display2(mp2);
    for(auto it = occ.first;it!=occ.second;it++){
        cout << (*it).second << endl;
    }
}