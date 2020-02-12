#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a=1;
    int b;
    cout << "masukan nomor: " << endl;
    cin >> b;
    do
    {
    cout << a << "tenang" << endl; a++;
    }while (a<b+1);
}
