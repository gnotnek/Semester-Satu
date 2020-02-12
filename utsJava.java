 import java.util.Scanner;
 class uts{
    public static void main(String[] args){
        int[ ] hargaParkir = {2000, 1000, 4000, 100000};
            //lama kendaraan
            System.out.println("Masukan lama kendaraan parkir: (dalam satuan jam)");
            Scanner LP = new Scanner(System.in);
            int lamaParkir = LP.nextInt();
            //jenis kendaraan
             System.out.println("Masukan jenis kendaraan: (Motor/Mobil)");
             Scanner JK = new Scanner(System.in);
             String jenisKendaraan = JK.nextLine();
        if(jenisKendaraan == "Motor")
        {
            if(lamaParkir <= 2)
            {
                int hargaFlat = hargaParkir[0] * lamaParkir;
                System.out.print("Rp." + hargaFlat);
            }
            if(lamaParkir > 2 && lamaParkir <= 23)
            {
                int hargaMotor1 = (hargaParkir[0] * lamaParkir) + (hargaParkir[1] * (lamaParkir-2));
                System.out.print("Rp. " + hargaMotor1);
            }
            if(lamaParkir >= 24)
            {
                int hargaMotor2 = (hargaParkir[0] * lamaParkir) + (hargaParkir[1] * (lamaParkir-2)) + hargaParkir[3];
                System.out.print("Rp. " + hargaMotor2);
            }
        }


        

    }
}