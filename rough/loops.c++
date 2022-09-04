#include<iostream>
using namespace std;

int main(){
    int n=6;
    int arr[n]={1,1,2,2,1,1};
    int t=4;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==t){
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                    
                }
                else{
                    cout<<-1<<endl;
                }

            }
        }
    }
}