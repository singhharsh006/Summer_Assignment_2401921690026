class Outer {
    void display() {
        System.out.println("Display method of Outer class!");
    }
    class Inner {
        void display() {
            System.out.println("Display method of Inner class!");
        }
    }
}
public class OuterDemo {
    public static void main(String[] args) {
        Outer obj = new Outer();
        obj.display();
        Outer.Inner obj2 = obj.new Inner();
        obj2.display();
    }
}