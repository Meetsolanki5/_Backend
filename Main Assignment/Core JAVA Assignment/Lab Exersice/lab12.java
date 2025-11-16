package assignment;

class Overload {

    void display(int a) {
        System.out.println("Integer value: " + a);
    }

    void display(double a) {
        System.out.println("Double value: " + a);
    }

    void display(String a) {
        System.out.println("String value: " + a);
    }
}
    public class lab12 {    
    public static void main(String[] args) {
        Overload obj = new Overload();

        obj.display(10);          
        obj.display(12.5);        
        obj.display("Done");     
   

}
}
