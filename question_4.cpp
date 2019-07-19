//QUESTION
/*
 *
Arrays-Target Sum Triplets

Take as input N, the size of array. Take N more inputs and store that in an array. Take as input “target”, a number. Write a function which prints all triplets of numbers which sum to target.
Input Format:

First line contains input N. Next N lines contains the elements of array and N+1 line contains target number.
Constraints:

Length of Array should be between 1 and 1000.
output format

Print all the triplet present in the array.
sample input

9
5
7
9
1
2
4
6
8
3
10

sample output

1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5
 */
//CODE

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,i,left,right,mid,key;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>key;
    sort(a,a+n);
    left=0;right=n-1;mid=1;
    while(mid<right){
        if(a[mid]+a[right]<key-a[left])
            mid++;
        else if(a[mid]+a[right]>key-a[left])
            right--;
        else{
            cout<<a[left]<<", "<<a[mid]<<" and "<<a[right]<<endl;
            mid++;
            right--;
        }
        if(mid>=right){
            left++;
            mid=left+1;
            right=n-1;
        }
    }
    return 0;
}

