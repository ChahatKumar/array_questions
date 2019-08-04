///QUESTION
/*
 *
Form Biggest Number

You are provided an array of numbers. You need to arrange them in a way that yields the largest value.
Input Format:

First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array A[] and next line contains n space separated integers A[i] .
Constraints:

1<=t<=100 1<=m<=100 1<=A[i]<=10^5
output format

Print the largest value.
sample input

1
4
54 546 548 60

sample output

6054854654
 */
///CODE
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int compare( string a,string b)
{
    if(a.append(b)>b.append(a))
        return 1;
    else
        return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string str[n];
        for(i=0;i<n;i++)
            cin>>str[i];
        sort(str,str+n,compare);
        for(i=0;i<n;i++)
            cout<<str[i];
        cout<<endl;
    }
    return 0;
}
