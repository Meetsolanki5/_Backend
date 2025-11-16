package assignment;

import java.util.Scanner;

public class lab3 {

	 public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        int a,b;
	        System.out.print("Enter two numbers: ");
	        a = sc.nextInt();
	        b = sc.nextInt();

	        System.out.println("Addition: " + (a + b));
	        System.out.println("Subtraction: " + (a - b));
	        System.out.println("Multiplication: " + (a * b));
	        System.out.println("Division: " + (a / b));

	        System.out.println("a > b: " + (a > b));
	        System.out.println("a == b: " + (a == b));
	    }
}
