// Dhina17

import java.util.Scanner;

class Test {
    public static void main(String[] args) {
        int[] input = new int[100];
        Scanner scan = new Scanner(System.in);

        for (int i = 0; i < 100; i++) {
            
            if (scan.hasNext()) {
                input[i] = scan.nextInt();
            }

            if (input[i] == 42) {
                break;
            }

            System.out.println(input[i]);
        }
        scan.close();
    }
}