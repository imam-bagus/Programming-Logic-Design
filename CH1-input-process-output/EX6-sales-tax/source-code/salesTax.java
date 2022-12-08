import java.util.Scanner;

public class salesTax {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double stateTax = 0.04;
        double countryTax = 0.02;
        double totalStateTax;
        double totalCountryTax;
        double purchase;
        double totalSalesTax;
        double totalSale;

        // Input
        System.out.print("Amount Purchase : $");
        purchase = input.nextFloat();

        // Process
        totalStateTax = purchase * stateTax;
        totalCountryTax = purchase * countryTax;
        totalSalesTax = totalStateTax + totalCountryTax;
        totalSale = purchase + totalSalesTax;

        int tempPurchase = (int) purchase;
        int tempTotalStateTax = (int) totalStateTax;
        int tempTotalCountryTax = (int) totalCountryTax;
        int tempTotalSalesTax = (int) totalSalesTax;
        int tempTotalSale = (int) totalSale;

        // Output
        System.out.println("Purchase          : $" + tempPurchase);
        System.out.println("State Sales Tax   : $" + tempTotalStateTax);
        System.out.println("Country Sales Tax : $" + tempTotalCountryTax);
        System.out.println("Total Sales Tax   : $" + tempTotalSalesTax);
        System.out.println("Total Sale        : $" + tempTotalSale);

        input.close();
    }
}
