package 三;
import java.util.Comparator;
import java.util.TreeSet;
import java.util.Iterator;
public abstract class Sy7_3 implements Comparator {
    public static void main(String[] args) {
        TreeSet ts = new TreeSet(new Comparator<Student>() {
            @Override
            //【代码1】实现Comparator接口

            public int compare(Student s1, Student s2) { //【代码2】重写compare方法
                int m = s1.getId().compareTo(s2.getId());//【代码3】比较s1、s2 id大小
                int n = s1.getAge() - s2.getAge(); //比较s1、s2年龄大小（差值）   22206091012王玉升
                return m == 0 ? m : n != 0 ? n : m;//id相同表示同一个同学，否则按年龄升序排列，年龄相同按ID长序排列

            }
        });
        //王玉升
        ts.add(new Student("1001", "苏超", 20));
        ts.add(new Student("1002", "李彬", 19));
        ts.add(new Student("1003", "李进玉", 21));
        ts.add(new Student("1012", "王玉升", 20));

        ts.add(new Student("1005", "冯明宝", 18));
        Iterator<Student> it = ts.iterator(); // 生成迭代器//【代码4】生成迭代器
        while (it.hasNext()) {  // 遍历迭代器中的元素
            //【代码5】遍历
            System.out.println(it.next());
        }
    }
}
