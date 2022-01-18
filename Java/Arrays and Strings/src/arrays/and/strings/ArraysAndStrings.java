
package arrays.and.strings;

/**
 *
 * @author Amanuel
 */
import java.util.*;
public class ArraysAndStrings {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //System.out.println(check_if_string_has_all_unique_characters("Heo wrld!"));//testing Function 1
        //System.out.println(check_if_string_has_all_unique_characters_without_another_datastructure("Hello world!"));//testing Function 2
        //hashmap_example(); //check the hashmap example
        //arraylist_example();//arraylist example
        StringBuffer_example(); //stringbuffere example
    }
    
    //Function 1 used if it is allowed to use another datastructure
    public static boolean check_if_string_has_all_unique_characters(String y)
    {
        String x="";
        for (int i=0;i<y.length();i++)
        {
            if(!x.contains(y.charAt(i)+""))
                x+=y.charAt(i);
            else return false;
                         
        }
        
        return true;
        
    }
    
    //Function 2 used if it is not allowed to use another datastructure
    public static boolean check_if_string_has_all_unique_characters_without_another_datastructure(String y)
    {
        for (int i=0;i<y.length();i++)
        {
            int count =0;
            for(int j=0;j<y.length();j++)
            {
                if(y.charAt(i)==y.charAt(j))
                    count++;
                
            }
            if(count>1) return false;
            
        }
        
        return true;
        
    }
    
    public static void hashmap_example()
    {
        Hashtable<Integer, String> ht1 = new Hashtable<>();
        ht1.put(10,"a");
        ht1.put(5,"B");
        ht1.put(3,"c");
        
        
        //iteration
        for (Map.Entry<Integer, String> e: ht1.entrySet())
        {
            System.out.println(e.getKey()+ " "+e.getValue());
        }
        
        
        
    }
    
    public static void arraylist_example()
    {
        ArrayList<String> al = new ArrayList<>(3);
        al.add("a");
        al.add("c");
        al.add(1,"b");
        al.add("3");
        al.set(3,"d");
        al.add("3");
        al.add(5,"e");
        System.out.println("Initial ArrayList "+al);
        
        al.remove(4);
        System.out.println("After remove ArrayList "+al);
        
        for (String s:al)
        {
            System.out.print(s+" ");
        }
        System.out.println();
        
        
    }
    
    public static void StringBuffer_example()
    {
        StringBuffer s = new StringBuffer("Thisisit");
        int p = s.length();
        int q = s. capacity();
        System.out.println("Length of string Thisisit "+p);
        System.out.println("Capacity of string s "+q);
        s.append("!");
        System.out.println(s);
        s.insert(4, " ");
        s.insert(s.length()-1,43.21);
        System.out.println(s);
        System.out.println(s.reverse());
        System.out.println(s.delete(0,5));
        s.deleteCharAt(5);
        System.out.println(s);
        s.replace(5,8,"are");
        System.out.println(s);
        
        
    }
    
    
}
