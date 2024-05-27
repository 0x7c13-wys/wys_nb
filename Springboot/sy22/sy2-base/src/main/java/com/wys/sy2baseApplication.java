package com.wys;


import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;



@Controller
public class sy2baseApplication {
    @RequestMapping("/")

    @ResponseBody
    public String home(){
        return "wys";
    }



}
