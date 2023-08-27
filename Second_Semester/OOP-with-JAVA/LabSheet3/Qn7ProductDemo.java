/*Create a class Product with name, qty and price. Create a parameterized constructor to set 
the product details. Provide the method getName(), getQty() and getPrice() that return 
product name, qty and price. Also create method getTotal() that returns the total price. Then 
create a class ProductDemo with main method that creates two object of Product and find 
the total price of both products. */
package LabSheet3;

class Product {
    private String name;
    private int qty;
    private Double price;

    Product(String name, int qty, Double price) {
        this.name = name;
        this.qty = qty;
        this.price = price;
    }

    public String getName() {
        return name;
    }

    public int getQty() {
        return qty;
    }

    public Double getPrice() {
        return price;
    }

    public Double getTotal() {
        return (price * qty);
    }
}

public class Qn7ProductDemo {
    public static void main(String[] args) {
        Product p1 = new Product("Airpods Pro", 10, 3506.3);
        System.out.println("Name: " + p1.getName() + "\nQuantity: " + p1.getQty());
        System.out.println("Price: " + p1.getPrice());
        System.out.println("Total Price: " + p1.getTotal());
        Product p2 = new Product("Mini Dustbin", 30, 400.5);
        System.out.println("\nName: " + p2.getName());
        System.out.println("Quantity: " + p2.getQty());
        System.out.println("Price: " + p2.getPrice());
        System.out.println("Total Price: " + p2.getTotal());
    }
}
