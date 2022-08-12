#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number to check whether it is prime or not?"<< endl;
    cin >> n;
    int i =2;
    while(i<n){
        if(n%i==0){
            cout<<n<<" is not a prime number"<< endl;
            break;
        }
        else{
            i = i+1;
        }
    }
    if(i==n){
        cout<<n<<" is a prime number"<< endl;

    }
}