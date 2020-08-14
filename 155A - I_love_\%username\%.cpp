//By ankitraturi44, contest: Codeforces Round #109 (Div. 2), problem: (A) I_love_\%username\%, Accepted.



#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long int maxi=a[0],mini=a[0],c=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]<mini)
        {
            mini=a[i];
            c++;
        }
        if(a[i]>maxi)
        {
            maxi=a[i];
            c++;
        }
    }
    cout<<c;
    return 0;
}
