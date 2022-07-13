#include<iostream>
using namespace std;

// Recursive Approach
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n*factorial(n-1);
}



// Itrative approach
/*
int factorial(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    int ans = 1;
    for (int i = n;i> 0;i--){
        ans = ans * i;
    }
    return ans;
    
}
*/

int main(){
    int n = 7;
    int x = factorial(n);
    cout<<x<<endl;

}