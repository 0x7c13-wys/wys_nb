package 一;

import java.util.ArrayList;
public class StudentName {
    public static  void main(String argvs[]) {
        ArrayList<String> list= new ArrayList<>();//【代码1】创建ArrayList集合list
        list.add("王玉升");
        list.add("张小宝");//【代码2】将“张小宝”加入名单
        list.add("陈娟");
        list.add("华国庆");

        list.add("孙佳");
        list.add(0,"陈红叶"); //【代码3】将“陈红叶”插入到名单最前面
        int index = list.indexOf("陈娟");
        if (index != -1) {
            list.set(index, "陈娟娟");
        }

//        王玉升

        //【代码4】将“陈娟”姓名修改为““陈娟娟”
        list.remove("华国庆");    //【代码5】将“华国庆”从名单中删除
        System.out.println("人数："+list.size());//【代码6】输出总人数
        System.out.println("第三个人是："+list.get(2));//【代码7】输出名单中第3个人姓名
        System.out.println(list);
    }
}

