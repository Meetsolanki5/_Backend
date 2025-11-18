package assignment;

class Pet 
{
    void sound()
    { 
        System.out.println("Pet sound"); 
    }
}
class cat extends Pet
 {
    void sound()
    { 
        System.out.println("Meow"); 
    }
}
public class lab23 
{
    public static void main(String[] args)
    {
        Pet a = new cat();
        a.sound();
    }
}
