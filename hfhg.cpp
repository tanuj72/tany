#include <iostream>
using namespace std;

int main()
{ 
char  ch;
cin>>ch;
if(65<=ch && ch<=90)
{
    cout<<"THIS IS UPPERCASE"<<endl;
}
else if(97<=ch && ch<=122)
{
    cout<<"THIS IS LOWERCASE"<<endl;
}
else if(48<=ch && ch<=57)
{
    cout<<"THIS IS NUMERIC"<<endl;
}
else 
{
    cout<<"EXTRA SYMBOLS";
}

    return 0;
}