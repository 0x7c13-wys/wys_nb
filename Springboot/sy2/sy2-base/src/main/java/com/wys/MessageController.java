import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;


@Controller                                     //建立控制器
public class MessageController {

    @RequestMapping("/")
    @ResponseBody
    public String home(){
        return "YsWang";

    }

}
