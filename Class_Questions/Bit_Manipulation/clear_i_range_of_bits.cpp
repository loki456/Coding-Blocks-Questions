#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i;
  cin>>n>>i;

  int mask = (~0)<<i;
  int ans = mask&n;
  cout<<ans;

  return 0;}

