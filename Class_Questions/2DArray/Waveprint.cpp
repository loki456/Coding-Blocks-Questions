#include<iostream>

using namespace std;

int main()
{
    int a[100][100] = {{1, 4, 7, 10}, 
                       {2, 5, 8, 11},
                       {3, 6, 9, 12}};
    for(int i=0; i<4; i++)
    {
        if (i%2 != 0)
        {
            for(int j=0; j<3; j++)
            {
                cout<<a[j][i]<<" ";
            }

        }
        else
        {
            for(int j=3; j>=0; j--)
            {
                cout<<a[j][i]<<" ";
            }
        }

    }
    return 0;
}