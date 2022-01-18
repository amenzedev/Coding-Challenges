
package arrays.and.strings;

/**
 *
 * @author Amanuel
 */
public class ArraysAndStrings {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        //System.out.println(check_if_string_has_all_unique_characters("Heo wrld!"));//testing Function 1
        System.out.println(check_if_string_has_all_unique_characters_without_another_datastructure("Hello world!"));//testing Function 2
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
    
    
}
