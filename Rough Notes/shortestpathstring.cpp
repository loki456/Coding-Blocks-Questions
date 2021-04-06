#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main()
{
    char ch;
    int x, y;

    while(ch!='\n')
    {
        ch = cin.get();
        if(ch == 'n')
            x++;
        if(ch == 's')
            x--;
        if(ch == 'e')
            y++;
        if(ch == 'w')
            y--;        
    }
    cout<<endl<<x<<endl<<y;
    return 0;
}