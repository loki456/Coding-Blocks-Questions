#include<iostream>

using namespace std;

void print_(int n)
{
  if (n == 0)
  {
    return;
  }
  cout << n;
  print_(n-1);
}


int main(){
  int n;
  cin >> n;
  print_(n);
  return 0;
}
