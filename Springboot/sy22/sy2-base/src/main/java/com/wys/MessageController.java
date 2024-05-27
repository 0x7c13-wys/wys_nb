package com.wys;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class MessageController {

    @RequestMapping("/")
    public String home(){
        return "YsWang";
    }


    @GetMapping("/echo")                            //支持get请求模式
    public String echo(String msg){                    //接受msg信息
        return "【ECHO】" + msg;                        //处理信息后返回
    }

}


