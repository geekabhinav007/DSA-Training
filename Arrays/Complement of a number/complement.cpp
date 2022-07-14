#include <bits/stdc++.h>
using namespace std;
 
 
// Driver Code
int main(void)
{
    int num;
    cout<<"Enter the number for complement"<<endl;
    cin>>num;
    int mask = 0;
    // most important to prepare mask
    // mask is value that is eualivalent to no of bits used to create num i,e. 3 bits for 5 => 101 , 4 bits for 8=> 1000 so mask of num is 111,1111 respectively all the bits are one(1) that is used to represent that number in binary.

    while(mask<num){
        mask = (mask << 1) | 1;
    }
    int ans = (~num) & mask;
    cout<<ans<<endl;
    return 0;
}