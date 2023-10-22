import java.util.Scanner;

public class PrintTrigon {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("你好，我是王玉升：");
        System.out.print("请输入三角形的高度：");
        int height = scanner.nextInt();

        printHollowTrigon(height);

        scanner.close();
    }

    public static void printHollowTrigon(int height) {
        for (int i = 1; i <= height; i++) {
            // 打印空格，使三角形居中
            for (int j = 1; j <= height - i; j++) {
                System.out.print(" ");
            }

            // 打印星号或空格
            for (int k = 1; k <= 2 * i - 1; k++) {
                if (k == 1 || k == 2 * i - 1 || i == height) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }

            // 换行
            System.out.println();
        }
    }
}

