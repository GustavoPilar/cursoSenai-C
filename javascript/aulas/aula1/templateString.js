const nome = "Gustavo";
const concatenacao = "olá, " + nome + "!\n";
const tamplate = 
    `olá
    ${nome}`;

console.log(concatenacao, tamplate);

console.log(`1 + 1 = ${1+1}`);

const up = texto => texto.toUpperCase();
console.log(`ei... ${up('cuidado')}`);

const a = 3;
let b = 5;
b += a;
console.log(b);
b -= 4;
console.log(b);
b *= 2;
console.log(b);
b /= 2;
console.log(b);

//

/*
*
*
*/

const raio = 5.6;
const area = Math.PI * Math.pow(raio, 2);

console.log(area);



//objetos

const prod1 = {};
prod1.nome = 'Celular Ultra';
prod1.preco = 4998.90;
prod1['desconto legal'] = 0.40;

console.log(prod1);

const prod2 = {
    nome : 'Camisa Polo',
    preco : 80,
    obj : {
        blablabla : 1,
        obj : {
            blablabla : 2
        }
    }
};

console.log(prod2);