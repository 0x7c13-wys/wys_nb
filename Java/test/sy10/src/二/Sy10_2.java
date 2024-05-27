package 二;

import java.util.Stack;

public class Sy10_2{
    public static void main(String[] args) {
        Stack<Integer> stack = new Stack<>();
        stack.push(3);
        stack.push(8);


//        王玉升
        while (stack.size() > 1) {
            int a = stack.pop();
            int b = stack.pop();
            int c = a + b * 2;
            stack.push(c);
        }
//        王玉升


        while (!stack.isEmpty()) {
            System.out.print(stack.pop() + " ");
        }
    }
}

