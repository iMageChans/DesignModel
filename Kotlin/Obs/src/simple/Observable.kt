package simple

interface Observable {
    fun registerObserver(o:Observer)
    fun removeObserver(o:Observer)
    fun notifyObservers()
}