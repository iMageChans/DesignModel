package simple

class SimpleObserver(observable: Observable): Observer {
    private var value: Int = 0
    init {
        observable.registerObserver(this)
    }

    override fun update(value: Int) {
        this.value = value
        display()
    }

    fun display(){
        println("Value: " + value)
    }
}