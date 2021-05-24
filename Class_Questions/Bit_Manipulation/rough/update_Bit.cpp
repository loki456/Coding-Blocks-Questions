#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, mask, ans, v;
  
  cin>>n>>i>>v;
  int clear_bit = ~(1<<i);
  int ans1 = clear_bit&n;
  mask = v<<i;
  ans = mask|n;
  cout<<ans;
  return 0;}

