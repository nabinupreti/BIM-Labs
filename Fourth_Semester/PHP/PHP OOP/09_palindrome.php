<?php
/*WAP to check the number is palindrome or not where class Reverse contains palindromeChecker unction to check wheather the no. is 
palindrome or not and also have another class called Display which inherit class Reverse */
class Reverse {
    private $res, $num;

    public function palindromeChecker($n) {
        $this->num = $n;
        $rev = 0;

        while ($n > 0) {
            $rem = $n % 10;
            $rev = $rev * 10 + $rem;
            $n = (int)($n / 10);
        }

        if ($rev == $this->num) {
            $this->res = "Palindrome";
        } else {
            $this->res = "Not palindrome";
        }
    }

    public function getNum() {
        return $this->num;
    }

    public function getRes() {
        return $this->res;
    }
}

class Display extends Reverse {
    public function __construct($n) {
        $this->palindromeChecker($n);
    }

    public function display() {
        echo $this->getNum() . ' is ' . $this->getRes();
    }
}

$obj = new Display(1001);
$obj->display();
?>
