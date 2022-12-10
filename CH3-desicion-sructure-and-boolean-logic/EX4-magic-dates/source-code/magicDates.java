import java.util.Scanner;

public class magicDates {

  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    int month;
    int day;
    int year;
    int result;

    System.out.print("Enter a month :");
    month = input.nextInt();
    System.out.print("Enter a day   :");
    day = input.nextInt();
    System.out.print("Enter a year  :");
    year = input.nextInt();

    result = month * day;

    if (result == year) {
      System.out.println("the date is magic");
    } else {
      System.out.println("the date is not magic");
    }

    input.close();
  }

}
