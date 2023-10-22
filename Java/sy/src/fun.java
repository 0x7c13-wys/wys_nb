import java.util.Scanner;
import static java.lang.System.in;
public class fun {
    public static void main(String[] args){
        Scanner sc = new Scanner(in);
        System.out.println("Please input a num:");
        //22软件工程1班王玉升1012
        int x = sc.nextInt();
        int y = 0;
        if (x >0) {
            y = 1;
        }else if (x ==0) {
            y = 0;
        }else if (x < -1) {
            y =- 1;
        }
        System.out.println(y+" = wys wys wys wys 1012 1012 1012");
    }
}

