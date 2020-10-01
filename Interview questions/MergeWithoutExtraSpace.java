package arrays;

import java.lang.reflect.Array;
import java.util.Arrays;

public class MergeWithoutExtraSpace {

    public static void main(String[] args) {

        int[] a = {1, 5, 9, 10, 15, 20}; // array 1
        int n = a.length; // size 6
        int[] b = {2, 3, 8, 13}; // array 2
        int m = b.length; // size 4
//        int start =0;
//        int end = 0;
        int temp;

        /**
         * here we do not have to use extra space
         * and time complexity will be O((n+m) log(n+m)).
         *
         * this is brute force approach
         * its time complexity is greater than O((n+m) log(n+m)).
         *

        for (int i= n-1; i>=0; i--){
            for (int j=0; j<m; j++){
                if (a[i] > b[j]) {
                    temp = a[i];
                    a[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        Arrays.sort(a);
        Arrays.sort(b);


        for (int i=0; i<n; i++){
            System.out.print(a[i] + " ");
        }
        System.out.println();

        for (int j=0; j<m; j++){
            System.out.print(b[j] + " ");
        }
         **/

        int i = n-1;
        int j=0;

        while (i>=0 && j<m) {
            if (a[i] > b[j]) {
                temp = a[i];
                a[i] = b[j];
                b[j] = temp;

                i--;
            } else {
                j++;
            }
        }
        Arrays.sort(a);
        Arrays.sort(b);

        for (int k=0; k<n; k++ ){
            System.out.print(a[k]  + " ");
        }
        System.out.println();
        for (int k=0; k<m; k++ ){
            System.out.print(b[k]  + " ");
        }
    }


}
