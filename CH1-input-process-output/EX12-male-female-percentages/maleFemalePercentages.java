import java.util.Scanner;

public class maleFemalePercentages {
    public static void main(String[] args) {

        Scanner input = new Scanner(System.in);
        float male;
        float female;
        float totalStudent;
        int percentageMale;
        int percentageFemale;

        // Input
        System.out.print("Enter Number of males : ");
        male = input.nextFloat();
        System.out.print("Enter Number of females : ");
        female = input.nextFloat();

        // Process
        totalStudent = male + female;
        float tempMale = male / totalStudent * 100;
        percentageMale = (int) tempMale;
        float tempFemale = female / totalStudent * 100;
        percentageFemale = (int) tempFemale;

        // Output
        System.out.println("Percentage Males student   : " + percentageMale + "%");
        System.out.println("Percentage Females student : " + percentageFemale + "%");

        input.close();
    }
}