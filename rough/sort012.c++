#include<iostream>
using namespace std;
void printArray( int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
void sort012(int arr[],int n){
    int i=0;
    int j=(n-1)/2;
    int k=n-1;
    while(i<j){
        while(arr[i]==0){
            i++;

        }
        while(arr[j]==1){
            j--;
        }
        if(arr[i] !=0 && arr[j] !=1 && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    while(i<k){
        while(arr[i]==0){
            i++;

        }
        while(arr[k]==2){
            k--;
        }
        if(arr[i] !=0 && arr[k] !=1 && i<k){
            swap(arr[i],arr[k]);
            i++;
            k--;
        }
    }
    printArray(arr,n);
    

}
int main(){
    int arr[]={2,2,2,1,1,1,0};
    int n=7;
    sort012(arr,n);

}