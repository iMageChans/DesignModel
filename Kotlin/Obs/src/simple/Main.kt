package simple

fun main() {
    val obs = SimpleObservable()
    val simpleObserver = SimpleObserver(obs)
    obs.setValue(80)
}