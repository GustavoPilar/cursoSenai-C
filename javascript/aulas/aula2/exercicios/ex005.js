//?EXERCICIO 005
class Person {
    firstName;
    lastName;

    constructor(firstName, lastName) {
        this.firstName = firstName;
        this.lastName = lastName;
    }

    fullName() {
        return `${this.firstName} ${this.lastName}`;
    }
}

class Estudant extends Person{
    grade;

    constructor(firstName, lastName, grade) {
        super(firstName, lastName);
        this.grade = grade;
    }

    showGrade() {
        return `${this.firstName} ${this.lastName} - Grade: ${this.grade}`;
    }
}

const gustavo = new Estudant("Gustavo", "Pilar", 100.0);

console.log(gustavo.showGrade());

