#include<iostream>
using namespace std;
int main(){
    int array[] = {1,2,3,4,5,8,10};
    int array_size = sizeof(array)/sizeof(int);
    int reversedArray[array_size];
    for (int i = array_size ; i >=0 ; i--){
        reversedArray[array_size-i] = array[i-1];

    }
    for (int i = 0; i<array_size ; i++){
        cout<<reversedArray[i]<<" ";

    }
    cout<<endl;
    return 0;

}