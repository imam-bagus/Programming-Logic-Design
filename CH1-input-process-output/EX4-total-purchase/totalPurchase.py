# Input
tax = 0.06
item1 = int(input("Enter a Price Item 1 : $"))
item2 = int(input("Enter a Price Item 2 : $"))
item3 = int(input("Enter a Price Item 3 : $"))
item4 = int(input("Enter a Price Item 4 : $"))
item5 = int(input("Enter a Price Item 5 : $"))

# Process
subTotal = item1 + item2 + item3 + item4 + item5
salesTax = subTotal * tax
salesTax = int(salesTax)
total = subTotal + salesTax

# Output
print("Subtotal  : $", subTotal)
print("Sales tax : $", salesTax)
print("Total     : $", total)
