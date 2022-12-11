weightPackage = input("Enter a weight of a package :")

if weightPackage <= 2:
    shippingCharges = 1.10
else:
    if weightPackage > 2 and weightPackage <= 6:
        shippingCharges = 2.20
    else:
        if weightPackage > 6 and weightPackage <= 10:
            shippingCharges = 3.70
        else:
            shippingCharges = 3.80


print('Shipping charges : {}'.format(shippingCharges))
