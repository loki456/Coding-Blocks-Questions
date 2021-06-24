#include <iostream>

using namespace std;

int linear(int n, int a[], int k, int i){

  if (i == n)
    return -1;

  if (a[0] == k)
    return i;

  return linear(n, a+1, k, i+1);
}


int main(){

  int n=10, a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int key = 4;
  int i = 0;

  cout << linear(n, a, key, i);
  return 0;
}
