import java.util.Scanner;

public class Main {

    public static void printSquare(int num){
        int cnt = 1;
        for (int i = 0; i < num; i++){
            for (int j = 0; j < num; j++){
                if ((cnt % 10) == 9){
                    System.out.print(cnt % 10 + " ");
                    cnt += 2;
                } else {
                    System.out.print(cnt % 10 + " ");
                    cnt++;
                }
            }
                System.out.println();
        }
    }
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner sc = new Scanner(System.in);
        int inputNum = sc.nextInt();
        printSquare(inputNum);
    }
}