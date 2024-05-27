package 四;

import java.util.TreeMap;

public class CourseSchedule {
    public static void main(String[] args) {

        TreeMap<String, String> courseMap = new TreeMap<>();
        courseMap.put("Kc01", "C程序设计");
        courseMap.put("Kc02", "数据结构");
        courseMap.put("Kc03", "数字逻辑");
        courseMap.put("Kc04", "数据库原理");
//        王玉升

        courseMap.put("Kc05", "面向对象程序设计");


        courseMap.put("Kc06", "计算机网络");


        courseMap.put("Kc04", "数据库概论");


        courseMap.remove("Kc03");


        for (String courseId : courseMap.keySet()) {
            System.out.println("课程号: " + courseId + ", 课程名: " + courseMap.get(courseId));
        }
    }
}

