/*Generate all strings of n size and using k chars */

import java.util.*;
import java.lang.*;
import java.io.*;

class GenerateAllKits {
	public static void print(int [] array ){
		for(int i =0; i < array.length; i++)
			System.out.print(array[i]);
	}
	public static void GenerateBits(int n ,int k, int [] solution){
	    if(n< 1){
	        print(solution);
	        System.out.println();
	    }
		else{
			for(int i =0; i<k;i++){
			solution[n-1] = i;
			GenerateBits(n-1,k,solution);
			    
			}
			
		}
	
		    
		}
	public static void main(String []args){
		int noOfBits =2;
		int k = 3;
		GenerateBits(noOfBits,k, new int[noOfBits]);
		System.out.println();
	}
}