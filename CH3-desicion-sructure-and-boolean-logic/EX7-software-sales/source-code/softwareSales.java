import java.util.Scanner;

public class softwareSales {

    static final int PRICE = 99;

    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        int quantity;
        double discount;
        double total;
        double totalAfterDiscount;

        System.out.print("Enter number of packages purchased :");
        quantity = input.nextInt();

        total = PRICE * quantity;

        if (quantity >= 10 & quantity <= 19) {
            discount = total * 0.2;
        } else {
            if (quantity >= 20 & quantity <= 49) {
                discount = total * 0.3;
            } else {
                if (quantity >= 50 & quantity <= 99) {
                    discount = total * 0.4;
                } else {
                    if (quantity >= 100) {
                        discount = total * 0.5;
                    } else {
                        discount = 0;
                    }
                }
            }
        }

        totalAfterDiscount = total - discount;

        System.out.println("Total : $" + total);
        System.out.println("Discount : $" + discount);
        System.out.println("Total after discount : $" + totalAfterDiscount);
        input.close();
    }
}
