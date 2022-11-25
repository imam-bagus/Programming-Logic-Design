# Input
tip = 0.15
salesTax = 0.07
charge = int(input("Charge Food : $"))

# Process
totalTip = charge * tip
totalTip = int(totalTip)
totalSalesTax = charge * salesTax
totalSalesTax = int(totalSalesTax)
total = charge + totalTip + totalSalesTax

# Output
print("Charge    : $" + str(charge))
print("Tip       : $" + str(totalTip))
print("Sales Tax : $" + str(totalSalesTax))
print("Total     : $" + str(total))
