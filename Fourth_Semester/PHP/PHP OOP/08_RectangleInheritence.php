<?php
/* WAP to calculate the area of a rectangle where the dimensions of the rectangle are the properties of class Shape and also 
    it has one method called getDimension() to take the dimension of a rectangle, and another class Rectangle, which 
    inherits class Shape and displays the area.
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
