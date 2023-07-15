import javax.swing.*;
import javax.swing.JMenu;
import javax.swing.JMenuBar;
import javax.swing.JMenuItem;
import java.awt.*;
import java.awt.event.MouseAdapter;
import java.awt.event.MouseEvent;

public class JFrame_welcome  extends  JFrame{



    public static void main(String[] args) {
        JFrame_welcome jFrame_welcome = new JFrame_welcome();
    }

    public JFrame_welcome(){                // 构造函数

        Init_Frame();       // 初始化窗口
        Init_Image();       // 初始化图片
        Init_Menu();        // 初始化菜单
        Init_Button();      // 初始化按钮













        this.setVisible(true);
    }

    private void Init_Button() {
        this.setLayout(null);

        JButton information = new JButton("信息管理");                           // 信息管理菜单

        information.setSize(300, 150);
        information.setLocation(150, 170);
        information.setBorder(null);

        information.addMouseListener(new MouseAdapter() {
            @Override
            public void mouseClicked(MouseEvent e) {
                super.mouseClicked(e);
                System.out.println("信息管理");
            }
        });
        this.getContentPane().add(information);


    }


    private void Init_Menu() {

        this.setLayout(null);
        JPanel menuBarPlaceholder = new JPanel();
        menuBarPlaceholder.setOpaque(false);
        menuBarPlaceholder.setPreferredSize(new Dimension(0, 20));
        this.getContentPane().add(menuBarPlaceholder, BorderLayout.NORTH);

        JMenuBar menuBar = new JMenuBar();                                    // 菜单栏
//        menuBar.setLayout(null);
//        menuBar.setLocation(30, 30);
        menuBar.setSize(200, 30);


        JMenu information = new JMenu("信息管理");                           // 信息管理菜单
//        information.setSize(300, 150);
//        menuBar.setLocation(150, 170);

        JMenuItem AddInformation = new JMenuItem("添加学生信息");           // 添加信息菜单项
        JMenuItem SearchInformation = new JMenuItem("查找学生信息");        // 查找信息菜单项
        JMenuItem DeleteInformation = new JMenuItem("删除学生信息");        // 删除信息菜单项
        JMenuItem ChangeInformation = new JMenuItem("修改学生信息");        // 修改信息菜单项
        JMenuItem ShowInformation = new JMenuItem("显示学生信息");          // 显示信息菜单项

        information.add(AddInformation);                                    // 添加菜单项到信息管理菜单
        information.add(SearchInformation);
        information.add(DeleteInformation);
        information.add(ChangeInformation);
        information.add(ShowInformation);


        JMenu grade = new JMenu("成绩管理");              // 成绩管理菜单
        JMenuItem AddGrade = new JMenuItem("添加学生成绩");           // 添加成绩菜单项
        JMenuItem SearchGrade = new JMenuItem("查找学生成绩");        // 查找成绩菜单项
        JMenuItem DeleteGrade = new JMenuItem("删除学生成绩");        // 删除成绩菜单项
        JMenuItem ChangeGrade = new JMenuItem("修改学生成绩");        // 修改成绩菜单项
        JMenuItem ShowGrade = new JMenuItem("显示学生成绩");          // 显示成绩菜单项

        grade.add(AddGrade);                                    // 添加菜单项到成绩管理菜单
        grade.add(SearchGrade);
        grade.add(DeleteGrade);
        grade.add(ChangeGrade);
        grade.add(ShowGrade);


        menuBar.add(information);                               // 添加菜单到菜单栏
        menuBar.add(grade);


        this.getContentPane().add(menuBar);                     // 添加菜单栏到窗口
        this.setJMenuBar(menuBar);                              // 设置菜单栏

    }


    /*
     * 初始化图片
     */
    private void Init_Image() {
        JPanel contentPane = new JPanel();
        contentPane.setLayout(new BorderLayout());

        ImageIcon imageIcon = new ImageIcon("src\\image\\welcome.jpg");
        JLabel label = new JLabel(imageIcon);
        contentPane.add(label, BorderLayout.CENTER);

        this.setContentPane(contentPane);
    }


    /*
     * 初始化窗口
     */
    private void Init_Frame() {
//        this.setLayout(new FlowLayout());                                       // 设置窗口布局
        this.setTitle("学生成绩管理系统");                              // 设置标题
        this.setSize(1239, 688);                        // 设置窗口大小
        this.setLocationRelativeTo(null);                           // 设置窗口居中
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);        // 设置窗口关闭方式
    }



}

