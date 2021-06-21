
import java.util.*;


public class execute_String {

	public static void main(String []args){
		
		String s = "Once a thief";
		
		String s1 , s2;
		String innerCheck;
		int outerCheck, secondCheck, totalLength;
		innerCheck = s.substring(0,1);
		outerCheck = s.indexOf(innerCheck);
		secondCheck = s.indexOf("t");
		s1 = s.toLowerCase();
		s2 = s1.substring(outerCheck, secondCheck);
		
		totalLength = s2.length();
		
		//if(s.toLowerCase().substring(s.indexOf(s.substring(0,1)),s.indexOf("t")).length() == 7)
		
		if(totalLength == 7)
		{
			System.out.println("\nStatement is Correct!\n");
		}
		else{
			System.out.println("\nStatemnt is false\n");
		}
		
	}
	
}
