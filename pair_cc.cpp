#include<bits/stdc++.h>
using namespace std;    

#define F first
#define S second
#define pi pair<int,int>
#define mp make_pair
#define pb push_back
#define FOR(i,a,b) for(int i=(a);i<(b);i++)

int comp(const pi &p1 , const pi &p2){
    if(p1.F==p2.F)
        return (p1.S>p2.S) ;
    return (p1.F<p2.F) ;
}
void solve(){
    int n;
    cin >> n;
    vector <pi> p(n);
    FOR(i,0,n){
        cin >> p[i].F >> p[i].S ;
    }
    sort(p.begin(),p.end(),comp);
    double num = 0.0;
    FOR(i,1,n){
        num += sqrt(((p[i].F * p[i].F)-(p[i-1].F * p[i-1].F))+((p[i].S * p[i].S)-(p[i].S * p[i-1].S)));
    }
    cout << num << endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int t;
        cin>>t;
        while(t--){
            solve();
        }
    }
}