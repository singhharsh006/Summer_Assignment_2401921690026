import java.util.Random;
// Abstract Class
abstract class Compartment {
    public abstract String notice();
}
// First Class
class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class Compartment: Reserved for First Class Passengers!";
    }
}
// Ladies Compartment
class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Compartment: Only for Women Passengers!";
    }
}
// General Compartment
class General extends Compartment {
    @Override
    public String notice() {
        return "General Compartment: Open for All Passengers!";
    }
}
// Luggage Compartment
class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Compartment: Goods and Luggage Only!";
    }
}
// Test Class
public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compartments = new Compartment[10];
        Random rand = new Random();
        // Create compartments Randomly
        for (int i = 0; i < compartments.length; i++) {
            int choice = rand.nextInt(4) + 1; // Random number between 1 and 4
            switch (choice) {
                case 1 -> compartments[i] = new FirstClass();
                case 2 -> compartments[i] = new Ladies();
                case 3 -> compartments[i] = new General();
                case 4 -> compartments[i] = new Luggage();
            }
        }
        // Demonstrate Polymorphism
        System.out.println("Compartment Notices:\n");
        for (int i = 0; i < compartments.length; i++) {
            System.out.println("Compartment " + (i + 1) + ": " + compartments[i].notice());
        }
    }
}