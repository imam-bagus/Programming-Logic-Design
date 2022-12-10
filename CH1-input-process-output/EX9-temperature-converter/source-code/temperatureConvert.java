import java.util.Scanner;

public class temperatureConvert {
    public static void main(String[] args){
        Scanner input = new Scanner(System.in);
        int celcius;
        int farenheit;

        // Input
        System.out.print("Enter a a temperature(Celcius) : ");
        celcius = input.nextInt();

        // Process
        double temp;
        temp = (celcius * 9 / 5) + 32;
        farenheit = (int) temp;

        System.out.println("Temperature is : " + farenheit + " farenheit");

        input.close();
    }
}