#include<iostream>
using namespace std;
void userdefineSwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
// a function can swap using mathmatics using opertor + and -.
void SwapUsingMathmatics(){

}
// a function can swap using xor biwise operator.
void SwapUsingXor(){

}
void reverseArray(int arr[],int size){
    int i = 0;
    int j = size - 1;
    while(j>=i){
        swap(arr[i],arr[j]); // in-built swap function
      //userdefineSwap(arr[i],arr[j]); // user defined swap function 
        i++;
        j--;
    }
    for (int i = 0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[100];
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    cout<<"Enter the elements of array ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Reversed Array ";
    reverseArray(arr,n);
    return 0;
    
}