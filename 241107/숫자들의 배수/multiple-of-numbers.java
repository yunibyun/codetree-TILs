import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[25];
        int cnt = 0;
        int sum = 0;
        for (int i = 0; i < 25; i++){
            sum += n;
            arr[i] = sum;
            if (arr[i] % 5 == 0) {
                cnt++;
            }
            System.out.print(arr[i] + " ");
            if (cnt == 2){
                break;
            }
        }
    }
}