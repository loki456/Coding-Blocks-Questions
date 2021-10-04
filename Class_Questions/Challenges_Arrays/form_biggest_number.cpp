#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld double

int compare(string a,string b)
{
    string ab = a.append(b);
    string ba = b.append(a);
    return ab.compare(ba)>0?1:0;
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<string> a;
        for(ll i=0;i<n;i++)
        {
            string d;
            cin>>d;
            a.push_back(d);
        }
        sort(a.begin(),a.end(),compare);
        for(ll i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
