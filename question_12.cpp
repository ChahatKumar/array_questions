///QUESTION
/*
 *
Chewbacca and Number

Luke Skywalker gave Chewbacca an integer number x. Chewbacca isn't good at numbers but he loves inverting digits in them. Inverting digit t means replacing it with digit 9 - t.

Help Chewbacca to transform the initial number x to the minimum possible positive number by inverting some (possibly, zero) digits. The decimal representation of the final number shouldn't start with a zero.
Input Format:

The first line contains a single integer x (1 ≤ x ≤ 10^18) — the number that Luke Skywalker gave to Chewbacca.
Constraints:

x <= 100000000000000000
output format

Print the minimum possible positive number that Chewbacca can obtain after inverting some digits. The number shouldn't contain leading zeroes.
sample input

4545

sample output

4444
*/
///CODE
#include<iostream>
using namespace std;
int main() {
    unsigned long long int x,sum=0,k=1;
    cin>>x;

    while(x>0)
    {int c=x%10;
        int ans= min(c,9-c);
        if(x<10 && ans==0)
        {ans =9;
        }
        sum = sum + ans*k ;
        x/=10;
        k*=10;
    }
    cout<<sum;
    return 0;
}