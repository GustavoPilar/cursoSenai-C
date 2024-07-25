//EXERCICIO 002
class ContaBancaria {
    #saldo;
    #titular;

    constructor(saldo, titular) {
        this.#saldo = saldo;
        this.#titular = titular;
    }

    getSaldo() {
        return this.#saldo;
    }

    getTitular() {
        return this.#titular;
    }

    setTitular(titular) {
        this.#titular = titular;
    }

    depositar(montante) {
        this.#saldo += montante;
    }

    sacar(montante) {
        if(this.#saldo < montante) {
            console.log('Depósito inválido');
            return;
        }
        this.#saldo -= montante;
    }

    apresentar() {
        return `${this.#titular}: R$${(this.#saldo).toFixed(2)}`;
    }
}

const conta = new ContaBancaria(0.0, 'Gustavo');
console.log(conta.apresentar());
console.log('Sacando R$50.00...');
conta.sacar(50.0);
console.log('Depositando R$100.00...');
conta.depositar(100.0);
console.log(conta.apresentar());
console.log('Sacando R$50.00...');
conta.sacar(50.0);
console.log(conta.apresentar());
