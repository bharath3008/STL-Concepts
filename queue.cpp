#include<bits/stdc++.h>
using namespace std;
queue<int> rem_mul_2(queue<int> q1)
{   
    queue<int> ans;
    while(!q1.empty()){
        if(q1.front()%2!=0)
            ans.push(q1.front());
        q1.pop();
    
}
    return ans;
}
void printq(queue<int> q1){
    while(!q1.empty()){
        cout<<q1.front()<< " ";
        q1.pop();
    }
    cout<<endl;
}
int main(){
    queue<int> q1,q2;
    for(int i=0;i<50;i=i+5){
        q1.push(i);
    }
    printq(q1);
    q2 = rem_mul_2(q1);
    printq(q2);
    cout<<q1.size()<<" "<<q2.size();
}