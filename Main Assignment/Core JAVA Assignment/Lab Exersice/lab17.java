package assignment;

class Studentss 
{
    String name;
    int age;
    Studentss(String n, int a) 
    {
        name = n; 
        age = a;
    }
    void display() 
    { 
    	System.out.println(" " + name);
    	System.out.println(" " + age); 
    }
}
public class lab17 {
    public static void main(String[] args) 
    {
        Studentss s = new Studentss("Meet", 21);
        s.display();
    }
}
