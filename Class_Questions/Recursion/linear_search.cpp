#include <iostream>

using namespace std;

int linear_(int n, int a[], int k, int i)
{
  // base case
  
  if (n == i)
    return -1;

  // recur case

  if (a[0] == k)
    return i;

  return linear_(n, a+1, k, i+1);
}

int main()
{
  int n=10, a[10]={1, 2, 3, 4 ,5, 6, 7, 8, 9,10}, key=7, i=0;

  cout<<linear_(n, a, key, i);

  return 0;
}
