<!DOCTYPE HTML>
<html>
<head>
<title>Skrypt PHP</title>
<meta charset="UTF-8">
</head>
<body>
<p>
<?php
//1
$x;
settype($x,'integer');
$y;
settype($y,'float');
$z;
settype($z,'string');
$x=12;
$y=12.34;
$z="string";
echo "Zmienna x $x ,y $y i z $z<br>";
//2
$a="a";
$b='b';
$c=<<<EOT
c
EOT;
$d=<<<'EOL'
d
EOL;
echo "$a $b $c $d<br>";







?>
</p>
</body>
</html>