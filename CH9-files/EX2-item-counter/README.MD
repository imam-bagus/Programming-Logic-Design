# Item Counter

## Case

Assume that a file containing a series of names (as strings) is named names.dat and exists on the computer’s disk.
design a program that displays the number of names that are stored in the file.

<hr>

## Pseudocode

```
Declare String name
Declare Integer numberNames = 0
Declare InputFile listNames

Open listNames "names.dat"

While NOT eof(listNames)
    numberNames = numberNames + 1
End While

Output "the number of names stored :", numberNames

Close listNames
```

<hr>

## Flowchart

<img src="Flowchart.png"  >

<hr>

## Source Code

- [C++](.cpp)
- [Java](.java)
- [Python](.py)
- [PHP](.php)
- [JavaScript](.js)
