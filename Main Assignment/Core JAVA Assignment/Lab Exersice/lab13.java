package assignment;

class A {
    static int count = 0;
    	A() 
    	{ 
    		count++; 
    	}
    static void display() 
    {
        System.out.println("Objects created: " + count);
    }
}

public class lab13 {
    public static void main(String[] args) {
        new A();
        new A();
        new A();
        new A();
        A.display();
    }
}
