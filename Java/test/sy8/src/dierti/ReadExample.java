package dierti;

import java.io.*;
public class ReadExample{
    public static void main(String args[ ]){
        File file=new File("C:\\Users\\wys03\\Desktop\\wys_nb\\Java\\test\\sy8\\src\\dierti\\hello.txt");
        File tempFile=new File("C:\\Users\\wys03\\Desktop\\wys_nb\\Java\\test\\sy8\\src\\dierti\\temp.txt");  //temp.txt为临时文件
        try{
            //将hello.txt文件各行加上行号后写到temp.txt文件
            FileReader inOne = new FileReader(file);// 【代码1】创建指向文件file的文件字符输入流inOne。
            BufferedReader inTwo = new BufferedReader(inOne);// 【代码2】创建指向inOne的缓冲输入流inTwo。创建指向fileOne的字符输入流in
            FileWriter tofile = new FileWriter(tempFile);// 【代码3】创建指向文件tempFile的文件字符输出流tofile。
            BufferedWriter out = new BufferedWriter(tofile);//【代码4】 创建指向tofile的缓冲输出流out。
            String s=null;
            int i=0;
            s=inTwo.readLine();//【代码5】inTwo读取一行文本赋给s。
            while(s!=null){             //王玉升
                i++;
                out.write(i+". "+s);  //out流写入加上行号的字符串s
                out.newLine( );//【代码6】out写入一个换行符。
                s=inTwo.readLine();//【代码7】inTwo继续读取一行文本赋给s。
            }
            inOne.close();
            inTwo.close();
            out.flush();
            out.close();
            tofile.close();
            //将加上行号后的temp.txt文件内容写回到hello.txt文件(覆盖)
            inOne = new FileReader(tempFile);//【代码8】创建指向文件tempFile的文件字符输入流inOne
            inTwo = new BufferedReader(inOne);//【代码9】 创建指向inOne的缓冲输入流inTwo。
            tofile = new FileWriter(file);//【代码10】创建指向文件file的文件字符输出流tofile。
            out = new BufferedWriter(tofile);//【代码11】创建指向tofile的缓冲输出流out。
            while((s=inTwo.readLine())!=null) {//inTwo逐行读取一行文本赋给s。
                out.write(s);//【代码12】out流写入字符串s
                out.newLine();//【代码13】out写入一个换行符。
            }
            inOne.close();
            inTwo.close();
            out.flush();
            out.close();
            tofile.close();
            //将重写后的hello.txt文件内容显示到命令行窗口(已加上行号)
            inOne = new FileReader(file);//【代码14】创建指向文件file的文件字符输入流inOne。
            inTwo = new BufferedReader(inOne);//【代码15】创建指向inOne 的缓冲输入流inTwo。
            while((s=inTwo.readLine())!=null){  //【代码16】inTwo逐行读取一行文本赋给s，直到文件结束。
                System.out.println(s);
            }
            inOne.close();
            inTwo.close();
            tempFile.delete(); //删除temp.txt文件
        }
        catch(IOException e)
        {
            System.out.println(e);
        }
    }
}


