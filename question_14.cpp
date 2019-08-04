///QUESTION
/*
 *
Broken Calculator

Andrew was attempting a mathematics test where he needed to solve problems with factorials. One such problem had an answer which equaled 100! ,He wondered what would this number look like. He tried to calculate 100! On his scientific calculator but failed to get a correct answer. Can you write a code to help Andrew calculate factorials of such large numbers?
Input Format:

a single lined integer N
Constraints:

1 < = N < = 500
output format

Print the factorial of N
sample input

5

sample output

120

 */
///CODE
#include<iostream>
using namespace std;

void fact( int n)
{
    int arr[1000000];
    arr[0]=1;
    int arr_size=1;
    for(int i=2;i<=n;i++)
    {   int carry=0;
        for(int j=0;j<arr_size;j++)
        {
            int prod= arr[j]*i + carry;
            arr[j]=prod%10;
            carry = prod/10;
        }
        while(carry)
        {
            arr[arr_size]=carry%10;
            carry=carry/10;
            arr_size++;
        }
    }
    for(int i=arr_size-1;i>=0;i--)
    {
        cout<<arr[i];
    }

}
int main() {
    int n;
    cin>>n;
    fact(n);
    return 0;
}