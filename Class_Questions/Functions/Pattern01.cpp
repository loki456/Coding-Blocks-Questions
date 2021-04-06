#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;
  cout<<endl;
  cout<<"Pattern is: "<<endl;

  for(int i=1; i<=n; i++)
  {
    for(int j=0; j<2*i-1; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }


  return 0;}

