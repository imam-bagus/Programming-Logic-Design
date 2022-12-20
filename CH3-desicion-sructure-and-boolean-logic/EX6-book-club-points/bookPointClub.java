import java.util.Scanner;

public class bookPointClub {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int bookPurchased;
        int point;

        System.out.print("Number of books purchased :");
        bookPurchased = input.nextInt();

        if (bookPurchased < 1) {
            point = 0;
        } else {
            if (bookPurchased == 1) {
                point = 5;
            } else {
                if (bookPurchased == 2) {
                    point = 15;
                } else {
                    if (bookPurchased == 3) {
                        point = 30;
                    } else {
                        point = 60;
                    }
                }

            }

        }

        System.out.println("Points awarded : " + point);

        input.close();
    }
}