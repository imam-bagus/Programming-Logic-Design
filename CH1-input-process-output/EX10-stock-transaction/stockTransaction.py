# input
commission = 0.02
stock = 0

purchasedStock = 1000
purchasePrice = 32.87

soldStock = 1000
sellPrice = 33.92


# Process
stock = purchasedStock
totalPurchase = purchasePrice * purchasedStock
boughtCommission = totalPurchase * commission

totalSell = sellPrice * stock
soldCommisson = totalSell * commission
stock = purchasedStock - soldStock

total = totalSell - totalPurchase - boughtCommission - soldCommisson

# Output
print("Total Purchased              : ${: .2f}".format(totalPurchase))
print("Broker Commission (purchase) : ${: .2f}".format(boughtCommission))
print("Sold Stock                   :", soldStock)
print("broker Commission(sold)      : ${: .2f} ".format(soldCommisson))
print("Total Profit or Loss         : ${: .2f}".format(total))
