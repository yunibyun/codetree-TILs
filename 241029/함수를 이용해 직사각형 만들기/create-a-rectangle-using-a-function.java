import java.util.Scanner;

public class Main {
    public static void printOnes(int n, int m) {
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                System.out.print("1");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int rowNum = sc.nextInt();
        int colNum = sc.nextInt();
        printOnes(rowNum, colNum);
    }
}