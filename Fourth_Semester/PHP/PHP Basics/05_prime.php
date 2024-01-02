<?php
//WAP to check whether a number is prime or not
echo "<h2> Prime or not Check:</h2> ";
$num = 127;
if($num == 0){
    echo "0 is neither prime nor composite";
}elseif($num < 0){
    echo "-ve numbers cannot be prime";
}else{
    $count = 0;
    for($i = 2;$i < $num; $i++){
        if($num % $i == 0){
            $count++;
            break;
        }
    }
    if($count){
        echo "$num is not a prime number";
    }else{
        echo "$num is a prime number";
    }
}
?>