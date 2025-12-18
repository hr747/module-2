#include <bits/stdc++.h>

using namespace std;

 int main()

{
int n;
cin>>n;
vector<int>v(n);
for(auto &x:v)cin>>x;
for(auto x:v)
{ if(x>0)
    {
        cout<<1<<" ";
    }
    else if (x<0)
    {
        cout<<2<<" ";
    }
    else{
        cout<<0<<" ";
    }

}
    return 0;
}