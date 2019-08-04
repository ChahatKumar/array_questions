///QUESTION
/*
 *
Median of Sorted Arrays

We are given two sorted arrays of same size n. Find the median of an array formed after merging these two sorted arrays.
Input Format:

First line contains the input n. Second and Third line contains n space separated integers.
Constraints:

N < 1000
output format

Print the median in a single line.
sample input

5
1 3 5 7 9
2 4 6 8 10

sample output

5

 */
///CODE
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        cin>>b[i];
    }
    int arr[2*n];
    for(i=0;i<n;i++)
        arr[i]=a[i];
    for(i=n;i<2*n;i++)
        arr[i]=b[i-n];

    sort(arr,arr+(2*n));
    cout<<(arr[n-1]+arr[n])/2;
    return 0;
}