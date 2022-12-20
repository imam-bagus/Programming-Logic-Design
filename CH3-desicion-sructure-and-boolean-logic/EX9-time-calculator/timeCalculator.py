second = input("Enter a second :")

if second < 60:
    result = second
    print(result + " Second")
else:
    if second >= 60 and second < 3600:
        result = second / 60
        print(result + " Minute")
    else:
        if second >= 3600 and second < 86400:
            result = second / 3600
            print(result + "Hour")
        else:
            result = second / 86400
            print(result + "Day")
