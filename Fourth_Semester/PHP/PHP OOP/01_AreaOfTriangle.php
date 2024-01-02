<?php
class Area{
    public $base,$height;

    function getDimension(int $b, int $h){
        $this->base = $b;
        $this->height = $h;
    }
    function displayArea(){
        $area = 0.5*$this->base*$this->height;
        return $area;
    }
}
$a = new Area();
$a->getDimension(10,5);
$res = $a->displayArea();
echo "The area of triangle is ".$res;

?>