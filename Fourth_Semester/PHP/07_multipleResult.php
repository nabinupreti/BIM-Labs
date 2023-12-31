<?php
class StudentResultCalculator {
    private $studentResults = [];

    public function addResult($studentName, $subjectMarks) {
        $this->studentResults[$studentName] = $subjectMarks;
        
    }

    public function calculateResult() {
        $resultSummary = [];
        foreach ($this->studentResults as $studentName => $subjectMarks) {
            $totalMarks = array_sum($subjectMarks);
            $averageMarks = $totalMarks / count($subjectMarks);

            //checking if student passed in individual subject or not
            
            foreach($subjectMarks as $marks){
                $result = ($marks >= 40) ? 'Pass' : 'Fail';
                if($result == 'Fail'){
                    break;
                }
            }

            $resultSummary[$studentName] = array(
                'totalMarks' => $totalMarks,
                'averageMarks' => $averageMarks,
                'result' => $result,
            );
        }
        return $resultSummary;
    }
}

// creating object
$calc = new StudentResultCalculator();

// Adding results for 10 students
$calc->addResult('Hari Parajuli', [85, 90, 78, 92, 88]);
$calc->addResult('Bikas Bhatta', [73, 45, 60, 38, 50]);
$calc->addResult('Himani Khatri', [60, 72, 80, 68, 75]);
$calc->addResult('Rohan Shrestha', [45, 58, 70, 32, 40]);
$calc->addResult('Nabin Upreti', [20, 30, 40, 35, 25]);
$calc->addResult('Sadika Mahat', [75, 80, 68, 72, 78]);
$calc->addResult('Ankit Poudel', [55, 62, 48, 70, 58]);
$calc->addResult('Ritesh Phuyal', [70, 65, 50, 88, 42]);
$calc->addResult('John Doe', [30, 35, 42, 25, 28]);
$calc->addResult('Apson Kunwar', [65, 70, 75, 68, 72]);

// Calculating and displaying results
$results = $calc->calculateResult();

echo "<h2>Student Results:</h2>";
foreach ($results as $studentName => $result) {
    echo "<h3> $studentName </h3>";
    echo "  Total Marks: ".$result['totalMarks']."<br>";
    echo "  Percentage : {$result['averageMarks']}%<br>";
    echo "  Result: {$result['result']}<br>";
    echo "<br>";
}
?>
