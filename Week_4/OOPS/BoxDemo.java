class Box {
    double length;
    double breadth;
    Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    double area() {
        return length * breadth;
    }
}
class Box3D extends Box {
    double height;
    Box3D(double length, double breadth, double height) {
        super(length, breadth);
        this.height = height;
    }
    double volume() {
        return length * breadth * height;
    }
}
public class BoxDemo {
    public static void main(String[] args) {
        Box3D obj = new Box3D(10, 5, 4);
        System.out.println("Area = " + obj.area());
        System.out.println("Volume = " + obj.volume());
    }
}