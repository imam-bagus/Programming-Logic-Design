import java.util.Scanner;

public class timeCalculator {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int second;
        int result;

        System.out.print("Enter a second :");
        second = input.nextInt();

        if (second < 60) {
            result = second;
            System.out.println(result + "second");
        } else {
            if (second >= 60 && second < 3600) {
                result = second / 60;
                System.out.println(result + "Minute");
            } else {
                if (second >= 3600 && second < 8600) {
                    result = second / 3600;
                    System.out.println(result + "Hour");
                } else {
                    result = second / 86400;
                    System.out.println(result + "Day");
                }
            }
        }

        input.close();
    }

}
