//EXERCICIO 004
class Pet {
    makeSound(){
        return "Sound's animal";
    };
}

class Cat extends Pet {
    makeSound() {
        return 'MIAU';
    }
}

class Bird extends Pet {
    makeSound() {
        return 'fiu fiu';
    }
}

console.log(new Cat().makeSound());
console.log(new Bird().makeSound());
