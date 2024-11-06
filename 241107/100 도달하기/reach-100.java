import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[100];
        int cnt = 0;
        for (int i = 0; i < 100; i++){
            if (i == 0){
                arr[i] = 1;
                cnt++;
            } else if (i == 1){
                arr[i] = n;
                cnt++;
            } else if (i >= 2){
                arr[i] = arr[i-2] + arr[i-1];
                cnt++;
            } 
            if (arr[i] >= 100){
                break;
            }
        }

        for (int i = 0; i < cnt; i++){
            System.out.print(arr[i] + " ");
        }

        
    }
}