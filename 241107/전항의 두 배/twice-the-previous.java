import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int arr[] = new int[10];
        arr[0] = sc.nextInt();
        arr[1] = sc.nextInt();

        for (int i = 0 ; i < 10; i++){
            if (i == 0 || i == 1) {
                System.out.print(arr[i] + " ");
            } else if ( i >= 2 ){
                arr[i] = arr[i-1] + (2 * arr[i-2]);
                System.out.print(arr[i] + " ");
            }
        }
    }
}