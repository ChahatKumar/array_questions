///QUESTION
/*
 *
Matrix Search

Given an n x m matrix, where every row and column is sorted in increasing order, and a number x . Find if element x is present in the matrix or not.
Input Format:

First line consists of two space separated integers N and M, denoting the number of element in a row and column respectively. Second line of each test case consists of N*M space separated integers denoting the elements in the matrix in row major order. Third line of each test case contains a single integer x, the element to be searched.
Constraints:

1 <= N,M <= 30 0 <= A[i] <= 100
output format

Print 1 if the element is present in the matrix, else 0.
sample input

3 3
3 30 38
44 52 54
57 60 69
62

sample output

0

 */
///CODE
#include<iostream>
using namespace std;
int main() {
    int m,n,k=0,i,j;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int key;
    cin>>key;
    i=0,j=n-1;
    while(i<m && j>=0)
    {
        if(a[i][j]==key)
        {
            k=1;
            cout<<k;
            break;
        }
        else if(a[i][j]<key)
            i++;
        else
            j--;
    }
    if(k==0)
    {
        cout<<k;
    }
    return 0;
}