//ENCAPSULAMENTO 2.0
class Carro {
    constructor(marca, modelo) {
        this._marca = marca;
        this._modelo = modelo;
    }

    getMarca() {
        return this._marca;
    }

    getModelo() {
        return this._modelo;
    }

    setModelo(modelo) {
        this._modelo = modelo;
    }
}

const meuCarro = new Carro('Audi', 'a1');
console.log(meuCarro.getMarca());
console.log(meuCarro.getModelo());

meuCarro.setModelo('a3');
console.log(meuCarro.getModelo());
