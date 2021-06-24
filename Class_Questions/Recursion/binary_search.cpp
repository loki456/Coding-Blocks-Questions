#include <iostream>

using namespace std;

int search_(int start, int end, int a[], int key){
  int mid = (start + end) /2;
  if (key == a[mid])
    return mid;
  else{
  if (key < a[mid])
    mid = search_(start, mid-1, a, key);
  else  
    mid = search_(mid+1 ,end , a, key);
  }
  return -1;
}


int main()
{
  int n = 10, a[10], key = 3;
  for (int i=0; i<n; i++)
    cin>>a[i];
  int start = 0, end = n-1;
  cout<<search_(start, end, a, key);
  return 0;
}
