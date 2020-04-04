<?php
   if( $_GET["name"]) {
      echo  $_GET['name']." not found". "<br />";
    //  echo "You are ". $_GET['age']. " years old.";      
      exit();
   }
?>
<html>
	<head>
		<title>XSS demo</title>
	</head>
   	<body>
      	<form action = "<?php $_PHP_SELF ?>" method = "GET">
        <input type = "text" name = "name" />
        <input type = "submit" value = "search"/>
      	</form>
   	</body>
</html>
