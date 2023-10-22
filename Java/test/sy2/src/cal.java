public class cal {
    public static void main(String[] args) {
        int n = 1;
        int sum = 1;
        int factorial = 1;

        while (sum + factorial <= 9999) {
            n++;
            factorial *= n;
            sum += factorial;
        }

        System.out.println("满足1+2!+3!+...+n!<=9999的最大整数n为：" + (n - 1));
    }
}
