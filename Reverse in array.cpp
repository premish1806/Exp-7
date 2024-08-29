#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elements in an array";
  cin>>n;
  int a[n];
cout<<"Enter the array elements";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"The elements of array are";
   for(int i=n-1;i>=0;i--)
  {
     cout<<" ";
    cout<<a[i];
  }
   return 0;
}
