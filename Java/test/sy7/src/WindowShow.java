import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.*;
import javax.swing.JComboBox;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
public class WindowShow extends JFrame {

    JTextField IDOutput, NameOutput, AgeOutput;
    JLabel ID, Name, Age;

    JLabel giveName;
    JComboBox ChooseStu;




    public WindowShow(Student[] s) {
        setLayout(new FlowLayout());
        setVisible(true);  //设置窗口显示
        setDefaultCloseOperation(DISPOSE_ON_CLOSE);  //设置窗口关闭方式




        giveName = new JLabel("选择学生");
        ChooseStu = new JComboBox<>();

        for(int i = 0; i < 4; i++){
            ChooseStu.addItem(s[i].getName());
        }


        ChooseStu.addItemListener(new ChoiceListener() {
            @Override
            public void itemStateChanged(ItemEvent e) {
//                if(e.getSource() == )



            }
        });




        ID = new JLabel("学号");
        Name = new JLabel("姓名");
        Age = new JLabel("年龄");

        IDOutput = new JTextField(5);
        NameOutput = new JTextField(5);
        AgeOutput = new JTextField(5);

        add(giveName);
        add(ChooseStu);

        add(ID);
        add(IDOutput);
        add(Name);
        add(NameOutput);
        add(Age);
        add(AgeOutput);


    }



    public static void main(String[] args) {

        Student Infor[] = new Student[4];              //定义学生数组
        Infor[0] = new Student(1012, 20, "王玉升");
        Infor[1] = new Student(458, 20, "陈丽娜");
        Infor[2] = new Student(732, 20, "张伟杰");
        Infor[3] = new Student(891, 20, "李婷婷");

        WindowShow s = new WindowShow(Infor);
        s.setBounds(100,100,800,410);





    }



}
