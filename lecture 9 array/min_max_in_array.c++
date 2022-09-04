#include <iostream>
using namespace std;
int getMaxArray(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int getMinArray(int arr[],int size){
    int min =INT_MAX;
    for(int i =0;i<size;i++){
        
    }
}

int main()
{
    int size;
    cout << "Enter the size" << endl;
    cin >> size;
    int num[100];
    for (int i = 0; i < size; i++)
    { 
        cout<<"Enter the number"<<endl;
        cin >> num[i];
    }
    cout << "maximum number in the array = " << getMaxArray(num, size) << endl;
    return 0;
}