import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[100];

        // 숫자 n 입력받기
        int n = sc.nextInt();

        // 원소들 입력받기
        for (int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        // 원소들 출력하기
        for (int i = 0; i < n; i++ ){
            arr[i] *= arr[i];
            System.out.print(arr[i]+" ");
        }
    }
}