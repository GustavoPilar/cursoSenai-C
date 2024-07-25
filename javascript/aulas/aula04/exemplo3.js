//ENCAPSULAMENTO 3.0
class Carro {
    #marca; // Variável privada
    #modelo; // Variável privada

    constructor(marca, modelo) {
        this.#marca = marca;
        this.#modelo = modelo;
    }

    getMarca() {
        return this.#marca;
    }

    getModelo() {
        return this.#modelo;
    }

    setModelo(modelo) {
        this.#modelo = modelo;
    }
}

const meuCarro = new Carro('Audi', 'a1');
console.log(meuCarro.getMarca());
console.log(meuCarro.getModelo());

meuCarro.setModelo('a3');
console.log(meuCarro.getModelo());
