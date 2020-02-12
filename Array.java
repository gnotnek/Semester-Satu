
class Array{
    public static void main(String[] args) {
        int[] angkas = {1,2,3,4,5,6,7,8,9,10};
        int sum = 0;
        for(int a=0; a<10; a++){
          sum += angkas[a];
        }
        System.out.println(sum/angkas.length);
        // int [] baru = {70, 80, 75, 90};
        // int rataRata = (baru[0] + baru[1] + baru[2] + baru[3])/4;
        // System.out.println(rataRata);
        }
}