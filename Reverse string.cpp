// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int n=str.length();
    for(int i=(n-1);i>=0;i--)
    {
        cout<<str[i];
    }
    cout << endl;
    return 0;
}
