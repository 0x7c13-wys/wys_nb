import java.util.Scanner;

public class year {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("请输入年份：");
        int year = scanner.nextInt();
        System.out.print("请输入月份（1-12）：");
        int month = scanner.nextInt();
        System.out.print("请输入日期（1-31）：");
        int day = scanner.nextInt();

        int dayOfYear = 0;

        switch (month) {
            case 12:
                dayOfYear += 30; // 加上11月的30天
            case 11:
                dayOfYear += 31; // 加上10月的31天
            case 10:
                dayOfYear += 30; // 加上9月的30天
            case 9:
                dayOfYear += 31; // 加上8月的31天
            case 8:
                dayOfYear += 31; // 加上7月的31天
            case 7:
                dayOfYear += 30; // 加上6月的30天
            case 6:
                dayOfYear += 31; // 加上5月的31天
            case 5:
                dayOfYear += 30; // 加上4月的30天
            case 4:
                dayOfYear += 31; // 加上3月的31天
            case 3:
                dayOfYear += 28; // 加上2月的28天
            case 2:
                dayOfYear += 31; // 加上1月的31天
        }

        dayOfYear += day; // 加上输入的日期

        System.out.println("wys1012说：" + year + "年" + month + "月" + day + "日是这一年的第" + dayOfYear + "天。");
    }
}