#include <iostream>
using namespace std;
int main ()
{
    int A[100][100];
    int bar,kol;
    cout << "Masukkan tipe array multidimensi yang anda inginkan !"<<endl;
    cout << "Baris = ";
    cin >> bar;
    cout << "Kolom = ";
    cin >> kol;
    for (int i=0;i<bar;i++)
    {
        for (int j=0;j<kol;j++)
        {
            cout << "A["<<i<<"]["<<j<<"]: ";
            cin >> A[i][j];
        }
    }
    for (int i=0; i<bar; i++)
    {
        for (int j=0;j<kol;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}
