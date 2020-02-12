import java.util.Scanner;

class pertemuanJava1{
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        //kopnya
        System.out.println("----------------Program pengukur BMI----------------\n-----------sebagai tolak ukur kesehatan.-----------");
        //berat
        System.out.println("Masukan berat badan anda(Kg): \n");
        float BB = scan.nextFloat();
        //tinggi
        System.out.println("Masukan tinggi badan anda(M): \n");
        float TB = scan.nextFloat();

        //BMI
        float BMI = BB/(TB*TB);

        if(BMI<18.5)
        {
            System.out.println("BMI anda = " + BMI + ", Makan lagi lebih banyak");
        }
        else if(BMI >= 18.5 && BMI <= 24.9)
        {
            System.out.println("BMI anda = " + BMI + ", Anda masih normal");
        }
        else if (BMI >= 25 && BMI <= 29.9)
        {
            System.out.println("BMI anda = " + BMI + ", Cubby level 1, aman sih tapi ya gitu");
        }
        else if(BMI >= 30 && BMI <= 34.9)
        {
            System.out.println("BMI anda = " + BMI + ", Cubby level 2, sepertinya masih aman");
        }
        else if(BMI >= 35 && BMI <= 39.9)
        {
            System.out.println("BMI anda = " + BMI + ", Cubby level 3, harusnya mulai diet");
        }
        else if(BMI >= 40)
        {
            System.out.println("BMI anda = " + BMI + ", Obesitas gan, sayangi jantungmu. Diet!");
        }
    }
}