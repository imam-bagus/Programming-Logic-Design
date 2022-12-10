public class stockTransaction {
    public static void main(String[] args){
        // Input        
        double commission = 0.02;
        int stock = 0;

        int purchasedStock = 1000;
        double purchasePrice = 32.87;
        int boughtCommission;
        int totalPurchase;

        int soldStock = 1000;
        double sellPrice = 33.92;
        int soldCommission;
        int totalSell;
        
        int total;

        // Process
        double temp;
        stock = purchasedStock;
        temp = purchasePrice * stock;
        totalPurchase = (int) temp;
        temp = totalPurchase * commission;
        boughtCommission = (int) temp;

        temp = sellPrice * stock;
        totalSell = (int) temp;
        temp = totalSell * commission;
        soldCommission = (int) temp;
        stock = purchasedStock - soldStock;

        temp = totalSell - totalPurchase - boughtCommission - soldCommission;
        total = (int) temp;

        //Output
        System.out.println("Total purchased             : $" + totalPurchase);
        System.out.println("Broker commission(purchase) : $" + boughtCommission);
        System.out.println("Sold stock                  :  " + soldStock);
        System.out.println("Broker commission(sold)     : $" + soldCommission);
        System.out.println("Total profit or loss        : $" + total);

    }
}