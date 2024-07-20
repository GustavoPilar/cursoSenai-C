//Exercício 005

class Filme {
    titulo;
    diretor;
    anoLancamento;

    constructor(titulo, diretor, anoLancamento) {
        this.titulo = titulo;
        this.diretor = diretor;
        this.anoLancamento = anoLancamento;
    }

    apresentar() {
        console.log(`${this.titulo} (${this.anoLancamento} - Direção: ${this.diretor})`);
    }
}

const f1 = new Filme ("Mágico de Oz", "Victor Fleming", 1939);
const f2 = new Filme ("O Poderoso Chefão", "Francis Ford Coppola", 1972);
const f3 = new Filme ("Casablanca", "Michael Curtiz", 1942);
const f4 = new Filme ("Cidadão Kane", "Orson Welles", 1941);
const f5 = new Filme ("E o Vento Levou", "Victor Fleming", 1939);
const f6 = new Filme ("A Noviça Rebelde", "Robert Wise", 1965);
const f7 = new Filme ("Psicose", "Alfred Hitchcock", 1960);
const f8 = new Filme ("Cantando na Chuva", "Gene Kelly, Stanley Donen", 1952);
const f9 = new Filme ("Lawrence da Arábia", "David Lean", 1962);

const filmes = [
    [f1, f2, f3],
    [f4, f5, f6],
    [f7, f8, f9]
];

for(i = 0; i < filmes.length; i++) {
    for (j = 0; j < filmes.length; j++) {
        filmes[i][j].apresentar();
    }
}