package gumball;

import java.io.*;
import java.rmi.RemoteException;

public interface State extends Serializable {
    public void insertQuarter();
    public void ejectQuarter();
    public void turnCrank();
    public void dispense();
}
