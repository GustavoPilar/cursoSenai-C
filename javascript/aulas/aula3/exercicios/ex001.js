//EXERCICIO 001
class Shape {
    area() {
        return 0;
    };
}

class Rectangle extends Shape {

    constructor(width, height) {
        super();
        this.width = width;
        this.height = height;
    }

    area() {
        return this.height * this.width;
    }
}

class Circle extends Shape {

    constructor(radius) {
        super();
        this.radius = radius;
    }

    area() {
        return Math.PI * Math.pow(this.radius, 2);
    }
}

const array = [new Circle(25.2), new Rectangle(17.3, 45.6)];

array.forEach(Shape => {
    console.log(Shape.area().toFixed(2));
})
