#include<iostream>
using namespace std;

int kadaneAlgo(int arr[] , int size){
    int maxi = INT32_MIN;
    int sum = 0;
    for(int i = 0; i<size ; i++){
        sum = sum + arr[i];
        if(maxi<sum){
            maxi = sum;
        }
        if(sum<0){
            sum = 0;
        }
    }
    return maxi;
}
int main(){
    int arr[8] = {-1,-2,-3,-4,-5,-6,-7,-8};
    cout<<kadaneAlgo(arr,8)<<endl;
    return 0;
}
