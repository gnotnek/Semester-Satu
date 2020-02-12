#include <iostream>

using namespace std;

int bma, kma, bmb, kmb;

int main()
{
    cout << "berapa banyak baris untuk matriks 1: "; cin >> bma;
    cout << "berapa banyak kolom untuk matriks 1: "; cin >> kma;
    cout << "berapa banyak baris untuk matriks 2: "; cin >> bmb;
    cout << "berapa banyak kolom untuk matriks 2: "; cin >> kmb;
	while (kma != bmb) {
    cout << "error, banyak kolom matriks 1 harus sama dengan baris matriks 2" << endl << endl;
    cout << "berapa banyak baris untuk matriks 1: "; cin >> bma;
    cout << "berapa banyak kolom untuk matriks 1: "; cin >> kma;
    cout << "berapa banyak baris untuk matriks 2: "; cin >> bmb;
    cout << "berapa banyak kolom untuk matriks 2: "; cin >> kmb;
	}
	int MA [bma][kma], MB [bmb][kmb], MC [bma][kmb];
	cout << endl << "masukkan nilai-nilai matriks 1:" << endl;
	for (int a = 0; a < bma; a++) {
        for (int b = 0; b < kma; b++) {
            cin >> MA [a][b];
        }
    }
    cout << endl << "masukkan nilai-nilai matriks 2:" << endl;
    for (int a = 0; a < bmb; a++) {
        for (int b = 0; b < kmb; b++) {
            cin >> MB [a][b];
        }
    }
	for(int i=0; i < bma; i++){
		for(int j=0; j < kmb; j++){
			MC[i][j] = 0;
			for(int k=0; k < kma; k++){
				MC[i][j] = MC[i][j] + MA[i][k] * MB[k][j];
			}
		}
	}
	cout << endl << "hasil adalah:" << endl;
	for(int i=0; i < bma; i++){
		for(int j=0; j < kmb; j++){
			cout << MC[i][j] << '\t';
		}
		cout << endl;
	}
}
