//QUESTION
/*
Maximum Circular Sum

You are provided n numbers (both +ve and -ve). Numbers are arranged in a circular form. You need to find the maximum sum of consecutive number.
Input Format:

First line contains integer t which is number of test case. For each test case, it contains an integer n which is the size of numbers and next line contains n space separated integers.
Constraints:

1<=t<=100 1<=n<=1000
output format

Print the maximum sum.
sample input

1
7
8 -8 9 -9 10 -11 12

sample output

22
 */
//CODE

#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i,j,sum,maxsum,ans=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            sum=0,maxsum=0;
            for(j=i;j<n;j++){
                sum = sum + a[j];
                if(sum<0){
                    sum=0;
                }
                maxsum= max(sum,maxsum);
            }
            for(j=0;j<i;j++){
                sum=sum+a[j];
                if(sum<0){
                    sum=0;
                }
                maxsum=max(sum,maxsum);
            }
            ans=max(ans,maxsum);
        }
        cout<<ans<<endl;
    }
    return 0;
}