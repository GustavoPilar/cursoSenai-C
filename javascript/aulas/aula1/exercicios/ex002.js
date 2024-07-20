//Exercício 002:
class Pessoa {
    nome;
    nota;

    constructor(nome, nota) {
        this.nome = nome;
        this.nota = nota;
    }

    apresentar() {
        return `Aluno ${this.nome}: nota ${this.nota}`;
    }
}

const estudantes = new Array();
estudantes.push(new Pessoa("Gustavo", 100.0));
estudantes.push(new Pessoa("Leonardo", 0.0));
estudantes.push(new Pessoa("Yohanna", 60.0));

estudantes.forEach(Pessoa => {
    console.log(Pessoa.apresentar());
});
