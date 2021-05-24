#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, v, ans, mask;
  cin>>n>>i>>v;

  mask = ~(1<<i);
  ans = mask&n;
  int final_ans = ans|(v<<i);
  cout<<final_ans;
  return 0;}

