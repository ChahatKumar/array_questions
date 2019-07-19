//QUESTION
/*
 *
Rain Water Harvesting

Apoorvaa has created an elevated roof. She wants to know how much water can she save during rain.

Given n non negative integers representing the elevation map where width of every bar is 1, Find the maximum water that she can save.

Explanation for the Sample input Testcase:
Elevation Map

So the total units of water she can save is 5 units
Input Format:

First line contains an integer n. Second line contains n space separated integers representing the elevation map.
Constraints:
output format

Print a single integer containing the maximum unit of waters she can save.
sample input

10
0 2 1 3 0 1 2 1 2 1

sample output

5
 */
//CODE



#include<iostream>
using namespace std;
int main() {
    int i,n,left=0,right=0,ans=0;
    cin>>n;
    int a[n],l[n],r[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        l[i]=max(a[i],left);
        left=l[i];
        r[n-i-1]=max(a[n-i-1],right);
        right=r[n-i-1];

    }
    for(i=0;i<n;i++)
    {
        ans= ans + min(l[i],r[i])-a[i];
    }
    cout<<ans;
    return 0;
}

