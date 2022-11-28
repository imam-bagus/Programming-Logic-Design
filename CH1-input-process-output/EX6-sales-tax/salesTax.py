stateTax = 0.04
countryTax = 0.02

# Input
purchase = int(input("Amount Purchase : $"))

# Process
totalStateTax = purchase * stateTax
totalStateTax = int(totalStateTax)
totalCountryTax = purchase * countryTax
totalCountryTax = int(totalCountryTax)
totalSalesTax = totalStateTax + totalCountryTax
totalSale = purchase + totalSalesTax

# Output
print("Purchase          : $" + str(purchase))
print("State Sales Tax   : $" + str(totalStateTax))
print("Country Sales Tax : $" + str(totalCountryTax))
print("Total Sales Tax   : $" + str(totalSalesTax))
print("Total Sale        : $" + str(totalSale))
