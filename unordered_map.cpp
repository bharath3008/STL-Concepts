#include<bits/stdc++.h>
using namespace std;

void display(unordered_map<char,int> &mp){
    int ct=0;
    for(auto p : mp){
        cout << p.first << " : " << p.second <<endl;
        ct++;               // Calculating Unique Values
    }
    cout << "No. of Unique Values : "<< ct <<endl;
}

int main(){
    unordered_map<char,int> mp;
    mp['a'] = 1;
    mp['u'] = 2;
    mp['c'] = 3;
    mp['l'] = 10;   //insertion by random access
    mp['l'] = 2;
    mp['j'] = 99;
    mp['a'] = 12;   //updating a value
    mp.insert({'c',2});
    mp.insert({'a',2});
    mp.insert({'d',2});
    mp.insert({'f',2});
    mp.insert({'c',2});
    mp.insert({'a',2});  //While using Insert Function Already Present Value will be ignored
    //mp.erase(mp.begin(),mp.end());  // Erasing Whole Map
    display(mp);
    //mp.erase('a');  //removed the value 'a'
    if(mp.find('a')!=mp.end())
        cout << "Found! " << mp['a'] << endl;   //We can Found the Value just by using its key in Maps and sets
    else
        cout << "Not Found " << endl;
    
}