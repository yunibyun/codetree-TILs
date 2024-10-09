import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 1;
        // 총 n개의 행을 출력하므로
        for (int i = 0; i < n; i ++){
            // 총 n개의 열을 출력하므로
            for (int j = 0; j < n; j++){
                System.out.printf("%d ", cnt);
                cnt++;
            }
            // 한 줄 출력하고 나서 개행을 위해서
            System.out.println();
        }
    }
}