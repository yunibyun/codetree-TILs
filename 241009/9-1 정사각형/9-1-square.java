import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int cnt = 9;

        //총 n행의 행을 가지므로
        for (int i = 0; i < n; i++){
            // 총 n열의 열을 가지므로
            for (int j = 0; j < n; j++){
                System.out.print(cnt);
                cnt--;
                if (cnt == 0){
                    cnt = 9;
                }
            }
            System.out.println();
        }
    }
}