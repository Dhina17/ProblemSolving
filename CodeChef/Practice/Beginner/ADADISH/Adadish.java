package ADADISH;

import java.util.Scanner;

public class Adadish {
    public static void main(String[] args) throws Exception {
        try {
            Scanner scan = new Scanner(System.in);
            int testcase = scan.nextInt();

            while (testcase > 0) {
                int numberOfDishes = scan.nextInt();
                int[] timings = new int[numberOfDishes];
                int totalTime = 0;
                int timeToReady;
                for (int i = numberOfDishes - 1; i >= 0; i--) {
                    timings[i] = scan.nextInt();
                    totalTime += timings[i];
                }

                if (checkSame(timings)) {
                    timeToReady = (numberOfDishes % 2 == 0) ? timings[0] * (numberOfDishes / 2)
                            : (timings[0] * (numberOfDishes / 2)) + timings[0];
                } else {
                    timeToReady = (totalTime % 2 == 0) ? totalTime / 2 : (totalTime / 2) + 1;
                }
                System.out.println(timeToReady);
                testcase--;
            }
            scan.close();
        } catch (Exception e) {

        }

    }

    static Boolean checkSame(int arr[]) {
        for (int i : arr) {
            if (i != arr[0]) {
                return false;
            }
        }
        return true;
    }

}
