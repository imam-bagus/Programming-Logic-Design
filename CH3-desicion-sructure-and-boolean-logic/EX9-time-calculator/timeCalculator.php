<?php
$second = readline("Enter a second :");

if ($second < 60) {

 $result = $second;
 echo $result . "Second";
} else {
 if ($second >= 60 && $second < 3600) {
  $result = $second / 60;
  echo $result . "Minute";
 } else {
  if ($second >= 3600 && $second < 86400) {
   $result = $second / 3600;
   echo $result . "Hour";
  } else {
   $result = $second / 86400;
   echo $result . "Day";
  }
 }
}
