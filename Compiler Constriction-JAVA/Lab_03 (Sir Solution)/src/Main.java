import java.util.ArrayList;

public class Main {

    public static void main(String[] args) {
        ArrayList<String> list = new ArrayList<String>(5);
        list.add(0, "pakistan");
        list.add(1, "zimbabwe");
        list.add(2, "johartown");

        String s = "pAkistan Is goiNg to losE against zimBabwe in johartown";
        System.out.println("String: " + s);

        String[] tokens = s.split(" ");
        for (String str : tokens){
            if(!list.contains(str.toLowerCase())) {
                s = s.replace(str, str.toLowerCase());
                continue;
            }

            // System.out.println(str);
            String newToken;
            newToken = str.toLowerCase();
            newToken = newToken.replace(str.charAt(0), Character.toUpperCase(str.charAt(0)));
            // System.out.println("New String: " + newToken);
            s = s.replace(str, newToken);
        }

        System.out.println("New String: " + s);
    }
}