import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 2;
        
        // 총 n개의 행을 출력한다
        for (int i = 0; i < n; i++){
            // 총 n개의 열을 출력한다
            for (int j = 0; j < n; j++){
                System.out.print(cnt + " ");
                cnt += 2;
                if (cnt == 10){
                    cnt = 2;
                }
            }
            System.out.println();
        }
    }
}