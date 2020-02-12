#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a;
       while(a>0)
    {
        cout << "Program membuat angka menjadi kata";
        cout << "masukan angka: " << endl;
        cout << "masukan 0 untuk keluar" << endl;
        cin >> a;
     switch(a)
     {
     case 1:
        cout << "satu" <<endl;
         break;
     case 2:
        cout << "dua" << endl;
         break;
     case 3:
        cout << "tiga" << endl;
        break;
     case 4:
        cout << "empat" << endl;
         break;
     case 5:
         cout << "lima"<< endl;
          break;
     case 6:
        cout << "enam"<<endl;
         break;
     case 7:
        cout << "tujuh" << endl;
         break;
     case 8:
        cout << "delpana" << endl;
        break;
     case 9:
        cout << "sembilan"<< endl;
         break;
     case 10:
        cout << "sepuluh" << endl;
        break;
     default:
        cout << "Salah input!" << endl;

}
}
cout << "Program selesai";
}
