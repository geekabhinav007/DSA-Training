#include<iostream>
using namespace std;

int kadaneAlgo(int arr[] , int size){
    int maxi = INT32_MIN;
    int start = 0;
    int end = start;
    int sum = 0;
    for(int i = 0; i<size ; i++){
        sum = sum + arr[i];
        if(maxi<sum){
            maxi = sum;
            start = i;
            end = i+1;
            
        }
        
        if(sum<0){
            sum = 0;
            end = start +1;

        }
    }
    for(int i = start; i<end; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return maxi;
}
int main(){
    int arr[5]={-1,-2,-3,-4,-5};

    cout<<kadaneAlgo(arr,5)<<endl;
    return 0;
}
