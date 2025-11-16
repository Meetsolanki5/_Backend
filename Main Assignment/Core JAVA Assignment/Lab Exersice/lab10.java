package assignment;

class Person {
    private String name;
    private int age;

    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public void setAge(int age) {
        if (age >= 0) {         
            this.age = age;
        } else {
            System.out.println("Age cannot be negative!");
        }
    }

    public int getAge() {
        return age;
    }
}

public class lab10 {
    public static void main(String[] args) {
        Person p = new Person();

        p.setName("Meet");
        p.setAge(21);

        System.out.println("Name: " + p.getName());
        System.out.println("Age: " + p.getAge());
    }
}
