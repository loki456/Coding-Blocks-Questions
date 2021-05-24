#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n;
  int i;
  cin>>i>>n;
  
  int bitmask = 1<<i;
  int ans = (n&bitmask)>0?1:0;
  cout<<ans;
  return 0;}

