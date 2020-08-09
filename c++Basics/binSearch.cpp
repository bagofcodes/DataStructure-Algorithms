//D3:This a program using C++ on Binary Search
#include <iostream>
using namespace std;

int main()
{
    int s,k,lb=0,ub;
    cout<<"Enter the size of the array: ";
    cin>>s;
    int a[s];
    cout<<"Enter the elements of the array in ascending order: ";
    for(int i=0;i<s;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched: ";
    cin>>k;
    ub=s-1;
    while(lb<ub)
    {
        int mid=(lb+ub)/2;
        if(k==a[mid])
        {
            cout<<"Element "<<k<<" is found at index "<<mid+1;
            return 0;
        }
        else if(k>a[mid])
            lb=mid+1;
        else
            ub=mid-1;
    }
    cout<<"Element not present in the array...!!!!";
    return 0;
}
