///QUESTION
/*
 *
Arrays-Spiral Print Anticlockwise

Take as input a 2-d array. Print the 2-D array in spiral form anti-clockwise.
Input Format:

Two integers M(row) and N(colomn) and further M * N integers(2-d array numbers).
Constraints:

Both M and N are between 1 to 10.
output format

All M * N integers separated by commas with 'END' written in the end(as shown in example).
sample input

4 4
11 12 13 14
21 22 23 24
31 32 33 34
41 42 43 44

sample output

11, 21, 31, 41, 42, 43, 44, 34, 24, 14, 13, 12, 22, 32, 33, 23, END
 */
///CODE
#include<iostream>
using namespace std;
int main() {
    int m,n,i,j;
    cin>>m>>n;
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int startrow=0,endrow=m-1,startcol=0,endcol=n-1;
    while(startrow<=endrow && startcol<=endcol)
    {
        for(i=startrow;i<=endrow;i++)
        {
            cout<<a[i][startcol]<<", ";
        }
        startcol++;
        for(j=startcol;j<=endcol;j++)
        {
            cout<<a[endrow][j]<<", ";
        }
        endrow--;
        if(startcol<=endcol)
        {
            for(i=endrow;i>=startrow;i--)
            {
                cout<<a[i][endcol]<<", ";
            }
            endcol--;
        }
        if(startrow<=endcol)
        {
            for(j=endcol;j>=startcol;j--)
            {
                cout<<a[startrow][j]<<", ";
            }
            startrow++;
        }
    }
    cout<<"END";
    return 0;
}