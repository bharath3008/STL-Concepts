#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    int ct=0;
    int ct1=0;
    cin >> n >> m >> k;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3(m+k);
    vector<int> v4(m+k);
     for(int i=0;i<m;i++)
        v1.push_back(i);
    for(int j=0;j<k;j++)
        v2.push_back(j);
    auto it = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(auto it=v3.begin();it!=v3.end();it++)
        ct++;
    auto it2 = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v4.begin());
    for(auto it=v4.begin();it!=v4.end();it++)
        ct1++;
    //int ans1 = v3.size();
    //int ans2 = v4.size();
    cout << ct << (n-ct1) <<endl;
}

int main() {
	// your code goes here
	int t;
	while(t--){
	    solve();
	}
	return 0;
}
