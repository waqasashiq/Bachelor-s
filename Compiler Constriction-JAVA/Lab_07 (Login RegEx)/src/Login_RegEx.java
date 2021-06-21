import java.util.*;
import java.util.regex.*;
import java.util.Scanner;

public class Login_RegEx {

	public static void main(String []args){

		Scanner input = new Scanner(System.in);
		

		System.out.println();
		
        String name;
        String phone = "0323-4521617";
        String password;
        String username;
        
        String name_Pattern = "([A-Z][a-z]+\\s+){1}(\\p{Upper}\\p{Lower}+){1}";
		
        int choice = 0;
        
        System.out.printf("\nEnter the name: ");
        name = input.nextLine();
        
        while(choice == 0){
        	if(name.matches(name_Pattern)){
        		System.out.println("\nName is valid: "+name);
        		choice = 1 ;
        	}
        	else{
        		System.out.println("\nName pattern is not match. Valid Pattern is : "+name_Pattern);
        		
                System.out.printf("\nEnter the name: ");
                name = input.nextLine();

        	}
        }
        
        choice = 0;
        String password_Pattern = "(?=.*\\p{Upper}{1})(?=.*\\p{Lower}{1})(?=.*\\d{1})(?=.*\\p{Punct}{1}).{4,11}";
        
        System.out.printf("\nEnter the password: ");
        password = input.nextLine();
        
        while(choice == 0){
        	if(password.matches(password_Pattern)){
        		System.out.println("\nPassword is valid: "+password);
        		choice = 1 ;
        	}
        	else{
        		System.out.println("\nPassword pattern is not match. Valid Pattern is : "+password_Pattern);
        		
                System.out.printf("\nEnter the password: ");
                password = input.nextLine();

        	}
        }
        
        
        choice = 0;
        String username_Pattern = "(\\p{Lower}+.){1}(\\p{Lower}+){1}";
        
        System.out.printf("\nEnter the username: ");
        username = input.nextLine();
        
        while(choice == 0){
        	if(username.matches(username_Pattern)){
        		System.out.println("\nUsername is valid: "+username);
        		choice = 1 ;
        	}
        	else{
        		System.out.println("\nUsername pattern is not match. Valid Pattern is : "+username_Pattern);
        		
                System.out.printf("\nEnter the username: ");
                username = input.nextLine();

        	}
        }


	}	
}