///QUESTION
/*
 *
Prime Visits

PMO gives two random numbers a & b to the Prime Minister. PM Modi wants to visit all countries between a and b (inclusive) , However due to shortage of time he can't visit each and every country , So PM Modi decides to visit only those countries,for which country number has two divisors. So your task is to find number of countries Mr. Modi will visit.
Input Format:

The first line contains N , no of test cases. The next lines contain two integers a and b denoting the range of country numbers.
Constraints:

a<=1000000 & b<=1000000. N<=1000
output format

Output contains N lines each containing an answer for the test case.
sample input

2
1 10
11 20

sample output

4
4
 */
///CODE
#include<iostream>
using namespace std;
int primesieve(int n)
{
    int i,k=0,j;
    int a[n+1]={0};
    for(i=2;i*i<=n;i++)
    {
        for(j=i*i;j<=n;j+=i)
        {
            a[j]=1;
        }
    }
    for(i=2;i<=n;i++){
        if(a[i]==0)
            k++;
    }
    return k;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int x= primesieve(b)- primesieve(a-1);
        cout<<x<<endl;
    }
    return 0;
}