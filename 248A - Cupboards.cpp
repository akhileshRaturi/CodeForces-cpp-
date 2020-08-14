#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    int c=0,d=0,e=0,f=0;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if(a==0)
        {
            c++;
        }
        if(a==1)
            d++;
        if(b==0)
            e++;
        if(b==1)
            f++;
    }
    int sum=0;
    if(c>d)
        sum+=d;
    else
        sum+=c;
    if(e>f)
        sum+=f;
    else
        sum+=e;
    cout<<sum<<"\n";
    return 0;
}
