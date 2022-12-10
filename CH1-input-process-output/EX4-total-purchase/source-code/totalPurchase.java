import java.util.Scanner;

public class totalPurchase {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float item1;
        float item2;
        float item3;
        float item4;
        float item5;
        int subTotal;
        int salesTax;
        int total;
        double tax = 0.06;

        // Input
        System.out.print("Enter a Price Item 1 : $");
        item1 = input.nextFloat();
        System.out.print("Enter a Price Item 2 : $");
        item2 = input.nextFloat();
        System.out.print("Enter a Price Item 3 : $");
        item3 = input.nextFloat();
        System.out.print("Enter a Price Item 4 : $");
        item4 = input.nextFloat();
        System.out.print("Enter a Price Item 5 : $");
        item5 = input.nextFloat();

        // Process
        double temp = item1 + item2 + item3 + item4 + item5;
        subTotal = (int) temp;
        temp = subTotal * tax;
        salesTax = (int) temp;
        temp = subTotal + salesTax;
        total = (int) temp;

        // Output
        System.out.println("subtotal  : $" + subTotal);
        System.out.println("Sales Tax : $" + salesTax);
        System.out.println("Total     : $" + total);

        input.close();
    }
}
