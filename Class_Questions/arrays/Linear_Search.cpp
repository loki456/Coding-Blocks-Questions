#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void linear_search(int n, int a[100])
{
  cout<<endl<<"Enter the element which you want to search: ";
  int search;
  cin>>search;

  for(int i=0;i<n; i++)
    if(a[i] == search)
      cout<<endl<<"Element found at index "<<i+1<<endl;
}

int main(){
  int n, a[100];
  cout<<"Enter the number: ";
  cin>>n;
  cout<<endl<<"Enter the array: ";
  for(int i=0; i<n; i++)
    cin>>a[i];
  linear_search(n ,a);

  return 0;}

