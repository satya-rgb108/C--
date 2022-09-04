#include <iostream>
using namespace std;
int main()
{
    int amount;
    cout << "Enter the amount " << endl;
    cin >> amount;
    cout<<"Enter the Note denominator: 100/50/20/10/1"<<endl;
    int note;
    cin >> note;
    switch (note)
    {
    case 100:
        cout << "Number of 100 rupee notes = " << (amount / 100) << endl;
    case 50:
        cout << "Number of 50  rupee notes =" << ((amount % 100) / 50) << endl;
    case 20:
        cout << "Number of 20 rupee notes =" << ((amount % 50) / 20) << endl;
    case 10:
        cout << "Number of 10 rupee notes =" << ((amount % 20) / 10) << endl;
    case 1:
        cout << "Number of 1 rupee notes =" << ((amount % 10) / 1) << endl;
    }
}