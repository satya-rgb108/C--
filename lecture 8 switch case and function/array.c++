#include<iostream>
using namespace std;

int main(){
    int num[10];
    cout<<"Input"<<endl;
    for(int i=0;i<10;i++){
        cout<<"Enter element "<<i+1<<": "<<endl;
        cin >> num[i];
    }
    cout<<"Output"<<endl;
    for(int i=0;i<10;i++){
        cout<<num[i]<<endl;
    }
    int array[5]={0};
    for(int i=0;i<5;i++){
        cout<<array[i]<<" ";
    }
}