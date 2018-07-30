/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class TowersOfHanoiSolution
{
	public static void TowersOfHanoi(int n, char from , char to , char aux){
	    
	    if(n == 1){
	        System.out.println("move 1 from "+from+" to "+to);
	        
	    }else{
	            TowersOfHanoi(n-1, from, aux, to);
	            System.out.println("move 1 from "+from+" to "+to);
	            TowersOfHanoi(n-1, aux,to,from);
	        
	        
	    }
	}
	
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		TowersOfHanoi(2,'a','b','c');
		System.out.println("---------------------------------");
		TowersOfHanoi(3,'a','b','c');
		System.out.println("---------------------------------");
		TowersOfHanoi(3,'a','b','c');
		
	}
}
