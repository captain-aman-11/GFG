import java.io.*;
import java.util.*;

public class Solution {
    
    // Approach : Using Recursion
    // Faith : [bc]  -> {--,-c,b-,bc}
    // Expectation : [abc] -> {---,--c,-b-,-bc,a--,a-c,ab-,abc}
    // Faith meets Expectation -> { "-" + [bc], "a" + [bc]}   // Here, "-" is just to represent empty string
    
    
    //Function to get all the String combinations
    ArrayList<String> getString(String str){
        
        //Base Case: if String is Empty
        if(str.length() == 0){
            //Return a Empty String
            ArrayList<String> baseResult = new ArrayList<>();
            baseResult.add("");
            return baseResult;
        }
        
        
        char ch = str.charAt(0); // Taking out 1st character
        String restOfString = str.substring(1); // Taking out rest of the string except the first character
        
        // Passing restOfString (eg: bc) to bring my Faith answer
        ArrayList<String> recursionResult = getString(restOfString);
        
        ArrayList<String> myResult = new ArrayList<>();
        
        //Matching Faith with Expectation
        for(String res : recursionResult){
            myResult.add("" + res);
            myResult.add(ch + res);
        }
        
        return myResult;
    }
    

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        String str = scn.next(); // Taking Inputs
        ArrayList<String> result = getString(str); //Calling function
        
        //Sorting the Output
        Collections.sort(result);
        
        //Printing the result
        if(result.size() == 0 || result.size() == 1){
            System.out.println(result.get(0));
        }
        else{
            for(int i = 1; < result.size();i++){
                System.out.println(result.get(i));
            }
        }
        
    }
}