print("Enter Length & Width rectangle 1")
length1 = int(input("Length :"))
width1 = int(input("Width :"))

print("Enter Length & Width rectangle 2")
length2 = int(input("Length :"))
width2 = int(input("Width :"))

areaRectangle1 = length1 * width1
areaRectangle2 = length2 * width2

if areaRectangle1 == areaRectangle2:
    print("Rectangle 1 and Rectangle 2 areas are the same")
else:
    if areaRectangle1 > areaRectangle2:
        print("Rectangle 1 has greater area than Rectangle 2")
    else:
        print("Rectangle 2 has greater area than Rectangle 1")
    endif
endif
