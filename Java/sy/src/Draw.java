public class Draw {

    public static void main(String[] args){
        char A='A';
        char a='a';
        for(int i=0;i<26;i++){
            System.out.print((char)(A+i)+""+(char)(a+i)+" ");
            if((i+1)%10==0){System.out.println();}

        }
        System.out.println("我是王玉升1012，22软件工程1班");
    }
}

