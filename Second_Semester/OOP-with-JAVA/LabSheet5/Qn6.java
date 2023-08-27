/*Create a class Book with member variables book_id and pages. Then create a subclass 
FictionBooks of Book with member variable called name. Create some instance of 
FictionBook and set the value of both subclass and superclass and display all member 
variables that have been initialized*/
package LabReport.LabSheet5;
class Book{
    private int book_id;
    private int pages;
    public Book(int book_id, int pages){
        this.book_id=book_id;
        this.pages=pages;
    }
    public void display(){
        System.out.println("Book ID: "+book_id);
        System.out.println("Pages: "+pages);
    }
}
class FictionBook extends Book{
    private String name;
    public FictionBook(String name,int book_id, int pages){
        super(book_id,pages);
        this.name=name;
    }
    public void display(){
        super.display();
        System.out.println("Name: "+name);
    }
}
public class Qn6 {
    public static void main(String[] args) {
        FictionBook f1 = new FictionBook("Your dreams are mine now",1234,1300);
        f1.display();
    }
}
