package ADADISH;

import java.util.Arrays;
import java.util.Collections;
import java.util.Scanner;

public class EditorialSol {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        
        while(t > 0){
            int n = scan.nextInt();
            Integer[] s = new Integer[n];
            for(int i = n-1 ; i >= 0; i--) {
                s[i] = scan.nextInt();
            }
            Arrays.sort(s, Collections.reverseOrder());
            int b1 = 0;
            int b2 = 0;

            for(int i = 0; i < n; i++){
                if(b1 < b2){
                    b1 += s[i];
                }else{
                    b2 += s[i];
                }
            }
            System.out.println(b1>b2 ? b1:b2);
            t--;
        }
        scan.close();
    }
}
