
import java.util.*;
import java.io.*;
import java.util.Scanner;

public class Num {

	public Iterator allPrimes()
	{
		return new PrimeGen();
	}
	
	
	private static class PrimeGen implements Iterator{
		
		private Vector ps;
		
		private int P;
		
		PrimeGen(){
			P = 2;
			ps = new Vector();
		}
		public boolean hasNext(){
			return true;
		}
		
		public Object next(){
			if(P == 2){
				P = 3;
				ps.add(new Integer(2));
				return 2;
				
			}
			
			for(int n = P ; true ; n = n+2)
			{
				for(int i = 0; i<ps.size() ; i++)
				{
					int e1 = (Integer)ps.get(i);
					
					if(n % e1 == 0){
						break;
					}
					
					if(e1 * e1 > n){
						ps.add(new Integer(n));
						P = n+2;
						return n;
					}
					
				}
				
				
			}
		}
	}
	
	
	public static void main(String [] args){
		System.out.println("\nThis is prime number generator class.\n");
		
		Num obj = new Num();
		
		Iterator it = obj.allPrimes();
		
		int i = 0;
		
		while(it.hasNext()){
			i++;
			System.out.println(it.next());
			if(i == 100){
				break;
			}
		}
	}
}