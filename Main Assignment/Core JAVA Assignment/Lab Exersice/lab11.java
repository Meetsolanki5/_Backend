package assignment;

import java.util.Scanner;

public class lab11 {

	static void max(int a, int b, int c) 
	 {
		 if(a>b)
		 {
			 if(a>c)
			 {
				 System.out.println("A is Max");
			 }
			 else
			 {
				 System.out.println("C is Max");
			 }
		 }
		 else
		 {
			 if(b>c)
			 {
				 System.out.println("B is Max");
			 }
			 else
			 {
				 System.out.println("C is Max");
			 }
		 }
	 }

	    public static void main(String[] args) {
	        Scanner sc = new Scanner(System.in);
	        System.out.print("Enter 3 numbers: ");
	        int a = sc.nextInt();
	        int b = sc.nextInt();
	        int c = sc.nextInt();
	        max(a,b,c);
	    }
}
