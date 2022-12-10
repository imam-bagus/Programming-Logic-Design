import java.util.Scanner;

public class colorMixer {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    String colorRed = "red";
    String colorBlue = "blue";
    String colorYellow = "yellow";
    String inputColor1;
    String inputColor2;
    String secondaryColor = "";
    boolean flag1;
    boolean flag2;

    System.out.print("Enter a color 1 : ");
    inputColor1 = input.next();

    System.out.print("Enter a color 2 : ");
    inputColor2 = input.next();

    if (inputColor1.equals(colorRed) || inputColor1.equals(colorBlue) || inputColor1.equals(colorYellow)) {
      flag1 = true;
    } else {
      flag1 = false;
    }

    if (inputColor2.equals(colorRed) || inputColor2.equals(colorBlue) || inputColor2.equals(colorYellow)) {
      flag2 = true;
    } else {
      flag2 = false;
    }

    if (flag1 && flag2) {
      if (inputColor1 != inputColor2) {
        if (inputColor1.equals(colorRed) && inputColor2.equals(colorBlue)
            || inputColor1.equals(colorBlue) && inputColor2.equals(colorRed)) {
          secondaryColor = "Purple";
        } else {
          if (inputColor1.equals(colorBlue) && inputColor2.equals(colorYellow)
              || inputColor1.equals(colorYellow) && inputColor2.equals(colorBlue)) {
            secondaryColor = "Green";
          } else {
            if (inputColor1.equals(colorRed) && inputColor2.equals(colorYellow)
                || inputColor1.equals(colorYellow) && inputColor2.equals(colorRed)) {
              secondaryColor = "Orange";
            }
          }
        }
        System.out.print("Secondary Color : " + secondaryColor);
      } else {
        System.out.print("Please enter a different color !!");
      }
    } else {
      System.out.print("Please enter a red, blue, or yellow !!");
    }

    input.close();
  }
}
