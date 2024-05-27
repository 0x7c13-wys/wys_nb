//定义窗口类，且窗口作监视器
import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import javax.swing.border.*;
public class WindowLogin extends JFrame implements ActionListener {
    JTextField textName;// 用于输入用户名
    JPasswordField textPassword;// 用于输入密码
    JButton button1,button2;//两个按钮，分别用于确定和取消输入
    WindowLogin() {
        setLayout(new FlowLayout());    //【代码1】设置窗口布局方式为流式布局
        textName = new JTextField(10); //创建文本框textName,其可见字符长是10
        textPassword = new JPasswordField(10);//【代码2】 创建密码框textPassword,其可见字符长是10
        button1 = new JButton("确定");//【代码3】 创建“确定”按钮button1
        button2=new JButton("取消");
        add(new JLabel("  用户名："));
        add(textName);//【代码4】 窗口添加textName文本框
        add(new JLabel("  密   码："));
        add(textPassword);
        add(button1);
        add(button2);
        textName.requestFocus();
        button1.addActionListener(this);//【代码5】为button1注册ActionEvent事件监视器
        button2.addActionListener(this);//【代码6】为button2注册ActionEvent事件监视器
        setVisible(true);//【代码7】窗口可见
        validate();
        setDefaultCloseOperation(DISPOSE_ON_CLOSE);//【代码8】窗口关闭方式为DISPOSE_ON_CLOSE
    }
    public void actionPerformed(ActionEvent e) {//重写actionPerformed方法
        if(e.getSource()==button1) {
            String name = new String(textName.getName());//【代码9】获取用户名
            String password = new String(textPassword.getPassword());//获取密码
            if(name.equals("user01") && password.equals("123")){
                JOptionPane.showMessageDialog(this,"登录成功！","消息对话框",  JOptionPane.WARNING_MESSAGE); //在消息窗口显示"登录成功！"
            }
            else{
                JOptionPane.showMessageDialog(this, "用户名或密码错误!");//【代码10】在消息窗口显示"用户名或密码错误！"
            }
        }
        else if(e.getSource()==button2) {
            textName.setText(null);  //用户名框清空
            textPassword.setText(null);//【代码11】将密码框清空
        }
    }
}
