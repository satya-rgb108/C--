#include<iostream>
#include<array>
using namespace std;
int main(){
    int basic[3]={1,2,3};
    array<int,4> a={1,2,34,63};
    cout<<"For getting size of the array we use size()"<<a.size()<<endl;
    cout<<"Empty or not "<<a.empty()<<endl;
    cout<<"At index,here find element at index 2 ="<<a.at(2)<<endl;
    cout<<"First Element = "<<a.front()<<endl;
    cout<<"Last Element = "<<a.back()<<endl;
}