#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, mask;

  cin>>n>>i;
  mask = ~(1<<i);
  int ans = (mask&n);
  cout<<ans;


  return 0;}

