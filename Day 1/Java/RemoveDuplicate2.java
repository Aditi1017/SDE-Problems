import java.util.*;
public class RemoveDuplicate2 {

    /**
     * Method 2
     * Without using any extra space
     *
     * Input  (To be used only for expected output) :
     * 2
     * 5
     * 1, 2, 2, 3, 4, 4, 4, 5, 5
     * 3
     * 1 2 2
     * Output
     * 1 2 3 4 5 
     * 1 2
     */

    public static void main (String[] args)
    {
        int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
        HashSet<Integer> map = new HashSet<Integer>();
        for(int i=0;i<arr.length;i++)
        map.add(arr[i]);
        for(int i:map)
        System.out.println(i);
    }

}
