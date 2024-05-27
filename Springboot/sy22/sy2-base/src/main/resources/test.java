import com.wys.sy2baseApplication;
import junit.framework.TestCase;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.test.context.SpringBootTest;
import org.springframework.test.context.junit4.SpringJUnit4ClassRunner;
import org.springframework.test.context.web.WebAppConfiguration;


@SpringBootTest(classes = sy2baseApplication.class)         //定义要进行测试的类
@RunWith(SpringJUnit4ClassRunner.class)                     //使用JUnit进行测试
@WebAppConfiguration                                        //web 应用配置
public class test {
    @Autowired
    private sy2baseApplication t1;                          //注入控制器对象

    @Test
    public void testHome(){                                 //使用JUnit测试
        TestCase.assertEquals(this.t1.home(), "wys");
    }

}
