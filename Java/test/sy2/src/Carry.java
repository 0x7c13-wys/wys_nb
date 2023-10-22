import java.util.Scanner;

public class Carry {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[] originalArray = new int[10];
        int[] invertedArray = new int[10];

        // 输入10个数到原始数组
        System.out.println("请输入10个整数：");
        for (int i = 0; i < 10; i++) {
            originalArray[i] = scanner.nextInt();
        }

        // 倒置数组
        for (int i = 0; i < 10; i++) {
            invertedArray[i] = originalArray[9 - i];
        }

        // 输出原始数组
        System.out.println("原始数组：");
        for (int num : originalArray) {
            System.out.print(num + " ");
        }
        System.out.println();

        // 输出倒置后的数组
        System.out.println("倒置后的数组：");
        for (int num : invertedArray) {
            System.out.print(num + " ");
        }
    }
}