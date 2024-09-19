#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter number of array element";
cin>>n;
int a[n];
cout<<"Enter array elements";
for(i=n-1;i<n;i++)
{
cin>>a[i];
}
cout<<"Array elements in reverse order";
for(i=n-1;i>=0;i--)
{
cout<<a[i];
}
return 0;
}
