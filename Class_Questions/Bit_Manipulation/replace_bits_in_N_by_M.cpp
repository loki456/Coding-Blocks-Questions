#include "/Users/acephoenix02/bits/stdc++.h"
using namespace std;

int main(){

  int n, i, j, clear_bits, m;

  //First we need to clear the bits in n in range i and j.
  cin>>n>>i>>j;
  cin>>m;
  clear_bits = ((1<<i)-1)|(~0<<(j+1));
  int ans = clear_bits&n;

  int final_= ans|(m<<i);
  cout<<final_<<endl;
  return 0;}

