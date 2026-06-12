package live;
import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;
public class Test {
    public static void main(String[] args) {
        // a. Instance of Veena
        Veena v = new Veena();
        v.play();
        // b. Instance of Saxophone
        Saxophone s = new Saxophone();
        s.play();
        // c. Using Playable reference (Polymorphism)
        Playable p1 = new Veena();
        Playable p2 = new Saxophone();
        p1.play();
        p2.play();
    }
}