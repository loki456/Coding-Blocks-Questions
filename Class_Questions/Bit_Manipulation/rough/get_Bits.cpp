#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, mask, ans;

  cin>>n>>i;
  mask = 1<<i;
  ans = (mask&n)>0?1:0;
  cout<<ans;

  return 0;}

