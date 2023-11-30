import java.lang.String;
import java.util.Random;

public class Chou {









    private static int getRandomIndex(int max){
        Random Random = new Random();
        return Random.nextInt(max);                     //获得随机下标


    }

    public static void main(String[] args) {



        Audience A = new Audience("A");
        Audience B = new Audience("B");
        Audience C = new Audience("C");
        Audience D = new Audience("D");
        Audience E = new Audience("E");
        Audience F = new Audience("F");                 //王玉升
        Audience G = new Audience("G");                 //王玉升
        Audience H = new Audience("H");
        Audience I = new Audience("I");
        Audience J = new Audience("J");




        String name[] = {A.name, B.name, C.name, D.name, E.name, F.name, G.name, H.name , I.name, J.name};
        boolean[] Flags = new boolean[name.length];

        for(int i = 0; i < 3; i++){

            int chosenIndex = getRandomIndex(name.length);          //王玉升

            while (Flags[chosenIndex]){                             //如果这个人已经被选中
                chosenIndex = getRandomIndex(name.length);          //重新选一个
            }

            Flags[chosenIndex] = true;                  //王玉升

            String chosenAudience = name[chosenIndex];


            System.out.println("幸运观众是" + chosenAudience);









        }

    }


}

