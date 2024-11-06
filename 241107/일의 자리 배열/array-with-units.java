import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.

        int arr[] = new int[10];
        Scanner sc = new Scanner(System.in);

        arr[0] = sc.nextInt();
        arr[1] = sc.nextInt();

        for (int i = 0 ; i < 10; i++){
            if (i <= 1){
                System.out.print(arr[i] + " ");
            } else {
                arr[i] = arr[i-1] + arr[i-2];
                if ( arr[i] >= 10) {
                    arr[i] = arr[i] % 10;
                }
                System.out.print(arr[i] + " ");
            }
        }
    }
}