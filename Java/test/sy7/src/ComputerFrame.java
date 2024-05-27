import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.util.*;
public class ComputerFrame extends JFrame   implements ActionListener{
    JTextField textOne,textTwo,textResult;// 分别用于输出两个运算数和输入答案
    JButton getProblem,giveAnwser;//两个按钮，分别用于出题和确定答案                王玉升
    JLabel operatorLabel,message; //两个标签，分别用于显示运算符和结果是否正确
    Random random;  //用于产生两个随机运算数
    int numberOne,numberTwo;//存放两两个随机产生的运算数
    ComputerFrame() { //构造方法
        setLayout(new FlowLayout());  //设置窗口布局方式为流式布局
        random = new Random();
        textOne = new JTextField(5);//【代码1】创建显示第一个运算数的文本框textOne,其可见字符长是5
        textTwo=new JTextField(5);  //创建显示第二个运算数的文本框textTwo
        textResult=new JTextField(5);  //创建输入练习者给出的答案的文本框textResult
        operatorLabel=new JLabel("+"); //创建显示运算符“+”的标签operatorLabel
        operatorLabel.setFont(new Font("Arial",Font.BOLD,20)); //设置运算符“+”的字体、字形与字号
        message=new JLabel("你还没有回答呢"); //创建显示提示信息的标签message
        getProblem=new JButton("获取题目");  //创建出题的命令按钮getProblem
        giveAnwser=new JButton("确认答案");  //创建判断给出的答案对错的按钮giveAnwser
        add(getProblem);   //以下add()方法是将创建的各组件添加到窗口中
        add(textOne);
        add(operatorLabel);
        add(textTwo);
        add(operatorLabel);//【代码2】添加显示“＝”的标签对象
        add(textResult);
        add(giveAnwser);                //王玉升
        add(message);
        textOne.setEditable(false);//第一文本框textOne不可操作
        textTwo.setEditable(false);//【代码3】第二文本框textTwo不可操作
        getProblem.setActionCommand("getProblem");//将getProblem命令按钮的"命令"字符串设为" getProblem "
        textResult.setActionCommand("answer");//将textResult文本框的"命令"字符串设为"answer"
        giveAnwser.setActionCommand("answer"); //将giveAnwser命令按钮的"命令"字符串设为"answer"
        getProblem.addActionListener(this);//【代码4】为getProblem的ActionEvent事件监视器  ，窗口即为监视器
        giveAnwser.addActionListener(this);//【代码5】为giveAnwser的ActionEvent事件监视器
        textResult.addActionListener(this);//【代码6】为textResult的ActionEvent事件监视器
        setVisible(true);  //设置窗口显示
        validate();
        setDefaultCloseOperation(DISPOSE_ON_CLOSE);  //设置窗口关闭方式
    }
    public void actionPerformed(ActionEvent e) {//重写actionPerformed方法
        String str = e.getActionCommand(); //获取事件源的“命令”字符串
        if(str.equals("getProblem")) {//如果事件源是"获取题目"按钮，也可通过e.getSource()来判断事件源是谁
            numberOne = random.nextInt(100); //产生0至99之间的随机数作为第一运算数;
            numberTwo = random.nextInt(100);//【代码7】产生0至99之间的随机数作为第二运算数;
            textOne.setText(""+numberOne);//在textOne文本框显示第一个运算数
            textTwo.setText("" + numberTwo);//【代码8】在textTwo文本框显示第二个运算数
            message.setText("请回答");  //显示"请回答"的提示信息
            textResult.setText(null); //输入答案文本框清空
            textResult.requestFocus(); //让输出结果的文本框获得焦点
        }
        else if(str.equals("answer")) { ////如果事件源是输入答案文本框textResult或“确认答案”按钮giveAnwser
            String answer = textResult.getText();//【代码9】获取textResult文本框文本（输入的答案）
            try{  int result=Integer.parseInt(answer);    //将输入的答案由文本型转换为整型
                if(result==numberOne+numberTwo)  //将判断输入的答案的对错
                    message.setText("你回答正确");  //显示答案正确与否的提示信息
                else
                    message.setText("你回答错误");           //王玉升
            }
            catch(NumberFormatException ex) {
                message.setText("请输入数字字符"); //如果输入的答案中含有非数字字符，给出提示信息
            }
        }
    }
}
