import java.util.*;
import java.util.Scanner;
import java.io.FileReader;
import java.io.*;
import java.io.BufferedReader;

public class brackets_Checker {
    public static void main(String[] args) throws FileNotFoundException, IOException {
        
        
        FileReader f = new FileReader("1.txt");
        BufferedReader br = new BufferedReader(f);
        char[] charArray;
        String s ;
        s = br.readLine();
        int size;
        int sbracket = 0;
        int ebracket = 0;
        int line = 0;
        int startingerror = 0;
        
        while(s!=null){
            line++;
            //System.out.println(s);
            
            
            
            //i have a string s here
            charArray = s.toCharArray();
            size = charArray.length;
            
            for (int i=0; i<size; i++){
                
                
                if (charArray[i] == '{'){
                    sbracket++;
                    
            }
                
                if (charArray[i] == '}'){
                    startingerror = line-1;
                    
                    ebracket++;
                    
                    
                    
                }
                    
                    
                    
            }
            
                        
            s = br.readLine();
            
            
            
        }
        System.out.println(sbracket);
        System.out.println(ebracket);
         
        
        if (sbracket > ebracket)
              System.out.println("Missing bracket on line : " + line);
         if (sbracket < ebracket)
               System.out.println("Error at line:  " + startingerror);
        br.close();
        
        
        
    }
}