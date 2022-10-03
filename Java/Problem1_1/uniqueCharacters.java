package Problem1_1;

import java.util.Scanner;

public class uniqueCharacters {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        System.out.println("Enter a string: ");
        String input = in.next();
        

        System.out.println(isUniqueChars(input));
        
        in.close();
    }

    public static boolean isUniqueChars(String str)
    {
        if(str.length() > 256 ) return false;

        boolean[] char_set = new boolean[256];
        for(int i=0;i<char_set.length;i++)
        {
            
            if(char_set[str.charAt(i)])
                return false;
            char_set[str.charAt(i)]= true;
            

        }

        return true;
    }
    
}
