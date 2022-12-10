import java.util.Scanner;

public class areasOfRectangles {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double areaRectangle1;
        double areaRectangle2;
        double length1;
        double length2;
        double width1;
        double width2;

        System.out.print("Enter Length & Width rectangle 1 \n");
        System.out.print("Length :");
        length1 = input.nextDouble();
        System.out.print("Width :");
        width1 = input.nextDouble();

        System.out.print("Enter Length & Width rectangle 2 \n");
        System.out.print("Length :");
        length2 = input.nextDouble();
        System.out.print("Width :");
        width2 = input.nextDouble();

        areaRectangle1 = length1 * width1;
        areaRectangle2 = length2 * width2;

        if (areaRectangle1 == areaRectangle2) {
            System.out.print("Rectangle 1 and Rectangle 2 areas are the same");
        } else {
            if (areaRectangle1 > areaRectangle2) {

                System.out.print("Rectangle 1 has greater area than Rectangle 2");
            } else {
                System.out.print("Rectangle 2 has greater area than Rectangle 1");
            }
        }

        input.close();
    }
}