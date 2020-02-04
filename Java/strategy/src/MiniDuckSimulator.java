public class MiniDuckSimulator {
    public static void main(String[] args) {
        MallardDuck mallardDuck = new MallardDuck();
        FlyBehavior canFly = () -> System.out.println("I can't fly");
        QuackBehavior squeak = () -> System.out.println("Squeak");
        RubberDuck rubberDuck = new RubberDuck(canFly, squeak);
        DecoyDuck decoyDuck = new DecoyDuck();

        Duck model = new ModelDuck();

        mallardDuck.performQuack();
        rubberDuck.performQuack();
        decoyDuck.performQuack();

        model.performFly();
        model.setFlyBehavior(new FlyRocketPowered());
        model.performFly();
    }
}
