import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // 변수 선언
        int[] arr = new int[10];

        // 10개의 정수를 배열에 입력받아 저장합니다.
        for(int i = 0; i < 10; i++) {
            arr[i] = sc.nextInt();
        }

        int i = 0;
        while (true){
            if(arr[i] % 3 == 0){
                System.out.println(arr[i-1]);
                break;
            }
            i++;
        }
    }
}