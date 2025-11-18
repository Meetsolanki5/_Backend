package assignment;

import java.util.Scanner;

public class lab19 {

	public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        
        int i,j;
        int[][] A = new int[2][2];
        int[][] B = new int[2][2];
        int[][] sum = new int[2][2];
        int[][] diff = new int[2][2];

        System.out.println("Enter elements of Mat2ix A:");
        for (i=0;i<2;i++) 
        {
            for (j=0;j<2;j++) 
            {
                A[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter elements of Mat2ix B:");
        for (i=0;i<2;i++) 
        {
            for (j=0;j<2;j++) 
            {
                B[i][j] = sc.nextInt();
            }
        }

        for (i=0;i<2;i++) 
        {
            for (j=0;j<2;j++) 
            {
                sum[i][j] = A[i][j] + B[i][j];
                diff[i][j] = A[i][j] - B[i][j];
            }
        }

        System.out.println("\nMatrix Addition (A + B):");
        for (i=0;i<2;i++) 
        {
            for (j=0;j<2;j++) 
            {
                System.out.print(sum[i][j] + " ");
            }
            System.out.println();
        }

        System.out.println("\nMatrix Subtraction (A - B):");
        for (i=0;i<2;i++) 
        {
            for (j=0;j<2;j++) 
            {
                System.out.print(diff[i][j] + " ");
            }
            System.out.println();
        }
	}
}