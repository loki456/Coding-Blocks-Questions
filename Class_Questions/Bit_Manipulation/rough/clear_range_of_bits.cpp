#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, ans, mask, i;
  cin>>n>>i;

  mask = -1<<i;
  ans = mask & n;
  cout<<ans;

  return 0;}

