package Problem2_1;

import java.util.HashMap;
import java.util.Hashtable;

public class removeDuplicatesFromUnsortedList
{
    public static void main(String[] args) {

        ListNode starter = new ListNode(1);
        starter.appendToTail(2);
        starter.appendToTail(3);
        starter.appendToTail(4);
        starter.appendToTail(1);
        starter.appendToTail(5);
        starter.appendToTail(2);
        starter.display(starter);
        removeDuplicateswithHashtables(starter);
        starter.display(starter);
        starter.appendToTail(1);
        starter.appendToTail(5);
        starter.appendToTail(2);
        starter.display(starter);
        removeDuplicates(starter);
        starter.display(starter);

        
        
        
        
    }

    public static void removeDuplicateswithHashtables(ListNode starter)
    {
        HashMap<Integer,Integer> table = new HashMap<Integer,Integer>();
        ListNode previous = null;
        
        while(starter != null)
        {
            if(table.get(starter.data)!= null)
                previous.next=starter.next;
            else
            {
                table.put(starter.data,1);
                previous=starter;
            }
                
            starter= starter.next;
        }
        
        

    }

    public static void removeDuplicates(ListNode starter)
    {
        if(starter == null)
            return;
        
        ListNode current = starter;
        while(current != null)
        {
            ListNode runner = current;

            while(runner.next != null)
            {
                if(runner.next.data != current.data)
                    runner= runner.next;
                else{
                    runner.next = runner.next.next;
                }
            }
            current = current.next;
        }
              
        

    }

}
