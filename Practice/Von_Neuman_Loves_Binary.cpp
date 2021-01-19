#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n, sum=0, rem=0, flag=0 ;
		cin>>n;
		while(n>0)
		{
			rem = n%10;
			if(rem==1)
			{
				sum += pow(2, flag);
			}
			n /=10;
			flag++;
		}
		cout<<sum<<endl;
	}
	return 0;
}
