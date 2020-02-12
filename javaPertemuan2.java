import java.util.Scanner;

class javaPertemuan2{
    public static void main(String[] args) {
     Scanner scan = new Scanner(System.in);
     System.out.println("Masukan Nilai(Angka)= \n");
     int Nilai = scan.nextInt();
     if  (Nilai >= 90 && Nilai <=100) {
        System.out.println("Nilai anda A");
     }
     else if (Nilai >= 80 && Nilai <= 89) {
        System.out.println("Nilai anda B");
     }
     else if (Nilai >=70 && Nilai <= 79){
         System.out.println("Nilai anda C");
     }
     else System.out.println("ulang tahun depan");
     
    }

    
}