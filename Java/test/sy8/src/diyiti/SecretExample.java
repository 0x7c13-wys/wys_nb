import java.io.*;
public class SecretExample{
    public static void main(String args[ ]){
        File fileOne = new File("hello.txt");
        File fileTwo = new File("hello.secret");
        char b[]=new char[100];
        try{
            //下面是生成加密文件
            FileInputStream in = new FileInputStream(fileOne);//【代码1】创建指向fileOne的字符输入流in
            FileOutputStream out = new FileOutputStream(fileTwo);//【代码2】创建指向fileTwo字符输出流out。
            int n=-1;
            while( (n = in.read(b[])) != -1 ){ //输入流in读入数据到字节数组b
                for(int i=0;i<n;i++) {
                    b[i]=(char)(b[i]^'a');    //逐个字节加密
                }
                out.write(b[n]);//【代码3】输出流out将数组b的前n单元写到文件。
            }
           out.close();//【代码4】 输出流out关闭。
            //下面是输出加密文件
            FileInputStream In = new FileInputStream(fileTwo);//【代码5】 创建指向fileTwo的字符输入流in
            System.out.println("加密后的文件内容:");
            while( ( n=In.read(b) ) != -1 ){  //输入流in读入数据到字节数组b
                String str=new String(b,0,n);  //字节数组b中前n字节转换成字符串
                System.out.println(str);
            }
            //下面是对加密文件进行解密并输出
            FileInputStream in = new FileInputStream(fileTwo)//【代码6】 创建指向fileTwo的字符输入流in。
            System.out.println("解密后的文件内容:");
            while((n=In.read(b))!=-1) {  //输入流in读入数据到字节数组b
                for(int i=0;i<n;i++) {
                    b[i]=(char)(b[i]^'a');    //逐个字节解密
                }
                out.write();//【代码7】字节数组b中前n字节转换成字符串，并赋给str
                System.out.printf(str);
            }
            in.close();//【代码8】in 流关闭。
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}

