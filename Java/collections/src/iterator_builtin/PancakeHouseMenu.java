package iterator_builtin;

import java.util.ArrayList;
import java.util.Iterator;

public class PancakeHouseMenu implements Menu {

    ArrayList<String> menuItems;

    public PancakeHouseMenu() {
        menuItems = new ArrayList<String>();
        addItem("K&B's Pancake Breakfast");
        addItem("Regular Pancake Breakfast");
        addItem("Blueberry Pancakes");
        addItem("Waffles");
    }

    @Override
    public Iterator<String> createIterator() {
        return menuItems.iterator();
    }

    public ArrayList<String> getMenuItems() {
        return menuItems;
    }

    public void addItem(String name) {
        menuItems.add(name);
    }

    public String toString() {
        return "Pancake House Menu";
    }
}
