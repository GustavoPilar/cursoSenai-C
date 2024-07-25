//EXERCICIO 006
class Document {
    print(){
        return 'Document...';
    };
}

class WordDocument extends Document {
    print() {
        return "WordDocumento here!";
    }
}

class PDFDocument extends Document {
    print() {
        return "PDFDocument here!";
    }
}

console.log(new WordDocument().print());
console.log(new PDFDocument().print());