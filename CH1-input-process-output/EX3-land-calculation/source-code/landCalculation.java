import java.util.Scanner;

public class landCalculation {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float squareFeet;
        int acre;

        System.out.print("Enter a Square feet : ");
        squareFeet = input.nextFloat();

        double temp = squareFeet / 43.560;
        acre = (int) temp;

        System.out.print("Acres : " + acre);

        input.close();
    }

}