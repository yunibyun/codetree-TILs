import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 1;
        // 총 n개의 행을 출력해야하므로
        for (int i = 0; i < n; i++){
            // 총 n개의 열을 출력해야하므로
            for (int j = 0; j < n; j++){
                System.out.print(cnt%10);
                if ((cnt%10)==9){
                    cnt= cnt+2;
                } else {
                    cnt++;
                }
            }
            System.out.println();
        }
    }
}