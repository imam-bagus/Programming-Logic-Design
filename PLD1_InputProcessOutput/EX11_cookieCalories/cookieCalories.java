import java.util.Scanner;

public class cookieCalories {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int cookies;
        int calories = 300;
        int totalCalories;

        // Input
        System.out.print("Enter a cookies ate : ");
        cookies = input.nextInt();

        // Process
        totalCalories = cookies * calories;

        // Output
        System.out.print("Total Calories Consumed : " + totalCalories);
        input.close();
    }
}