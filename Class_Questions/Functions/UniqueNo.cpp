#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
  int n, a[100], unique=0;
  cout<<"Enter the size: ";
  cin>>n;
  cout<<endl<<"Enter the array: ";
  for(int i=0;i<n; i++)
  {
    cin>>a[i];
    unique = unique^a[i];
  }
  cout<<endl<<"Unique Number is: "<<unique;


  return 0;}

