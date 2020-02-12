#include <iostream>
using namespace std;
int main()
{
    //input
    string nama;
    string kelas;
    int64_t nim;
    cout << "Masukan" << endl;
    cout << "Nama: ";
    cin >> nama;
    cout << "NIM: ";
    cin >> nim;
    cout << "Kelas: ";
    cin >> kelas;

    //printkan
    cout <<"Halo, nama Saya " << nama << ","<< endl;
    cout << "NIM saya " << nim << ", Saya ada dikelas " << kelas << ".";
    return 0;

}
