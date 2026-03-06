<?php

// CLASS PERSON
class Person {
    public $firstName;
    public $lastName;

    public function __construct($firstName, $lastName){
        $this->firstName = $firstName;
        $this->lastName = $lastName;
    }

    public function getFullName(){
        return $this->firstName . " " . $this->lastName;
    }

    public function sayHello(){
        return "Hello, my name is " . $this->getFullName();
    }

    public function sayGoodbye(){
        return "Goodbye from " . $this->getFullName();
    }
}

// CLASS CAR
class Car {
    public $name;
    public $brand;

    public function __construct($name, $brand){
        $this->name = $name;
        $this->brand = $brand;
    }

    public function startEngine(){
        return "The engine of " . $this->name . " is started.";
    }

    public function stopEngine(){
        return "The engine of " . $this->name . " is stopped.";
    }
}



// OBJECT PERSON
$eko = new Person("Eko", "Eko");
$joko = new Person("Joko", "Nugroho");
$budi = new Person("Budi", "Nugraha");


// OBJECT CAR
$avanza = new Car("Avanza", "Toyota");
$almaz = new Car("Almaz", "Wuling");
$mobilio = new Car("Mobilio", "Honda");

?>

<!DOCTYPE html>
<html>
<head>
<title>Tugas Web (Lanjutan)</title>
</head>
<body>

<h3>Class Person</h3>

<?php
echo $eko->sayHello() . "<br>";
echo $eko->sayGoodbye() . "<br><br>";

echo $joko->sayHello() . "<br>";
echo $joko->sayGoodbye() . "<br><br>";

echo $budi->sayHello() . "<br>";
echo $budi->sayGoodbye() . "<br>";
?>

<h3>Class Car</h3>

<?php
echo "Car Name : " . $avanza->name . "<br>";
echo "Brand : " . $avanza->brand . "<br>";
echo $avanza->startEngine() . "<br>";
echo $avanza->stopEngine() . "<br><br>";

echo "Car Name : " . $almaz->name . "<br>";
echo "Brand : " . $almaz->brand . "<br>";
echo $almaz->startEngine() . "<br>";
echo $almaz->stopEngine() . "<br><br>";

echo "Car Name : " . $mobilio->name . "<br>";
echo "Brand : " . $mobilio->brand . "<br>";
echo $mobilio->startEngine() . "<br>";
echo $mobilio->stopEngine() . "<br>";
?>

</body>
</html>