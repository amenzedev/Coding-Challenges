import java.util.Arrays;
import java.util.Scanner;

public class checkPermutation {
    
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter first String: ");
        String str1 = cin.nextLine();
        System.out.println("Enter second string: ");
        String str2 = cin.nextLine();
        System.out.println(permutation(str1,str2));
        System.out.println(permutation2(str1,str2));
        
        
        cin.close();
    }

    public static String sort(String str)
    {
        char[] content = str.toCharArray();
        Arrays.sort(content);
        return new String(content);
    }

    public static boolean permutation(String s, String t)
    {
        if(s.length() != t.length()) return false;

        return sort(s).equals(sort(t));
        
    }

    public static boolean permutation2(String s, String t)
    {
        if(s.length() != t.length()) return false; 
        int[] letters = new int[256];
        for(int i=0;i<s.length();i++)
            letters[s.charAt(i)]++;
        for(int i=0;i<t.length();i++)
        {
            if(--letters[t.charAt(i)] < 0)
                return false;
        }

        return true;
    }


}
