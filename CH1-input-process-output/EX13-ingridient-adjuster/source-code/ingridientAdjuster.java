import java.util.Scanner;

public class ingridientAdjuster {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cookie;
        double sugar = 1.5;
        double butter = 1;
        double flour = 2.75;
        double totalSugar;
        double totalButter;
        double totalFlour;

        System.out.print("How many cookie : ");
        cookie = input.nextInt();

        totalSugar = sugar * cookie;
        totalButter = butter * cookie;
        totalFlour = flour * cookie;

        System.out.println("Cookie      : " + cookie);
        System.out.println("Need sugar  : " + totalSugar + " Cups");
        System.out.println("Need butter : " + totalButter + " Cups");
        System.out.println("Need flour  : " + totalFlour + " Cups");

        input.close();
    }
}