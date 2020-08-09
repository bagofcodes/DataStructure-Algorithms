//Day 5:In this Program I have learnt some of the trivial concepts on how to pass arguements to a function
//also here Ill show the function overloading concept

#include <iostream>
using namespace std;

//Pass by value function
int swap1(int a, int b)
{
    int temp =a;
    a=b;
    b=temp;
}

//Pass by address
float swap1(float *a,float *b)//overloaded Function
{
    float temp= *a;
    *a=*b;
    *b=temp;
}
//Pass by reference
int swap2(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
int main()
{
    int x=5,y=10;
    float m=10.5,n=8.9;

    cout<<"The value of x = "<<x<<" and y = "<<y<<" intially"<<endl;
    swap1(x,y);
    cout<<"The value of x = "<<x<<" and y = "<<y<<" after pass by value"<<endl;  //Original values wont be changed
    cout<<"The value of m = "<<m<<" and n = "<<n<<" intially"<<endl;
    swap1(&m,&n);
    cout<<"The value of m = "<<m<<" and n = "<<n<<" after pass by address"<<endl; //Values will be swapped in the original data
    swap2(x,y);
    cout<<"The value of x = "<<x<<" and y = "<<y<<" after pass by reference"<<endl; //Values will be swapped in the original data
    return 0;
}

