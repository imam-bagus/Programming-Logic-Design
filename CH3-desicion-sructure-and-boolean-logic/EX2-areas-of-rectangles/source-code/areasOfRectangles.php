<?php
$areaRectangle1;
$areaRectangle2;
$length1;
$length2;
$width1;
$width2;

echo "Enter Length & Width rectangle 1 \n";
$length1 = readline("Length: ");
$width1  = readline("Width:  ");

echo "Enter Length & Width rectangle 2 \n";
$length2 = readline("Length: ");
$width2  = readline("Width:  ");

$areaRectangle1 = $length1 * $width1;
$areaRectangle2 = $length2 * $width2;

if($areaRectangle1 == $areaRectangle2){
    
    echo "Rectangle 1 and Rectangle 2 areas are the same";
}else{
    if($areaRectangle1 > $areaRectangle2){
        echo "Rectangle 1 has greater area than Rectangle 2";
    }else{
        echo "Rectangle 2 has greater area than Rectangle 1";
    }
}