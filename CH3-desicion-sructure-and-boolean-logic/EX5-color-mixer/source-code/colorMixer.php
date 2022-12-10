<?php
$colorRed    = "red";
$colorBlue   = "blue";
$colorYellow = "yellow";
$inputColor1;
$inputColor2;
$secondaryColor;
$flag1;
$flag2;

$inputColor1 = readline("Enter a color 1 :");
$inputColor2 = readline("Enter a color 2 :");

if ($inputColor1 == $colorRed or $inputColor1 == $colorBlue or $inputColor1 == $colorYellow) {
 $flag1 = true;
} else {
 $flag1 = false;
}

if ($inputColor2 == $colorRed or $inputColor2 == $colorBlue or $inputColor2 == $colorYellow) {
 $flag2 = true;
} else {
 $flag2 = false;
}

if ($flag1 and $flag2) {
 if ($inputColor1 != $inputColor2) {
  if ($inputColor1 == $colorRed and $inputColor2 == $colorBlue or $inputColor1 == $colorBlue and $inputColor2 == $colorRed) {
   $secondaryColor = "Purple";

  } else {
   if ($inputColor1 == $colorBlue and $inputColor2 == $colorYellow or $inputColor1 == $colorYellow and $inputColor2 == $colorBlue) {
    $secondaryColor = "Green";
   } else {
    if ($inputColor1 == $colorRed and $inputColor2 == $colorYellow or $inputColor1 == $colorYellow and $inputColor2 == $colorRed) {
     $secondaryColor = "Orange";
    }
   }
  }

  echo "Secondary Color :" . $secondaryColor;
 } else {
  echo "Please enter a different color !!";
 }
} else {
 echo "Please enter a red, blue, or yellow !!";
}
