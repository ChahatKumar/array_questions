//QUESTION
/*
 *
Maximum Subarray Sum

You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7.
Input Format:

The first line consists of number of test cases T. Each test case consists of N followed by N integers.
Constraints:

1 <= N <= 100000

1 <= t <= 20

 -100000000 <= A[i] <= 100000000
output format

The maximum subarray sum
sample input

2
4
1 2 3 4
3
-10 5 10

sample output

10
15
 */
//CODE

#include<iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long n,i,sum=0,maxsum=0;
        cin>>n;
        long a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            sum=sum + a[i];
            if(sum<0){
                sum = 0;
            }
            maxsum= max ( sum,maxsum);
        }
        cout<<maxsum<<endl;
    }
    return 0;
}