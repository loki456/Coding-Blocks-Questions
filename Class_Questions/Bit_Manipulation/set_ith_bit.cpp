#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

  int n, i,mask;
  cin>>n>>i;
  mask = 1<<i;
  int ans = (n|mask);
  cout<<ans;

  return 0;}

