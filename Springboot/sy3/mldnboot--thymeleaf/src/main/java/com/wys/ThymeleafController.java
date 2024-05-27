package com.wys;

import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class ThymeleafController {
    @GetMapping("/view")
    public String view(String mid, Model model){
        model.addAttribute("url", "www.wys.com");
        model.addAttribute("mid", mid);            //request属性传递包装
        return "message_show";
    }
}
