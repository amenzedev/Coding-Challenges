package Problem1_5;

public class compressBad {
    public static void main(String[] args) {
        String input = "aabcccccaaa";
        System.out.println(compressStringMine(input));
        System.out.println(compressAlternate(input));
        input = "ab";
        System.out.println(compressStringMine(input));
        System.out.println(compressAlternate(input));

        
    }

    public static String compressStringMine(String input)
    {
        String output = "";
        int count =0;
        char current='\0';



        for(int i=0;i<input.length();i++)
        {
            if(i==0)
            {
                current = input.charAt(0);
                count = 1;                
            }
            else{
                if(current == input.charAt(i))
                    {
                        count++;
                        if(i==input.length()-1)
                        {
                            output+=current+""+count;
                        }
                    }
                else{
                    output+=current+""+count;
                    current=input.charAt(i);
                    count = 1;
                }
            }

            
        }

        if(output.length()<input.length())
        return output;
        return input;
    }

    public static String compressAlternate(String str)
    {
        int size = countCompression(str);

        if(size > str.length())
            return str;
        
        char [] array = new char[size];
        int index = 0;
        char last = str.charAt(0);
        int count = 1;
        for(int i=1;i<str.length();i++)
        {
            if(str.charAt(i) == last)
                count++;
            else{
                index = setChar(str,array,last,index,count);
                last = str.charAt(i);
                count = 1;
            }
        }

        index = setChar(str, array, last, index, count);
        return String.valueOf(array);

    }

    public static int setChar(String str,char[] array, char c, int index,int count)
    {
        array[index]=c;
        index++;
        
        char[] cnt = String.valueOf(count).toCharArray();

        for(char x: cnt){
            array[index] = x;
            index++;
            
        }
        return index;
    }

    public static int countCompression(String str)
    {
        char last = str.charAt(0);
        int size = 0;
        int count = 1;
        for(int i = 1;i<str.length();i++)
        {
            if(str.charAt(i)==last)
            {
                count++;
            }
            else{
                last = str.charAt(i);
                size += 1 + String.valueOf(count).length();
                count = 0;
            }
        }
        size += 1 + String.valueOf(count).length();
        return size;
    }


}
