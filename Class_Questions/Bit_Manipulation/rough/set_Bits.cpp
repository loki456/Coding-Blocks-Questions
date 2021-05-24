#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, mask, ans;
  cin>>n>>i;
  mask = 1<<i;
  ans = mask|n;
  cout<<ans<<endl;
  return 0;}

