const carro = {
    velAtual : 0,
    velMax : 200,
    
    acelerarMais(delta) {
        if(this.velAtual + delta <= this.velMax) {
            this.velAtual += delta;
        }
        else {
            this.velAtual = this.velMax;
        }
    },

    status() {
        return `${this.velAtual} km/h ${this.velMax} hm/h`;
    }
}

const ferrari = {
    modelo : 'F40',
    velMax: 336
}

const volvo = {
    modelo: 'F40',
    status() {
        return `${this.modelo}: ${super.status}`;
    }
}

Object.setPrototypeOf(ferrari, carro);
Object.setPrototypeOf(volvo, carro);

console.log(ferrari);
console.log(volvo);

volvo.acelerarMais(100);
console.log(volvo.status);

ferrari.acelerarMais(100);
console.log(ferrari.status());