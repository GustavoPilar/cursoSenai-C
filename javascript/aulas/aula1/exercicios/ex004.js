//Exercicio 4
class Laptop {
    marca;
    modelo;
    processador;
    RAM;
    armazenamento;

    constructor(marca, modelo, processador, RAM, armazenamento) {
        this.marca = marca;
        this.modelo = modelo;
        this.processador = processador;
        this.RAM = RAM;
        this.armazenamento = armazenamento;
    }

    apresentar() {
        return `\tMarca ${this.marca}\n\tModelo: ${this.modelo}\n\tProcessador: ${this.processador}\n\tRAM: ${this.RAM}\n\tArmazenamento: ${this.armazenamento}`;
    }
}

const laptop = new Laptop("Lenovo", "82VX0001BR", "Celeron_M", "4GB", "128 SSD");
console.log(laptop.apresentar());
