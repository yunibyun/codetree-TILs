import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        Scanner input = new Scanner(System.in);
        int inputNum = input.nextInt();

            // 별을 출력하는 총 행의 갯수
            for (int i = 0; i < inputNum; i++){
                for(int j=0; j < inputNum; j++){
                    if( (i>0 && j%2==0) || j<i){
                        System.out.print("  ");
                    }
                    else if( i==0 || (j%2==1)  ) {
                    System.out.print("* ");
                    }
                }
                System.out.println();   
            }
        }
    }