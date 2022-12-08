// let dollarUS = Intl.NumberFormat("en-US");

// Input
var commission = 0.02,
  stock = 0,
  purchasedStock = 1000,
  purchasePrice = 32.87,
  boughtCommission,
  totalPurchase,
  soldStock = 1000,
  sellPrice = 33.92,
  soldCommission,
  totalSell,
  total;

// Process
stock = purchasedStock;
totalPurchase = purchasePrice * stock;
boughtCommission = totalPurchase * commission;

totalSell = sellPrice * stock;
soldCommission = totalSell * commission;
stock = purchasedStock - soldStock;

total = totalSell - totalPurchase - boughtCommission - soldCommission;

// Output
console.log("Total Purchased             : $" + totalPurchase.toFixed(2));
console.log("Broker commission(purchase) : $" + boughtCommission.toFixed(2));
console.log("Sold stock                  : " + soldStock);
console.log("Broker commission(sold)     : $" + soldCommission.toFixed(2));
console.log("Total profit or loss        : $" + total.toFixed(2));
