//EXERCICIO 004
class Book {
    title;
    author;

    constructor(title, author) {
        this.title = title;
        this.author = author;
    }

    apresentar() {
        return `${this.title} - ${this.author}`;
    }
}

class Library {
    books = new Array();

    addBook(book) {
        this.books.push(book);
    }
}

const book1 = new Book("Duna", "Frank Herbert");
const book2 = new Book("Neuromancer", "William Gibson");
const book3 = new Book("Fundação", "Isaac Asimov");
const book4 = new Book("1984", "George Orwell");
const book5 = new Book("Fahrenheit 451", "Ray Bradbury");

books = new Array();
books.push(book1);
books.push(book2);
books.push(book3);
books.push(book4);
books.push(book5);

books.forEach(Book => {
    console.log(`${Book.title} - ${Book.author}`);
});