#include <iostream>
using namespace std;


int main(){
    int masukan;
    int jumlah = 0;
    cout << "Program menghitung nilai rata-rata mahasiswa\n";
    cout << "masukan jumlah mata kuliah: ";
    cin >> masukan;
    int nilai[masukan];

    for(int i=0;i<masukan;i++){
        cout << "nilai matkul ke-"<<i+1<<": ";
        cin >> nilai[i];
    }
    for(int j=0; j<masukan;j++){
        jumlah = jumlah+nilai[j];
    }
        cout<<"rata2 nilai yang sudah dimasukkan adalah: "<<jumlah/masukan;
}
