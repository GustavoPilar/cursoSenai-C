//EXERCICIO 001
class Contador {
    #valor;

    constructor(valor) {
        this.#valor = valor;
    }

    getValor() {
        return this.#valor;
    }

    setValor() {
        this.#valor++;
    }
}

let cont = new Contador(7);
console.log(cont.getValor());
cont.setValor();
console.log(cont.getValor());
