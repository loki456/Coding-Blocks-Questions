#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void binarysearch(int n, int a[100])
{
  int search, first=0, last=n;
  cout<<endl<<"Enter the element you want to search: ";
  cin>>search;
  while(first<=last)
  {
   int mid = (first+last)/2;
    if(a[mid] == search)
      {cout<<"Element found at index "<<mid;break;}
    if(a[mid]<search)
      last = mid-1;
    if(a[mid]>search)
      first=mid+1;
  }
}

int main(){
  int n, a[100];
  cout<<"Enter the size of the array: ";
  cin>>n;
  cout<<endl<<"ENter the array: " ;
  for(int i=0; i<n; i++)
    cin>>a[i];
  
  binarysearch(n, a);
  return 0;}

