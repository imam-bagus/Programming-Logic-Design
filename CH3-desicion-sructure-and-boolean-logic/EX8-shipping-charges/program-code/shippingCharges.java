import java.util.Scanner;

class shippingCharges {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        float weightPackage;
        double shippingCharges;

        weightPackage = input.nextFloat();

        if (weightPackage <= 2) {
            shippingCharges = 1.10;
        } else {
            if (weightPackage > 2 && weightPackage <= 6) {
                shippingCharges = 2.20;
            } else {
                if (weightPackage > 6 && weightPackage <= 10) {
                    shippingCharges = 3.70;
                } else {
                    shippingCharges = 3.80;
                }
            }
        }

        System.out.print("Shipping charges : $" + shippingCharges);

        input.close();
    }

}