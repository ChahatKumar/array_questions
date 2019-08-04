///QUESTION
/*
 *
Maximum length Biotonic Subarray

You are provided n numbers of array. You need to find the maximum length of bitonic subarray. A subarray A[i … j] is biotonic if there is a k with i <= k <= j such that A[i] <= A[i + 1] … <= A[k] >= A[k + 1] >= .. A[j – 1] > = A[j] i.e subarray is first increasing and then decreasing or entirely increasing or decreasing.
Input Format:

First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of array and next line contains n space separated integers.
Constraints:

1<=t<=100 1<=n<=1000000
output format

Print the maximum length.
sample input

2
6
12 4 78 90 45 23
4
40 30 20 10

sample output

5
4
*/
///CODE

#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long n,i,j,sum,ans=0;
        cin>>n;
        long a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<n;j++)
        {    sum=0;
            for(i=j;i<n-1;i++)
            {
                if(a[i]>a[i+1])
                    break;
            }
            int k=i;
            for(i=k;i<n-1;i++)
            {
                if(a[i]<a[i+1])
                    break;
            }
            sum= i-j+1;
            ans=max(ans,sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}