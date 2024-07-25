//EXERCICIO 002
class Device {
    turnOn(){};
    turnOff(){};
}

class Laptop extends Device {
    turnOn() {
        return 'Laptop turn On';
    }

    turnOff() {
        return 'Laptop turn Off'
    }
}

class Smartphone extends Device {
    turnOn() {
        return 'Smartphone turn On';
    }

    turnOff() {
        return 'Smartphone turn Off'
    }
}

const array = [new Laptop(), new Smartphone()];

array.forEach(Device => {
    console.log(Device.turnOn());
    console.log(Device.turnOff());
})
