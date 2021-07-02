#include<iostream>

using namespace std;

void bubble_(int n, int *a, int i, int j){
  
  //base case
  
  if (i == n - 1){
    ++j;
    i = 0;
  }

  if (j == n - 1){
    for (int j=0; j<n; j++)
      cout << a[j] << ", ";
    return;
  }

  //recur case

  if (a[i] > a[i+1]){
    swap(a[i], a[i+1]);
  }

    bubble_(n, a, ++i, j);
}

int main(){
  int n=10, a[10] = {10, 9, 8, 5, 6, 7, 4, 3, 2, 1};
  int i=0, j=0;
  bubble_(n, a, i, j);
return 0;}
