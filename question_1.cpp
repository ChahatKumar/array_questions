//QUESTION
/*
Arrays-Max Value In Array

Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.

1.It reads a number N.

2.Take Another N numbers as input and store them in an Array.

3.calculate the max value in the array and return that value.
Input Format:

First line contains integer n as size of array. Next n lines contains a single integer as element of array.
Constraints:

N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000
output format

Print the required output.
sample input

4
2
8
6
4

sample output

8
 */
//CODE

#include<iostream>
using namespace std;
int main() {
    long long int i,n,prev=-1000000000,ans;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>prev)
        {
            ans=a[i];
            prev = ans;
        }

    }
    cout<<ans;
    return 0;
}