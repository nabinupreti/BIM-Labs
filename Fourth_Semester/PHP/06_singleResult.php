
<?php
//WAP in php to calculate the division, percentage and result of a student with the marks of 5 subject.

$sub = array(52,67,89,85,67);

// Calculate total marks
$total = 0;
foreach($sub as $value){
    $total+=$value;
}

// Calculate percentage
$percentage = ($total / 500) * 100;

// Determine division
if ($percentage >= 80) {
    $division = "Distinction";
}elseif($percentage >= 60) {
    $division = "First Division";
} elseif ($percentage >= 45) {
    $division = "Second Division";
} elseif ($percentage >= 32) {
    $division = "Third Division";
} else {
    $division = "Fail";
}

// Determine result
$result = ($sub[0] < 40 ||$sub[1] < 40 ||$sub[2] < 40 ||$sub[3] < 40 ||$sub[4] < 40 ) ?
"Fail":"Pass";

$remarks = ($result == "Fail")?
    "Though this time didn't go as planned, use this experience as a stepping stone for future success and continuous improvement." :
    "Congratulations on your success! Your hard work and dedication have paid off, paving the way for even greater achievements ahead";

// Display the results
echo "<h2>Marksheet</h2>";
$i=1;
foreach($sub as $value){
    echo "Subject $i = $value <br>";
    $i++;
}
echo "Total Marks: $total<br>";
echo "Percentage: $percentage%<br>";
echo "Division: $division<br>";
echo "Result: $result<br>";
// echo "Remarks: $remarks"
?>
