#include<iostream>

using namespace std;

void allOcc(int n, int a[], int key, int i){
  // base case
  if (i == n)
    return;
  // recur case

  if (a[i] == key)
    cout << i;

  allOcc(n, a, key, ++i);
}

int main(){
  int n=10, a[10] = {1, 2, 3, 4, 5, 6, 7, 7, 7, 10};
  int key=7, i=0;
  allOcc(n, a, key, i);
  return 0;
}
