package disanti;

import java.io.*;
public class RandomReadWrite{
    public static void main(String args[]){
        RandomAccessFile fi=null;
        long data[]={11,12,13,14,15,16,17,18,19,20};
        try{
            fi = new RandomAccessFile("long.dat", "rw");//【代码1】创建指向文件long.dat的可读写的随机流fi;
            for(int i=0;i<data.length;i++) {
                  fi.writeLong( data[i]);//【代码2】随机流fi逐个写入数组中的long型数据;
            }
            fi.seek(0);//【代码3】随机流fi将读写位置重新定位到文件开头;
            for(long i=0;i<data.length;i++) {
                //以下【代码4】代码块实现将long型数据逐个读出，并输出其中奇数;   //王玉升
                if( ( fi.readLong() ) % 2 != 0 ){
                    System.out.println(fi.readLong());
                }
            }
            fi.close();
        }
        catch(IOException e){}
    }
}

