<?php
/* WAP to calculate the area of rectangle where the dimnsion of rectangle are the properties of class Shape and also 
    it has one method called getDimension() to take dimension of rectangle, and another class Rectangle, which 
    inherits class Shape and display the area.
*/
class Shape{
    public $l, $b;
    public function getDimension($l,$b){
        $this->l = $l;
        $this->b = $b;
    }
}

class Rectangle extends Shape{
    public function calculate(){
        $area = $this->l * $this->b;
        echo "Area of rectangle is ".$area;
    } 
}
$obj = new Rectangle();
$obj->getDimension(10,2);
$obj->calculate();
?>