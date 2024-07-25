//EXERCICIO 003
class Produto {
    #nome;
    #preco;

    constructor(nome, preco) {
        this.#nome = nome;
        this.#preco = preco;
    }

    getNome() {
        return this.#nome;
    }

    getPreco() {
        return this.#preco;
    }

    setPreco(valor) {
        this.#preco = valor;
    }

    apresentar() {
        return `${this.#nome}, R$${(this.#preco).toFixed(2)}`;
    }
}

const prod = new Produto('Celular', 1500.00);
console.log(prod.apresentar());
prod.setPreco(2000.00);
console.log(prod.apresentar());