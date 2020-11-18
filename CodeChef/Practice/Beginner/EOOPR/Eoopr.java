package EOOPR;

import java.util.Scanner;

public class Eoopr {
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        int testcase = scan.nextInt();

        while(testcase > 0) {
            int X = scan.nextInt();
            int Y = scan.nextInt();
            int diff = X - Y;
            int ans = 0;

            if (X > Y){
                ans = (diff % 2 == 0) ?  1 : 2;                
            }else if(X < Y){
                ans = (diff % 2 == 0) ? ((diff % 4 == 0) ? 3: 2) : 1;
            }else{
                ans = 0;
            }
            System.out.println(ans);
            testcase--;
        }
        scan.close();
    }
}
