import java.util.Scanner;
import javax.swing.JOptionPane;

public class String_Statistics {
	
	
	public static void main(String []args){
		

		String getInput;
		System.out.println("\n\t*-*-*-*-* String Statistics   *-*-*-*-*\n");

		Scanner input = new Scanner(System.in);
		
		System.out.print("\n Enter any string : ");
		getInput = input.nextLine();
		
		System.out.print("\n You enter string = "+getInput);
	
		System.out.print("\n\nThe string '"+getInput+"' have length = "+getInput.length());
		
		int spaceCount = 0;
		int UpperCaseCount = 0;
		int LowerCaseCount = 0;
		int digitCount = 0;
		
		for(int i = 0; i<getInput.length() ; i++){
			
			if(Character.isWhitespace(getInput.charAt(i))){
				spaceCount++;
			}
			else if(Character.isUpperCase(getInput.charAt(i) ) ){
				UpperCaseCount++;
			}
			else if(Character.isLowerCase(getInput.charAt(i))){
				LowerCaseCount++;
			}
			else if(Character.isDigit(getInput.charAt(i))){
				digitCount++;
			}
		} // end for
		
		System.out.print("\n\n Total White Spaces in '"+getInput+"' is "+spaceCount);
		System.out.print("\n\n Total Upper Case Letters in '"+getInput+"' is "+UpperCaseCount);
		System.out.print("\n\n Total Lower Case Letter in '"+getInput+"' is "+LowerCaseCount);
		System.out.print("\n\n Total digits in '"+getInput+"' is "+digitCount);

		System.out.println("\n\nDisplay the given String into following parts\n\n");
		
		for(String retval:getInput.split(" ")){
			System.out.println("Divided String = "+retval);
		}
		
	} // end main
} // end class