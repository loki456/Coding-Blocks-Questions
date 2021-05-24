#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int a, b, mask, n, i, j;
  cin>>n>>i>>j;
  a = (~0<<(j+1));
  b = (1<<i) - 1;

  mask = a|b;

  int ans = mask&n;
  cout<<ans;
  return 0;}

