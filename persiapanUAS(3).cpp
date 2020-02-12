#include <iostream>
using namespace std;

int main(){
    int kolom, baris;
    int A[kolom][baris];
    cout << "Masukan kolom dan baris array \n";
    cout << "Kolom: \n";
    cin >> kolom;
    cout << "Baris: \n";
    cin >> baris;

    for (int a=0; a<baris; a++){
        for (int b=0; b<kolom; b++){
                cout << "A["<<a<<"]["<<b<<"]:";
                cin >> A[a][b];

        }
    }
    for (int a=0; a<baris; a++){
        for (int b=0; b<kolom; b++){
            cout<<A[a][b]<<" ";
        }
    cout << endl;} return 0;
}
