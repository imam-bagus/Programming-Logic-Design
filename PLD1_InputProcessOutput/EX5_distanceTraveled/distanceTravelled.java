import java.util.Scanner;

public class distanceTravelled {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int distance;
        int speed = 60;
        int time;

        System.out.print("Enter a time : ");
        time = input.nextInt();

        distance = speed * time;

        System.out.print("Distance the car travel in " + time + " hours is :" + distance);
    }

}
