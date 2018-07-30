/*Generate all strings of n bits using an Array */

import java.util.*;
import java.lang.*;
import java.io.*;

class GenerateAllBits {
	public static void print(int [] array ){
		for(int i =0; i < array.length; i++)
			System.out.print(array[i]);
	}
	public static void GenerateBits(int n , int [] solution){
	    if(n< 1){
	        print(solution);
	        System.out.println();
	    }
		else{
			solution[n-1] = 1;
			GenerateBits(n-1,solution);
			solution[n-1] = 0;
			GenerateBits(n-1,solution); 
		}
	
		    
		}
	public static void main(String []args){
		int noOfBits = 3;
		GenerateBits(noOfBits, new int[noOfBits]);
		System.out.println();
	}
}