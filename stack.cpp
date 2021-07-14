#include<bits/stdc++.h>
using namespace std;
void display(stack<int> st1)
{
    int c=0;
    while(!st1.empty()){
    if(c%2 == 0)
        cout<<st1.top()<<" ";
    st1.pop();
    c++;
    }
}
int main()
{
    stack<int> st1;
    for(int i=0;i<10;i++)
    {
        st1.push(i);
    }
    display(st1);
}