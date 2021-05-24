#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, mask, ans;
  cin>>n;
  
  while(n>0)
  {
    ans += n&1;
    n = n>>1;
  }
  cout<<ans;
  return 0;}

