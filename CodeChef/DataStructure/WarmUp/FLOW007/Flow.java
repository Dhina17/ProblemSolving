import java.util.Scanner;

public class Flow {
    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int testcases = scan.nextInt();
        String[] numbersArray = new String[testcases];

        for(int i=0; i < testcases; i++){
            numbersArray[i] = scan.next();
        }
        scan.close();

        for (int i=0; i < testcases; i++){
            String rest = "";
            for(int j=numbersArray[i].length() - 1; j >= 0; j--){
                rest += numbersArray[i].charAt(j);
            }
            System.out.println(Integer.parseInt(rest));
        }
    }
}