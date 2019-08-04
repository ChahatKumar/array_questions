///QUESTION
/*
 *
Arrays-Sum Of Two Arrays

Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.
Input Format:
Constraints:

Length of Array should be between 1 and 1000.
output format
sample input

4
1 0 2 9
5
3 4 5 6 7

sample output

3, 5, 5, 9, 6, END

 */
///CODE
#include<iostream>
using namespace std;
int main() {
    int n,m,i,j,carry=0;
    int a[1000]={0},b[1000]={0},arr[2000];
    cin>>n;
    for(i=n-1;i>=0;i--)
    {
        cin>>a[i];
    }
    cin>>m;
    for(i=m-1;i>=0;i--)
    {
        cin>>b[i];
    }
    arr[0]=0;
    int arr_size=max(m,n);
    for(i=0;i<arr_size;i++)
    {
        int sum = a[i]+ b[i]+carry;
        arr[i]=sum%10;
        carry = sum/10;
    }
    while(carry)
    {
        arr[arr_size]=carry%10;
        carry=carry/10;
        arr_size++;

    }
    for(i=arr_size-1;i>=0;i--)
    {
        cout<<arr[i]<<", ";
    }
    cout<<"END";
    return 0;
}