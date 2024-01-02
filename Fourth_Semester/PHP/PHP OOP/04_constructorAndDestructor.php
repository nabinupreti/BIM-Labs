<?php
/*WAP to add two numbers using constructor and display the result using function called displaySum()*/
class calculator{
    private $num1,$num2;
    function __construct($n1,$n2){
        $this->num1 = $n1;
        $this->num2 = $n2;
    }
    
    function displaySum(){
        $sum = $this->num1+$this->num2;
        echo "Sum of $this->num1 and $this->num2 is $sum.";
    }

    function __destruct()
    {
        echo "<br>Destructor called";
    }
}

$calc = new calculator(10,15);
$calc->displaySum();
echo "After function called.";
?>