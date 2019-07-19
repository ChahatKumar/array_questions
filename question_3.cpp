//QUESTION
/*
 *
Arrays-Target Sum Pairs

Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all pairs of numbers which sum to target.
Input Format:

The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.
Constraints:

Length of the arrays should be between 1 and 1000.
output format

Print all the pairs of numbers which sum to target. Print each pair in increasing order.
sample input

5
1
3
4
2
5
5

sample output

1 and 4
2 and 3
 */
//CODE

#include<iostream>
using namespace std;
int main() {
    int i,j,key,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==key){
                cout<<min(a[i],a[j])<<" and "<<max(a[i],a[j])<<endl;
            }
        }
    }

    return 0;
}