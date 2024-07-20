//DESAFIO
class Carro {
    velAtual;
    velMax;

    constructor (velAtual, velMax) {
        this.velAtual = velAtual;
        this.velMax = velMax;
    }

    acelerar(delta) {
        if(delta >= 0) {
            if(this.velAtual + delta <= this.velMax){
                this.velAtual += delta;
            } else {
               this.velAtual = this.velMax;
            }
        }
        else {
            return "Negado. Velocidade inválida (negativa).";
        }
    }

    desacelerar(delta) {
        if(delta >= 0 || this.velAtual == 0) {
            this.velAtual -= delta;
        }
        else {
            return "Negado. Velocidade inválida (negativa)";
        }
    }

    parar() {
        this.velAtual = 0;
    }

    status(){
        return `${this.velAtual} km/h ${this.velMax} km/h`;
    }
}


class Ferrari extends Carro {
    modelo;

    constructor(modelo, velAtual, velMax) {
        super(velAtual, velMax);
        this.modelo = modelo;
    }

    status(){
        return `Ferrari ${this,this.modelo}: ${this.velAtual} km/h ${this.velMax} km/h`;
    }
}

class Porsche extends Carro {
    modelo;

    constructor(modelo, velAtual, velMax) {
        super(velAtual, velMax);
        this.modelo = modelo;
    }

    status(){
        return `Porsche ${this,this.modelo}: ${this.velAtual} km/h ${this.velMax} km/h`;
    }
} 

const ferrari = new Ferrari('Purosangue', 0, 310);
const porsche = new Porsche('911 Carrera GTS', 0, 312);

ferrari.acelerar(100);
porsche.acelerar(110);

console.log(porsche.status());
console.log(ferrari.status() + "\n");

ferrari.desacelerar(10);
porsche.desacelerar(5);

console.log(porsche.status());
console.log(ferrari.status() + "\n");

ferrari.parar();
porsche.parar(0);

console.log(porsche.status());
console.log(ferrari.status() + "\n");
