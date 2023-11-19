public class TestFinally {
    static void mathodA() {//方法mathodA抛出异常，并捕获异常
        try {
            System.out.println("\nmathodA 抛出一个异常");
            throw new RuntimeException();
        } catch (ArithmeticException  e) {
            System.out.println("捕获 mathodA 的异常 ");
            return;
        } finally {
            System.out.println("执行 mathodA 的 finally");
        }
    }

    static void mathodB() {//【代码1】方法mathodB的方法头，声明抛出Exception异常
        System.out.println("mathodB抛出一个异常");
        throw new RuntimeException();//抛出异常，未进行捕获
    }

    static void mathodC() {
        try {
            System.out.println("mathodC抛出一个异常");
            throw new RuntimeException();
        } catch (RuntimeException e) {//【代码2】捕获Exception异常
            System.out.println("捕获mathodC的异常 ");
            System.exit(0);
        } finally {
            System.out.println("执行 mathodC 的 finally");
        }
    }

    public static void main(String args[]) {
        mathodA();
        System.out.println("mathodA方法调用结束 ");
        //王玉升
        mathodC();
        mathodB();//【代码3】调用mathodB()方法,并对异常进行捕获处理
        System.out.println("mathodB方法调用结束 ");
        //王玉升
        mathodC();
        System.out.println("mathodC方法调用结束 ");
    }
}

