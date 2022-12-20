
import java.util.Scanner;

public class massAndHeight {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    double mass;
    double weight;

    System.out.print("Enter a object's mass :");
    mass = input.nextFloat();

    weight = mass * 9.8;

    if (weight > 1000) {
      System.out.println("It is too Heavy");
    }
    if (weight < 10) {
      System.out.println("It is too light");
    }
    input.close();
  }
}