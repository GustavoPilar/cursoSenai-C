//EXERCICIO 003
class Payment {
    process(){};
}

class CreditCardPayment extends Payment {
    installment

    constructor(installment) {
        super();
        this.installment = installment;
    }

    process() {
        return `Done! Payment in ${this.installment}x`;
    }
}

class PayPalPayment extends Payment {
    process() {
        return `Done! Payment with PayPalPayment`;
    }
}

const array = [new CreditCardPayment(4), new PayPalPayment()];

array.forEach(Payment => {
    console.log(Payment.process());
})

