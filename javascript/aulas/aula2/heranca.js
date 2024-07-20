const avo = {
    attr1 : "a"
}

const pai = {
    __proto__: avo,
    att2 : "b"
}

const filho = {
    __proto__: pai,
    att3 : "c"
}

console.log(filho.attr1, filho.att2, filho.att3);

