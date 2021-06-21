import java.util.*;
import java.util.regex.*;
import java.util.Scanner;

public class regular_patterns {

	public static void main(String [] args){
		
		Scanner input = new Scanner(System.in);
		int options;
		String phone , name , date , address , doubleWord;
		
		System.out.println("\n\n\t Regular Expression Practice\n");
		
		String phone_Pattern = "\\+{1}(\\d){2}-(\\d){3}-(\\d){7}";
		
		System.out.printf("\nEnter your Phone Number: ");
		phone = input.nextLine();
		
		options = 0;
		while(options == 0){
			if(phone.matches(phone_Pattern)){
				System.out.print(" Phone Match :"+phone);
				options = 1;
			}
			else{
				System.out.println(" Phone is not Match. Enter valid phone number +xx-xxx-xxxxxxx");
				options = 0;
				System.out.printf("\n\nEnter your Phone Number: ");
				phone = input.nextLine();
			}
		}
		
		String name_Pattern = "(\\p{Upper}\\p{Lower}+\\s+){1}(\\p{Upper}\\p{Lower}+\\s?){1}";
		
		System.out.printf("\nEnter your Name: ");
		name = input.nextLine();
		
		options = 0;
		while(options == 0){
			if(name.matches(name_Pattern)){
				System.out.print(" Name Match :"+name);
				options = 1;
			}
			else{
				System.out.println(" Name is not Match. Enter Name in format : "+name_Pattern);
				options = 0;
				System.out.printf("\nEnter your Name: ");
				name = input.nextLine();
			}
		}
		
		String date_Pattern = "(\\d){1,2}+\\-{1}(\\d){1,2}+-\\d{4}+";
		
		System.out.printf("\nEnter the current date: ");
		date = input.nextLine();
		
		options = 0;
		while(options == 0){
			if(date.matches(date_Pattern)){
				System.out.print(" Date Match :"+date);
				options = 1;
			}
			else{
				System.out.println(" Name is not Match. Enter Name in format : "+date_Pattern);
				options = 0;
				System.out.printf("\nEnter the current date: ");
				date = input.nextLine();
			}
		}
		
		
		String address_Pattern = "(\\p{Upper}\\p{Lower}+\\s?){1}(\\p{Upper}\\p{Lower}+\\s?){1}(\\d+){1}"
				+ "(,\\s?)+(\\p{Upper}\\p{Lower}+\\s?){1}(\\p{Upper}\\p{Lower}+\\s?){1}(\\d+\\s?){1}"
				+ "(\\p{Upper}\\p{Lower}+\\s+){1}(\\p{Upper}\\p{Lower}+\\s+){1}(\\p{Upper}\\p{Lower}+\\s+){1}(\\p{Upper}\\p{Lower}+\\s+){1}(\\p{Upper}\\p{Lower}+\\s+){1}(\\p{Upper}\\p{Lower}+.){1}";		
		System.out.printf("\nEnter your address: ");
		address = input.nextLine();
		
		options = 0;
		while(options == 0){
			if(address.matches(address_Pattern)){
				System.out.print(" Address Match :"+address);
				options = 1;
			}
			else{
				System.out.println(" Address is not Match. Enter address in format : "+address_Pattern);
				options = 0;
				System.out.printf("\nEnter your address: ");
				address = input.nextLine();
			}
		}
		
		
		String duplicateWord_Pattern = "\\b(\\w+) \\1\\b";		
		System.out.printf("\nEnter double word: ");
		doubleWord = input.nextLine();
		
		options = 0;
		while(options == 0){
			if(doubleWord.matches(duplicateWord_Pattern)){
				System.out.print(" Double Word Match :"+doubleWord);
				options = 1;
			}
			else{
				System.out.println(" Double Word is not Match. Enter word in format : "+duplicateWord_Pattern);
				options = 0;
				System.out.printf("\nEnter double word: ");
				doubleWord = input.nextLine();
			}
		}
		
	}
}
	