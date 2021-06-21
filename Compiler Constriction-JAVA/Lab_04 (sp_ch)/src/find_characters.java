import java.io.BufferedReader;
import java.io.*;
import java.util.ArrayList;
import java.io.FileReader;

public class find_characters{
	
	public static void main(String []args){
		
		System.out.println("\n\n\t Compiler Construction Lab_04 \n");
	
		ArrayList<Character> specialCharacter = new ArrayList<Character>(); 
		ArrayList<String> keywords = new ArrayList<String>();
		
		specialCharacter.add('{');
		specialCharacter.add('}');
		specialCharacter.add('[');
		specialCharacter.add(']');
		specialCharacter.add('(');
		specialCharacter.add(')');
		specialCharacter.add('+');
		specialCharacter.add('*');
		specialCharacter.add('-');
		specialCharacter.add('/');
		specialCharacter.add('=');
		
		keywords.add("int");
		keywords.add("float");
		keywords.add("double");
		keywords.add("String");
		keywords.add("void");
		keywords.add("printf");
		
		int i = 0;
		
		for(i=0;i<specialCharacter.size() ; i++){
			System.out.println("Sperial Character = "+specialCharacter.get(i));
		}
		
		try{
			FileReader reader = new FileReader("program.txt");
			BufferedReader breader = new BufferedReader(reader);
			
			String input = "";
			String tokens = "";
			
			while((input = breader.readLine() ) != null){
				tokens = tokens+input;
			}
			
			System.out.println("Final String = "+tokens);

			char [] array = tokens.toCharArray();

			String variable = "";
			for(int j = 0;j<array.length ; j++){
				

				if(Character.isAlphabetic(array[j])){
					variable = variable+array[j];
				}
				else if( variable != ""){
					if(keywords.contains(variable)){
						System.out.println("Keyword = "+variable);
						variable = "";
					}
					else{
						System.out.println("variable = "+variable);
						variable = "";
					}
				}
				
				
				if(specialCharacter.contains(array[j])){
					System.out.println("Special Character = "+array[j]);
				}
				else if(Character.isDigit(array[j])){
					System.out.println("Digits = "+array[j]);
				}
			}
			
		}catch (Exception e){
			System.out.println(e.toString());
		}
		
	}
}