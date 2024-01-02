<?php
/*WAP to check if the number is odd or even using class having three methods callse checkEvenOdd() , display()
and constructor*/
class OddEvenCheck{
    private $num , $res;
    function __construct($num){
        $this->num = $num;
    }
    
    function checkEvenOdd(){
        $this->res = ($this->num % 2 == 0)?'Even':'Odd';
    }

    function display(){
        echo "The number {$this->num} is {$this->res}";
    }
}

$calc = new OddEvenCheck(20);
$calc->checkEvenOdd();
$calc->display();
?>