import java.util.HashMap;
import java.util.Arrays;
public class main {
    public static void main(String args[]) {
      int [] number = new int[2];
      number[0]=0;
      number[1]=1;

      //System.out.println(number[1]);

      HashMap<String, int[]> datas = new HashMap<String,int[]>();

      datas.put("1",number);
      System.out.println(datas.get("1")[1]);
      number[1]=0;
      datas.put("1",number);
      System.out.println(datas.get("1")[1]);
      int a[]= Arrays.copyOf(datas.get("1"),2);
      System.out.println(a[0]);
      System.out.println(a[1]);

    }
}
