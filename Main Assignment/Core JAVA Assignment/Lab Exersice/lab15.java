package assignment;

class X 
{ 
    void showX()
    {
         System.out.println("Class A"); 
        } 
}
class Y extends X 
{ 
    void showY()
    { 
        System.out.println("Class B"); 
    } 
}
class Z extends Y 
{ 
    void showZ()
    { 
        System.out.println("Class C"); 
    } 
}

public class lab15 {
    public static void main(String[] args) {
        Z obj = new Z();
        obj.showX();
        obj.showY();
        obj.showZ();
    }
}
