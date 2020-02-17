package simple

fun main() {
    val mallard = MallardDuck()
    mallard.performFly()
    mallard.performQuack()

    mallard.setFly(FlyRocketPowered())
    mallard.setQuack(FakeQuack())
    mallard.performFly()
    mallard.performQuack()
}
