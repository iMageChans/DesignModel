package simple

class SimpleObservable: Observable {
    private var value = 0
    private var observers:MutableList<Observer> = ArrayList()

    override fun registerObserver(o: Observer) {
        observers.add(o)
    }

    override fun removeObserver(o: Observer) {
        observers.remove(o)
    }

    override fun notifyObservers() {
        for (obs in observers){
            obs.update(value)
        }
    }

    fun setValue(value: Int){
        this.value = value
        notifyObservers()
    }
}