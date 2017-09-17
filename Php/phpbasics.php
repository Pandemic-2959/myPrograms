<html>
	<head>
		<title>Php basics</title>
	</head>
	<body>
		<?php
			echo "hey";
			$var1 ="ayush";
			$var2 =2;
			echo "this".$var1." ".$var2;
			a=array(1,"asd",3,4);
			var_dump($a);
			function p($b)
			{
				foreach ($b as $value) {
					echo "$value","<br>";;
				}
			}
		?>
	</body>
</html>