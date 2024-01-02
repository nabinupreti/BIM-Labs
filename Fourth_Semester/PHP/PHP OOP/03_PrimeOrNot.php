<?php
class PrimeOrNot{
    public $num;
    function inputData(int $n)
    {
        $this->num = $n;
    }

    function display(){
        $flag = 0;
        for($i=2 ; $i<$this->num ; $i++){
            if($this->num % $i == 0){
                $flag++;
                break;
            }
        }
        if($flag){
            echo $this->num." is not prime number";
        }else{
            echo $this->num." is a prime number";
        }
    }
}
$checkPrime = new PrimeOrNot();
$checkPrime->inputData(127);
$checkPrime->display();

?>