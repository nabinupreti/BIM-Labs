<?php
class ArrayDisplay{
    public $arr;
    function getDetail(&$arr){
        $this->arr = $arr;
    }

    function displayDetail(){
        $i = 1;
        echo "Your Friends are: <br>";
        foreach($this->arr as $value){
            echo $i.". ". $value;
            echo "<br>";
            $i++;
        }
    }
}

$obj = new ArrayDisplay();
$friends = array("Matina Maharjan","Hari Parajuli","Nirjal Maharjan","Bikas Bhatta","Rohan Shrestha","Himani Khatri","Sadika Mahat","Pratistha GM","Rasana Maharjan","Ritesh Phuyal","Karuna Chaudhary","Suman Dangol","Apson Kunwar","Sujal Khadgi","Suraj Shakya","Ashim Gurung","Ankit Poudel","Manjesh K. Yadav","Ujan C. Bajracharya","Katrina RL Shah");
$obj->getDetail($friends);
$obj->displayDetail();
?>
