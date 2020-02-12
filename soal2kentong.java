import java.util.Scanner;
class soal2kentong{
    public static void main(final String[] args) {
        final Scanner scan = new Scanner(System.in);
        System.out.println("Masukan Nama: ");
        final String nama = scan.nextLine();
        System.out.println("Masukan di mana anda berkuliah: ");
        final String kampus = scan.nextLine();
        System.out.println("Perkenalkan saya " + nama + ", saya berkuliah di "+ kampus);

    }
}