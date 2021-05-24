#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){
  int n1, n2, ans;
  cin>>n1>>n2;

  for(int i=n1; i<=n2; i++)
  {
    ans = ans ^ (i);
  }
  cout<<ans;
  return 0;}

