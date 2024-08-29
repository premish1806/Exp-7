# Exp-7
Arrays and Strings in C++

## Aim:
The aim of this experiment is to understand and implement the basic concepts of arrays and strings in C++. We will explore various operations on arrays like creating, displaying, reversing, searching, and finding the sum, average, maximum, and minimum elements. Additionally, we will perform string manipulations such as concatenation, reversing, and checking for palindromes.

## Software Used:
- Dev c++

## Theory:
<h3>Arrays:</h3>
An array is a collection of elements of the same data type stored at contiguous memory locations. The elements in an array can be accessed using an index. Arrays are used when multiple elements need to be stored and accessed using a single variable name. They are particularly useful in scenarios where we need to perform operations on multiple elements together, like sorting, searching, and calculating the sum or average.

<h3>Strings:</h3>
A string is a sequence of characters treated as a single data type. In C++, strings are represented as arrays of characters, but the language provides the string class in the standard library, which offers a range of functionalities to manipulate strings efficiently. Strings are widely used for handling text data, and common operations include concatenation, reversing, and checking for palindromes.

## Program 1: Create and display arrays using a traditional for loop and a range-based for loop.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number of elements in an array: ";
  cin>>n;
  int a[n];
  cout<<"Enter the array elements: ";
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  cout<<"The elements of array are: ";
  for(int i=0;i<n;i++)
  {
     cout<<" "<<a[i];
  }
  return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/b15be4e4-430f-4ea3-9578-77dedeadb610)



## Program 2: Reverse the elements of an array.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
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
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/5e65deee-f057-4177-8773-2195531f5f9a)




## Program 3: Search an element in an array, print the number of times that element occurs in the array along with the position of the element.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    int n, i, j, s, c = 0, flag = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for( i = 0; i<n ; i++)
    {
        cin >> a[i];
    }
    cout << "Enter an element to be searched in an array: ";
    cin >> s;
    for (j= 0 ; j<n; j++)
    {
        if ( a[j]==s)
        {
            cout<< "The element "<< s << " is present at location: "<<j<<endl;
            c++;
            flag =1;
        }
    }

    if(flag ==0)
    {
        cout<< "The element "<< s << " is not present in the given array";
    }
    else
    {
        cout << "The element "<< s << " occurs "<< c << " times.";
    }
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/bbcb5e51-ebb3-4e97-a371-37995c2a58d5)




## Program 4: Sum & average of array elements.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    float avg, s = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for(i = 0; i<n ; i++)
    {
        cin >> a[i];
    }

    for(j= 0 ; j<n; j++)
    {
        s = a[j]+s;
    }
    avg = s/n;
    cout << "The sum of elements of the given array is: "<<s<<endl;
    cout << "The average of the given array is: "<< avg<<endl;

    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/8fe3f029-022d-45e4-80d9-40ebef508b67)



## Program 5: Maximum and minimum element from the given array.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    int n, i, j, max, min;
    cout << "Enter the number of elements: ";
    cin >> n;
    int a[n];
    cout << "Enter array elements: ";
    for(i = 0; i<n ; i++)
    {
        cin >> a[i];
    }
    max = a[0];
    min = a[0];
    for(j= 1 ; j<n; j++)
    {
        if (max<a[j])
        {
            max = a[j];
        }
        if (min > a[j])
        {
            min = a[j];
        }
    }
    cout <<"The maximum element in the given array is: "<<max<<endl;
    cout << "The minimum element in the array is: "<<min<<endl;
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/e26d1819-1e11-4bf7-9335-06b3cae78b7c)



## Program 6: Take the string as an input from the user and print.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your name: ";
    cin>>s;
    cout<<s;
    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/e5a0cc77-e36c-4082-8f78-76e6e4f6790d)



## Program 7: Enter name and surname differently and concatenate.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;
int main()
{
    string n, s;
    cout<<"Enter your name: ";
    cin>>n;
    cout<<"Enter Your Surname: ";
    cin>>s;
    cout<<"Fullname is "<< n << " " << s;
    return 0;
}
```
<strong> Output: </strong>
<br>



## Program 8: Reverse the string.
<br>

<strong> Code: </strong>
<br>
```cpp
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
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/f43a26b7-c2f1-4c1a-8a4f-8d82a81ccbaf)



## Program 9: Palindrome.
<br>

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string reversed_str = str;
    int n = reversed_str.length();

    // Reverse the string
    for (int i=(n-1); i>=0; i--) {
        char temp = reversed_str[i];
        reversed_str[i] = reversed_str[n - 1 - i];
        reversed_str[n - 1 - i] = temp;
    }

    // Check if the original string is equal to the reversed string
    if (str == reversed_str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
```
<strong> Output: </strong>
<br>
![image](https://github.com/user-attachments/assets/20c29a48-8272-4389-861d-c0a343240893)


## Conclusion:
From the above programs, we have learned the basics of handling arrays and strings in C++. Arrays allow us to store and manipulate multiple elements efficiently, and strings enable easy text manipulation. These fundamental concepts form the basis for more complex data structures and algorithms.




