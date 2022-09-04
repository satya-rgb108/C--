#include<iostream>
using namespace std;
long long factorial(int n){
    long long ans =1;
    for(int i =1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int main(){
    cout<< factorial(31)*32;
    return 0;
}