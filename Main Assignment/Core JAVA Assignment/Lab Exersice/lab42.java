package assignment;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;

class Stud implements Serializable {
    int id;
    String name;

    Stud(int id, String name) {
        this.id = id;
        this.name = name;
    }
}

public class lab42 {
    public static void main(String[] args) {
        try {

            Stud s1 = new Stud(1, "Meet");
            ObjectOutputStream oos = new ObjectOutputStream(new FileOutputStream("student.ser"));
            oos.writeObject(s1);
            oos.close();
            System.out.println("Object serialized successfully.");


            ObjectInputStream ois = new ObjectInputStream(new FileInputStream("student.ser"));
            Stud s2 = (Stud) ois.readObject();
            ois.close();

            System.out.println("Deserialized Student Details:");
            System.out.println("ID: " + s2.id + ", Name: " + s2.name);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
