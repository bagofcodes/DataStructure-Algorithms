//D2:-This Program is about finding GCD of two numbers
#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the two numbers:-";
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    cout<<"The HCF of two numbers is :- "<<a;
	return 0;
}

