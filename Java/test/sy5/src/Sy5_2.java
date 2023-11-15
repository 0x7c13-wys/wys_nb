public class Sy5_2 {
    public static void main(String args[]) {
        KindHello kindHello=new KindHello();
        kindHello.lookHello(new SpeakHello() {
            @Override
            public void speakHello() {
                System.out.println("wys,你好，吃饭了吗？");
            }
        });//【代码1】使用实现接口的匿名类对象，输出"中国人习惯问候语：你好,吃饭了吗? "
        kindHello.lookHello(new SpeakHello() {
            @Override
            public void speakHello() {
                System.out.println("wys,你好，天气不错");
            }
        });//【代码2】使用实现接口的匿名类对象，输出"英国人习惯问候语:你好,天气不错"
    }
}

