import java.util.Scanner;

public class salesPrediction {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int profit;
        float totalSales;
        
        // Input
        System.out.print("Enter a total sales : $");
        totalSales = input.nextInt();

        // Process
        double temp  = totalSales * 0.23;
        profit = (int) temp;

        // Output
        System.out.println("Profit : $" + profit);
    }
}
