
import java.util.*;
import java.io.*;
import java.util.regex.*;
import java.util.Scanner;


public class if_structure {
	
	public static void main(String [] args){
		
		String if_structure = "if+(\\s)*[\\(]{1}(\\s)*([a-z]*(\\p{Punct})*(\\d)*)[)]{1}(\\s)*[{]+(\\s)*[a-z]*(\\d)*(\\s)*[}]+(\\s)*else+";
		
		String input = "if(){ } else";	
		
		if(input.matches(if_structure)){
			System.out.println("\nPattern is matched.\n");
			System.out.println("\nCorrect Pattern = "+if_structure);
		}
		else{
			System.out.println("\nPattern is not matched.\n");
			System.out.println("\nCorrect Pattern = "+if_structure);
		}
	}

}