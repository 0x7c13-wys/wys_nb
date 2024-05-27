import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.EnableAutoConfiguration;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;



@Controller
@EnableAutoConfiguration
public class sy2baseApplication {
    @RequestMapping("/")

    @ResponseBody
    public String home(){
        return "wys";
    }

    public static void main(String[] args) throws Exception{
        SpringApplication.run(sy2baseApplication.class, args);

    }







}
