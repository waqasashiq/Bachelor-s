import java.util.regex.*;
import java.io.*;

public class MatchPhoneNumber{
   public static void main(String args[]){
      hasDuplicate("m m");
   }

   /**
   * Confirms that given phrase avoids duplicate words.
   * @param phrase is a String representing the phrase.
   * @returns true if the phrase avoids duplicate
   * words.
   */
   public static boolean hasDuplicate(String phrase){
      boolean retval=false;

      String duplicatePattern =
      "\\b(\\w+) \\1\\b";
      // Compile the pattern
      Pattern p = null;
      try{
        p = Pattern.compile(duplicatePattern);
      }
      catch (PatternSyntaxException pex){
         pex.printStackTrace();
         System.exit(0);
      }
      //count the number of matches.
      int matches = 0;

      //get the matcher
      Matcher m = p.matcher(phrase);
      String val=null;

      //find all matching Strings
      while (m.find()){
         retval = true;
        val = ":" + m.group() +":";
        System.out.println(val);
        matches++;
      }

      //prepare a message indicating success or failure
      String msg = "   NO MATCH: pattern:" + phrase
             + "\r\n             regex: "
             + duplicatePattern;

      if (retval){
      msg = " MATCH     : pattern:" + phrase
          + "\r\n         regex: "
          + duplicatePattern;
      }

      System.out.println(msg +"\r\n");
      return retval;
   }
}