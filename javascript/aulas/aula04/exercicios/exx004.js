//EXERCICIO 004
class Aluno {
    #nome;
    #nota;

    constructor(nome, nota) {
        this.#nome = nome;
        this.#nota = nota;
    }

    getNome() {
        return this.#nome;
    }

    getNota() {
        return this.#nota;
    }

    setNota(valor) {
        if(valor >= 0 && valor <= 100) {
            this.#nota = valor;
        }
        else {
            console.log('Nota inválida. Deve estar entre 0 e 100');
        }
    }

    apresentar() {
        return `${this.getNome()}: nota ${this.getNota().toFixed(2)}`;
    }
}

const aluno = new Aluno('Gustavo', 60.0);
console.log(aluno.apresentar());
aluno.setNota(101);
aluno.setNota(100);
console.log(aluno.apresentar());
