colorRed = 'red'
colorBlue = 'blue'
colorYellow = 'yellow'

inputColor1 = raw_input('Enter a color 1 : ')
inputColor2 = raw_input('Enter a color 2 : ')

if inputColor1== colorRed or inputColor1== colorBlue or inputColor1 == colorYellow:
    flag1 = True
else:
    flag1 = False

if inputColor2 == colorRed or inputColor2 == colorBlue or inputColor2 == colorYellow :
    flag2 = True
else :
    flag2 = False

if flag1 and flag2:
    if inputColor1 != inputColor2 :
        if inputColor1 == colorRed and inputColor2 == colorBlue or inputColor1 == colorBlue and inputColor2 == colorRed :
            secondaryColor = "Purple"
        else:
            if inputColor1 == colorBlue and inputColor2 == colorYellow or inputColor1 == colorYellow and inputColor2 == colorBlue:
                secondaryColor = "Green"
            else:
                if inputColor1 == colorRed and inputColor2 == colorYellow or inputColor1 == colorYellow and inputColor2 == colorRed:
                    secondaryColor = "Orange"
        print("Secondary Color : " + secondaryColor)
    else:
        print("Please enter a different color !!")
else :
    print("Please enter a red, blue, or yellow !!")