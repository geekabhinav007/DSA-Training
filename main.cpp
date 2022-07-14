#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1,2,3}; 
    // if we dont intialize by default intilized by 0(Zero) in some compiler or in other grable value will be given to those indices where value is not given.
    cout<<arr[2]<<" "<<arr[4]<<" "<<arr[3]<<endl;  //  answer :-> 3 0 0
    int arr2[6] = {0};  // can intialize with zero;
    int arr3[8] = {1}; // can't intialized the whole elements by 1
    for (int i = 0 ; i<6 ; i++){
        cout<<arr2[i]<<" ";

    }
    // output of above for loop or values of arr2 is  0 0 0 0 0 0 
    cout<<endl;
    for (int i = 0 ; i<8 ; i++){
        cout<<arr3[i]<<" ";
        
    }
    // output of above for loop or values of arr3 is 1 0 0 0 0 0 0 0 
    
    return 0;
}