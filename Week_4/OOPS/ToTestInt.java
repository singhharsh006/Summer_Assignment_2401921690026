interface Test {
    int square(int x);
}
class Arithmetic implements Test {
    @Override
    public int square(int x) {
        return x * x;
    }
}
public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        System.out.println("Square = " + obj.square(5));
    }
}