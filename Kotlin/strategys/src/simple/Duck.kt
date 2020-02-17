package simple

abstract class Duck {
    lateinit var flyBehavior:FlyBehavior
    lateinit var quackBehavior: QuackBehavior

    fun setFly(f:FlyBehavior){
        flyBehavior = f
    }

    fun setQuack(q:QuackBehavior){
        quackBehavior = q
    }

    abstract fun display()

    fun performFly(){
        flyBehavior.fly()
    }

    fun performQuack(){
        quackBehavior.quack()
    }

    fun swim(){
        println("All ducks float, even decoys!")
    }
}