# Driver’s License Exam

## Case

The local driver’s license office has asked you to design a program that grades the written portion of the driver’s license exam.
The exam has 20 multiple choice ­questions.
Here are the correct answers:

1. B
2. D
3. A
4. A
5. C
6. A
7. B
8. A
9. C
10. D
11. B
12. C
13. D
14. A
15. D
16. C
17. C
18. B
19. D
20. A

Your program should store these correct answers in an array.
(Store each question’s correct answer in an element of a String array.)
The program should ask the user to enter the student’s answers for each of the 20 questions, which should be stored in another array.
After the student’s answers have been entered, the program should display a message indicating whether the student passed or failed the exam.
(A student must correctly answer 15 of the 20 questions to pass the exam.) It should then display the total number of correctly answered questions, the total numbers of incorrectly answered questions, and a list showing the question of the incorrectly answered questions.

<hr>

## Pseudocode

```
Constant Integer SIZE = 20
Declare String correctAnswer[SIZE] = B, D, A, A, C, A, B, A, C, D, B , C, D, A, D, C, C, B, D, A
Declare String studentAnswer[SIZE]
Declare Integer incorrectlyAnswerFlag[SIZE]
Declare Integer index
Declare Integer totalCorrectly
Declare Integer totalIncorrectly

Set index = 0
For index To (SIZE - 1) Then
    Output "Enter a Student answer number ", index + 1, ". : "
    Input studentAnswer[index]

    Set index = index + 1
End For

Set index = 0
For index To (SIZE - 1) Then
    If studentAnswer[index] == correctAnswer[index] Then
        Set totalCorrectly = totalCorrectly + 1
        Set incorrectlyAnswerFlag[index] = 0
    Else
        Set totalIncorrectly = totalIncorrectly + 1
        Set incorrectlyAnswerFlag[index] = index + 1
    End If

    Set index = index + 1
End For

Output "Total number correctly answered question : ", totalCorrectly
Output "Total number incorrectly answered question : ", totalIncorrectly

If totalCorrectly < 15 Then
    Output "Student passed the exam"
Else
    Output "Student failed the exam"
End If

If totalIncorrectly == 0 Then
        Output "None Incorrectly answered question"
Else
    Output "Incorrectly answered question"

    Set index = 0
    For index To (SIZE - 1) Then
        If incorrectlyAnswerFlag[index] != 0 Then
            Output "Number : ", incorrectlyAnswerFlag[index]
        End If
    End For
End If
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](driverLicenseExam.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
