//EXERCICIO 005
class Pessoa {
    #nome;
    #idade;

    constructor(nome, idade) {
        this.#nome = nome;
        this.#idade = idade;
    }

    getNome() {
        return this.#nome;
    }

    getIdade() {
        return this.#idade;
    }

    setIdade(idade) {
        if(idade > 0) {
            this.#idade = idade;
        }
        else {
            console.log('Idade inválida. Deve ser positiva.');
        }
    }

    apresentar() {
        return `${this.getNome()}, ${this.getIdade()} anos`;
    }
}

const pessoa = new Pessoa('Gustavo', 19);
console.log(pessoa.apresentar());
pessoa.setIdade(-7);
pessoa.setIdade(20);
console.log(pessoa.apresentar());
