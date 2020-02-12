#include <iostream>

using namespace std;

int main(){
int Baris, Kolom;
    cout<<"\t\tProgram Penjumlahan Array dengan\n";
    cout<<"\t\"Ordo Array yang bisa dijumlahkan harus sama\"";
    cout<<"\n\t--------------------------------------------\n\n";
    cout<<"Masukkan baris array yang diinginkan ";
    cin>>Baris;
    cout<<"Masukkan kolom array yang diigninkan ";
    cin>>Kolom;
    int Array1 [Baris][Kolom];


for (int i=0;i<Baris;i++){
    for (int j=0; j<Kolom; j++){
        cout<<"Masukkan nilai data array 1 mu";
        cout<<" Array 1["<<i<<"]["<<j<<"]: ";
        cin>>Array1[i][j];

    }
}
cout<<"\n";
for (int i=0;i<Baris;i++){
for (int j =0; j<Kolom; j++){
        cout<<" Array 1["<<i<<"]["<<j<<"]: "<<Array1[i][j]<<"\t";
    }
cout<<"\n";
}
cout<<"\nditambah dengan\n\n";
int Array2[Baris][Kolom];
for (int i=0;i<Baris;i++){
    for (int j=0; j<Kolom; j++){
        cout<<"Masukkan nilai data array 2 mu";
        cout<<" Array 2["<<i<<"]["<<j<<"]: ";
        cin>>Array2[i][j];
    }
}
cout<<"\n";
for (int i=0;i<Baris;i++){
for (int j =0; j<Kolom; j++){
        cout<<" Array 2["<<i<<"]["<<j<<"]: "<<Array2[i][j]<<"\t";
    }
cout<<"\n";
}
cout<<"\nArray 1 ditambah Array 2 menghasilkan Array 3 yang nilainya\n\n";
int Array3[Baris][Kolom];
for (int i=0;i<Baris;i++){
for (int j =0; j<Kolom; j++){
cout<<" Array 3["<<i<<"]["<<j<<"]: "<<Array1 [i][j] + Array2[i][j]<<"\t";
}
cout<<"\n";
}
}
