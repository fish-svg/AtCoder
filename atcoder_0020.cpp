<?php
 fscanf(STDIN, "%d", $N);
 $P = explode(" ", fgets(STDIN));
 $P = array_map('intval', $P);

 $A = $P[0];
 
 rsort($P);

 if ($A == $P[0] and $P[0] <> $P[1]) {
   echo 0;
 } elseif ($A == $P[0] and $P[0] == $P[1]) {
   echo 1;
 } else {
   echo ($P[0]+1) - $A;
 }

?>
