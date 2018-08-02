/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;


/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        int [] array = {6,3,4,5,2};
        Integer [] s = new Integer[5];
        Stack<Integer>  lookupStack = new Stack();
        int p =-1;
        for (int i =0; i < array.length;i++){
            s[i]=1;
            
                int topIndex ;
               
                while( !lookupStack.empty() && array[lookupStack.peek()] < array[i]){
                   topIndex= lookupStack.pop();
                    s[i] += s[topIndex];
                }
          
            lookupStack.push(i);
        }
                for (int i =0; i < array.length;i++){
                System.out.println(s[i]);
                    
                }
        //System.out.println(s);
        
	
	}
}
