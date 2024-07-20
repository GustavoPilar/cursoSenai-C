//Exercicio 001:

class Carro {
    marca;
    modelo;
    ano;

    constructor(marca, modelo, ano) {
        this.marca = marca;
        this.modelo = modelo;
        this.ano = ano;
    };

    apresentar() {
        return `\tMarca: ${this.marca}\n\tModelo: ${this.modelo}\n\tAno: ${this.ano}
        `        
    };
};

const carro = new Carro("Audi", "A1", 2023);
        
console.log(carro.apresentar());