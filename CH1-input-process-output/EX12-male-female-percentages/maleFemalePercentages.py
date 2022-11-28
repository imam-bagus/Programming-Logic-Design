# Input
male = float(input("Enter number of males :"))
female = float(input("Enter number of females :"))

# Process
totalStudent = male + female
percentageMale = male / totalStudent * 100
percentageFemale = female / totalStudent * 100

# Output
print("Percentage Males student   : " + str(int(percentageMale)) + "%")
print("Percentage Females student : " + str(int(percentageFemale)) + "%")
