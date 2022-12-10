import java.util.Scanner;

public class tipTaxTotal {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int total;
        int charge;
        double tip = 0.15;
        int totalTip;
        double salesTax = 0.07;
        int totalSalesTax;

        // Input
        System.out.print("Charge Food : $");
        charge = input.nextInt();

        // Process
        double temp;
        temp = charge * tip;
        totalTip = (int) temp;
        temp = charge * salesTax;
        totalSalesTax = (int) temp;
        temp = charge + totalTip + totalSalesTax;
        total = (int) temp;


        // Output
        System.out.println("Charge Food : $" + charge);
        System.out.println("Tip         : $" + totalTip);
        System.out.println("Sales Tax   : $" + totalSalesTax);
        System.out.println("Total       : $" + total);


        input.close();
    }
}