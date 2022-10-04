package Problem1_4;

public class replaceSpaces {
    
    public static void main(String[] args) {
        char[] arr= new char[20];
        String input ="Hello World!";
        for(int i=0;i<input.length();i++)
        {
            arr[i]=input.charAt(i);
        }
        System.out.println(arr);

        replaceSpace(arr,input.length());

        System.out.println(arr);

    }

    public static void replaceSpace(char[] arr, int length)
    {
        int spaceCount=0,newLength,i =0;
        for(i=0;i<length;i++)
        {
            if(arr[i]==' ')
             spaceCount++;
        }
        newLength=length+2*spaceCount;
        arr[newLength]='\0';

        for(i=length-1;i>=0;i--)
        {
            if(arr[i] == ' ')
            {
                arr[newLength-1]='0';
                arr[newLength-2]='2';
                arr[newLength-3]='%';
                newLength-=3;

            }
            else{
                arr[--newLength]=arr[i];
            }


        }
    }
}
