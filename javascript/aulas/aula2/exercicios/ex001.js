//?EXERCICIO 001
class Animal {
    name;
    age;

    constructor(name, age) {
        this.name = name;
        this.age = age;
    }
}

class Dog extends Animal {
    breed;

    constructor(name, age, breed) {
        super(name, age);
        this.breed = breed;
    }

    apresentar() {
        return `Name: ${this.name}, Age: ${this.age}, Breed: ${this.breed}`;
    }
}

const littleDog = new Dog("Tonico", 12, "Beagle");

console.log(littleDog.apresentar());