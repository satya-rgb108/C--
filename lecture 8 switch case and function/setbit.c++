#include <iostream>
using namespace std;
int countbit1(int num)
{
    int count = 0;
    while (num > 0)
    {
        if (num & 1)
        {
            count += 1;
        }
        num = num >> 1;
    }
    return count;
}
int setbit(int a, int b)
{
    int n1 = countbit1(a);
    int n2 = countbit1(b);
    return n1 + n2;
}

int main()
{
    int a,b;
    cout<<"Enter a and b:"<<endl;
    cin >> a >>b;
    int count =  setbit(a,b);
    cout <<"Number of set bit= "<< count << endl;
    return 0;
}