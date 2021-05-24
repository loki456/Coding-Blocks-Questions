#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){
  int n, ans;
  cin>>n;
  while(n>0)
  {
    n = n&(n-1);
    ans++;
  }

  cout<<ans<<endl;


  return 0;}

