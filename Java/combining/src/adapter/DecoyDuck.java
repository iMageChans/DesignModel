package adapter;

public class DecoyDuck implements Quackable {
    @Override
    public void quack() {
        System.out.println("<< Silence >>");
    }
}
