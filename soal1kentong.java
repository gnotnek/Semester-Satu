import java.util.Scanner;
class soal1kentong{
    public static void main(final String[] args) {
        final Scanner scan = new Scanner(System.in);

        System.out.println("Masukan nomor toko: \n");
        final int nomerToko = scan.nextInt();

        //jika
        if (nomerToko>0){
            if(nomerToko%2==0 && nomerToko >= 1 && nomerToko <= 35)
            {
                System.out.println("Nomor bernilai genap");
                System.out.println("Nomor positif \nNomor toko valid");
            }
            else if(nomerToko%2==1 && nomerToko >= 1 && nomerToko <= 35)
            {
                System.out.println("Nomor bernilai ganjil");
                System.out.println("Nomor positif \nNomor toko valid");
            }
            else System.out.println("Toko tidak valid");
        }
        else if(nomerToko<0) System.out.println("Toko tidak valid");
    }
}
