package simple;

public class Main {
    public static void main(String[] args) {
        SimpleSubject simpleSubject = new SimpleSubject();
        SimpleObserver simpleObserver = new SimpleObserver(simpleSubject);
        simpleSubject.setValue(80);
    }
}
