import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.*;
public class WindowShow extends JFrame   implements ActionListener {
    Student[] stu = new Student[10];              //定义学生数组

    JTextField IDInput, NameInput, AgeInput;
    JLabel giveName;




    WindowShow() {
        setLayout(new FlowLayout());


    }

    @Override
    public void actionPerformed(ActionEvent e) {

    }



}
