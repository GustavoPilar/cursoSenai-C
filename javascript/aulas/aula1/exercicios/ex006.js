//Exercicio 006
class Retangulo {
    largura;
    altura;
    
    constructor(largura, altura) {
        this.largura = largura;
        this.altura = altura
    }

    area() {
        return this.largura * this.altura;
    }

    apresentar() {
        console.log(`Altura: ${this.altura}\nLargura: ${this.largura}`);
    }
}

const rect = new Retangulo(2, 5);

rect.apresentar();
console.log(`A área do triangulo é ${rect.area()}`);
