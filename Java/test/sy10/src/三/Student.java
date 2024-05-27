package 三;
import java.util.Comparator;
import java.util.TreeSet;
import java.util.Iterator;

class Student{
    private String id;          //王玉升
    private String name;

    private int age;

    public Student(String id, String name,int age) {
        this.id = id;
        this.name = name;
        this.age=age;
    }


    /***
     * 王玉升
     * @return
     */
    public int getAge() {
        return age;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public String getId() {
        return id;
    }
    public void setId(String id) {
        this.id = id;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    // 重写toString()方法
    public String toString() {
        return id + ":" + name+":"+age;
    }
}

