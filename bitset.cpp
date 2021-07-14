#include<bits/stdc++.h>
using namespace std;
using namespace std:: chrono;   //to calculate time taken
#define endl '\n'       //to reduce the time taken for Endl;
int main(){
    ios_base::sync_with_stdio(false);       // used for Fast input and output
    cin.tie(NULL);

    bitset<10> s(1000);
    bitset<10> s1(0);
    bitset<1> s2(1);
    auto start = high_resolution_clock::now();
    cout << s << endl;      //converts 1000 into binary format
    cout << s[1] << endl; //random access
    cout << "size : " <<s.size() << "\n No. of Setbits(i.e: 1) :" << s.count() << endl;  //counts no. of setbits in bit
    cout << s.test(3) << endl;  // instead of at() in bitset we use test
    cout << s.any() <<endl;
    cout << s1.any() <<endl; //ANY returns 1 if any of the bit contains 1 in it else 0
    cout << s1.none() << ' ' << s.none() << endl;   //NONE returns 1 if all the bits are 0 else 1
    cout << s.all() << " " << s2.all() <<endl;  //returns 1 if all the bits are 1 else returns 0
    auto end = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds> (end-start);
    cout << duration.count() << endl;
}

