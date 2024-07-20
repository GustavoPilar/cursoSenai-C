//EXERCICIO 003
class Shape {
    width;
    height;

    constructor(width, height) {
        this.width = width;
        this.height = height;
    }

    area() {
        return this.width * this.height;
    }
}

class Rectangle extends Shape {
    constructor(width, height) {
        super(width, height);
    }
}

class Square extends Shape {
    constructor(width, height) {
        super(width, height);
    }
}

const rect = new Rectangle(3, 7);
const sqr = new Square(40.50,26.8);

console.log(rect.area());
console.log(sqr.area());