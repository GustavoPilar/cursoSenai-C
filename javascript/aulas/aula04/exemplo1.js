//ENCAPSULAMENTO 1.0
function carro(marca, modelo) {
    let _marca = marca; // Essa variável é privada
    let _modelo = modelo; // Essa variável é privada

    this.getMarca = function() {
        return _marca;
    }

    this.getModelo = function() {
        return _modelo;
    }

    this.setModelo = function(modelo) {
        _modelo = modelo;
    }
}

const meuCarro = new carro('Audi', 'a1');
console.log(meuCarro.getMarca());
console.log(meuCarro.getModelo());

meuCarro.setModelo('a3');
console.log(meuCarro.getModelo());
