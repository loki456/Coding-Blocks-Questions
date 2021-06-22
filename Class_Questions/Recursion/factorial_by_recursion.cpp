#include<iostream>

using namespace std;


int fact(int n)
{
  //base case
 if (n == 0)
  return 1;
  
 //recursion case
 int ans = fact(n-1);
 return n * ans;
}

int main()
{
 int n;
 cin>>n;

 cout << fact(n);

 return 0;
}
