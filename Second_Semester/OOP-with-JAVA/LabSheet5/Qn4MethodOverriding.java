//Provide example of method overriding condition
package LabReport.LabSheet5;
class Animal {
    public void makeSound() {
        System.out.println("Some generic animal sound:");
    }
}

class Dog extends Animal {
    @Override
    public void makeSound() {
        super.makeSound();
        System.out.println("Woof woof");
    }
}

class Cat extends Animal {
    @Override
    public void makeSound() {
        super.makeSound();
        System.out.println("Meow meow");
    }
}

public class Qn4MethodOverriding {
    public static void main(String[] args) {
        // Example of calling the makeSound() method on objects of the Dog and Cat classes
    Dog dog = new Dog();
    dog.makeSound();  // Woof woof

    Cat cat = new Cat();
    cat.makeSound();  // Meow
    } 
}
