//?EXERCICIO 002
class Animal {
    name;
    age;

    constructor(name, age) {
        this.name = name;
        this.age = age;
    }

    speak() {
        return `Animal sound`;
    }

    show() {
        return `{Animal: ${this.name}, ${this.age}}`;
    }
}

class Dog extends Animal {
    breed;

    constructor(name, age, breed) {
        super(name, age);
        this.breed = breed;
    }

    speak() {
        return `Woof`;
    }

    show() {
        return `Name: ${this.name}, Age: ${this.age}, Breed: ${this.breed}`;
    }
}

const littleDog = new Dog("Tonico", 12, "Beagle");

console.log(littleDog.speak());