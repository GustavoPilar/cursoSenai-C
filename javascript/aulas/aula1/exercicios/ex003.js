//Exercício 003

class Livro {
    titulo;
    autor;

    constructor(titulo, autor) {
        this.titulo = titulo;
        this.autor = autor;
    }

    apresentar() {
        return `Livro: ${this.titulo} - ${this.autor.apresentar()}`;
    }
}

class Autor {
    nome;
    sobrenome;

    constructor(nome, sobrenome) {
        this.nome = nome;
        this.sobrenome = sobrenome;
    }

    apresentar() {
        return `${this.nome} ${this.sobrenome}`;
    }
}

const livro = new Livro("A volta dos que não foram", new Autor("Gustavão", "da Massa"));

console.log(livro.apresentar());