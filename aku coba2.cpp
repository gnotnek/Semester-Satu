#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
    int O;
    while (O>0)
    {
       system("CLS");
    char a;
    cout << "Masukan nilai a: ";
    cin >> a;
  switch(a)
  {
  case 'a':
    cout << "Anjing" << endl;
    break;
  case 'b':
    cout << "Bajing"<< endl;
    break;
  case 'c':
    cout << "Cecak" << endl;
    break;
  default:
    cout << "salah input" << endl;

  }
    getch();
    return 0;
     }
}
