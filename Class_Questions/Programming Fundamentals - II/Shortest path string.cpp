#include<iostream>

using namespace std;

int main()
{
    int x=0, y=0;
    cout<<"Type (.) to end the string"<<endl;
    char ch;
    ch = cin.get();
    while(ch!='.')
    {
        if (ch == 'N' || ch == 'n')
            y++;
        if (ch == 'S' || ch == 's')
            y--;
        if (ch == 'E' || ch == 'e')
            x++;
        if (ch == 'W' || ch == 'w')
            x--;
        ch = cin.get();
    }
    cout<<endl<<x<<endl<<y;
    return 0;
}