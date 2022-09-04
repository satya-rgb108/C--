#include<iostream>
using namespace std;
int countElement(int arr[],int size,int element){
    int count =0;
    for(int i =0;i<size;i++){
        if(element == arr[i]){
            count+=1;
        }
    }
    return count;
}
int uniquearray(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        if(countElement( arr,size,arr[i])==1){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[]={2,3,6,7,1,108,6,2,3,7,1,108};
    int element  =7;
    int size = sizeof(arr)/sizeof(int);
   // cout<<"Number of times "<<element<<" occured in the array = "<<countElement(arr,size,7)<<endl;;
   if(uniquearray(arr,size)){
    cout<<"Given array has unique element"<<endl;
   }
   else{
    cout<<"Given array has no unique element"<<endl;
   }
    return 0;
}