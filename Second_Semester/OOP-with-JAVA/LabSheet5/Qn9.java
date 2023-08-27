
package LabReport.LabSheet5;
class Animal {
  public void makeNoise() {
    System.out.println("Some generic animal noise");
  }
}

class Dog extends Animal {
  @Override
  public void makeNoise() {
    System.out.println("Dogs niise is Bark!");
  }
}

class Cat extends Animal {
  @Override
  public void makeNoise() {
    System.out.println("Meow!");
  }
}

public class Qn9 {
  public static void main(String[] args) {
    Animal a1 = new Animal();
    a1.makeNoise(); // prints "Bark!"

    Dog a2 = new Dog();
    a2.makeNoise(); // prints "Meow!"
  }
}
