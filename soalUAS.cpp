#include <iostream>
using namespace std;

int main(){
    int biayaKos[] = {100000, 250000, 500000, 1800000};
    cout << "\t\t Program menghitung biaya penginapan\t\t\n";
    cout << "\t\t\t Penginapan Wong Jogja\t\t\t\n";
    cout << "Biaya penginapan: \n";
    cout << "1. 1 Hari Rp." << biayaKos[0] << endl;
    cout << "2. 3 Hari Rp." << biayaKos[1] << endl;
    cout << "3. 7 Hari Rp." << biayaKos[2] << endl;
    cout << "4. 30 Hari Rp." << biayaKos[3] << endl;
    //lama menginap
    int lamaInap;
    cout << "Masukan berapa hari anda menginap: ";
    cin >> lamaInap;
        int hari10 = biayaKos[2]+biayaKos[1];

    //logika
   if(lamaInap==1)
    {
        cout << "Biaya penginapan anda Rp. " << biayaKos[0];
    }
    else if(lamaInap == 2)
    {
        cout << "Biaya penginapan anda Rp. " << biayaKos[0]*2;
    }
    else if(lamaInap == 3)
    {
        cout << "Biaya penginapan anda Rp. " << biayaKos[1];
    }
    else if(lamaInap >= 4 && lamaInap <=5)
    {
        cout << "Biaya menginap anda Rp. " << (biayaKos[0]*(lamaInap-3))+biayaKos[1];
    }
    else if(lamaInap >= 6 && lamaInap <=7)
    {
        cout << "Biaya menginap anda Rp. " << biayaKos[2];
    }
    else if(lamaInap >=8 && lamaInap <= 9)
    {
        cout << "Biaya minginap anda Rp. " << biayaKos[2]+(biayaKos[0]*(lamaInap-7));
    }
    else if(lamaInap >= 10 && lamaInap <= 13)
    {

        if(lamaInap==10)
        {
            cout << "Biaya menginap anda Rp. " <<  hari10;
        }
        else if(lamaInap >= 11 && lamaInap <= 12)
        {
            cout << "Biaya menginap anda Rp. " << hari10+(biayaKos[0]*(lamaInap-10));
        }

    }
    else if(lamaInap > 12 && lamaInap < 15)
        {
             cout << "Biaya penginapan anda Rp. " << biayaKos[2]*2;
        }
    else if(lamaInap > 14 && lamaInap < 30)
    {
        cout << "Biaya menginap anda Rp. " << (biayaKos[2]*2)+(biayaKos[0]*(lamaInap-14));
    }
    else if(lamaInap >=30)
    {
        cout << "Biaya menginap anda Rp. " << biayaKos[3]+(biayaKos[0]*(lamaInap-30));
    }




}
