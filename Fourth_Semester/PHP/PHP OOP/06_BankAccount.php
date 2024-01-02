<?php
/*WAP in php to implement bank account balance, deposit, withdrawm and check balance  */
class BankAccount{
    public $balance;
    function __construct()
    {
        $this->balance = 0.0;
    }

    function deposit($amt,$rmk){
        if($amt <= 0){
            echo "Please enter correct amount<br>";
            return;
        }
        $this->balance += $amt;
        echo "Your A\C has been Credited by Rs.".$amt.", remarks: $rmk <br>";
    }

    function withdraw($amt,$rmk){
        if($amt > $this->balance){
            echo "Sorry! Insufficient Balance<br>";
            return;
        }
        $this->balance -= $amt;
        echo "Your A\C has been Debited by Rs.".$amt.", remarks: $rmk <br>";
    }

    function checkBalance(){
        echo "Your balance is Rs.".$this->balance."<br>";
    }
}
$acc = new BankAccount();
$acc -> checkBalance();
$acc -> deposit(15000.35,"Salary");
$acc -> withdraw(3500,"Buying shoes");
$acc -> checkBalance();
?>
