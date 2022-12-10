<?php
function converts(&$kilometer)
{
 $miles = $kilometer * 0.6214;

 echo "Distance in miles :" . $miles;
}

function main()
{
 $kilometer = readline("Enter a Distance in kilometers :");

 converts($kilometer);
}

// Entry Point
main();
