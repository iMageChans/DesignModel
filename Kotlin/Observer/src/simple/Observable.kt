package simple

interface Observable {
    fun registerObserver(o: Obs)
    fun removeObserver(o: Obs)
    fun notifyObservers()
}