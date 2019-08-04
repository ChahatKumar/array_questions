///QUESTION
/*
 *
Rotate Image (N X N Array)

Given a 2D array of size N x N. Rotate the array 90 degrees anti-clockwise.
Input Format:

First line contains a single integer N. Next N lines contain N space separated integers.
Constraints:

N < 1000
output format

Print N lines with N space separated integers of the rotated array.
sample input

4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

sample output

4 8 12 16
3 7 11 15
2 6 10 14
1 5 9 13

 */
///CODE
#include<iostream>
using namespace std;
int main() {
    int n,i,j;
    cin>>n;
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    //mirror
    j=0;
    while(j<n/2)
    {
        for(i=0;i<n;i++)
        {
            swap(a[i][j],a[i][n-j-1]);
        }
        j++;
    }
    //transpose
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<j){
                swap(a[i][j],a[j][i]);
            }
            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}