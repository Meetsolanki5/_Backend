package assignment;

class Vehicle 
{
    void run()
    { 
    	System.out.println("Vehicle is running"); 
    }
}
class Bike extends Vehicle 
{
    void run()
    { 
    	System.out.println("Bike is running safely"); 
    }
}

public class lab16 {
    public static void main(String[] args) {
        Bike B = new Bike();
        B.run();
    }
}
