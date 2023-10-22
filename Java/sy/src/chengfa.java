public class chengfa {
    public static void main(String[] args) {
        int n = 9; // 乘法表的行数

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= i; j++) {
                System.out.printf("%2d x %2d = %2d  ", j, i, i * j);
            }
            System.out.println();
        }
    }
}


