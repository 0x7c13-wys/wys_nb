package main.java.sy2.controller;

import jakarta.servlet.http.HttpServletRequest;
import jakarta.servlet.http.HttpServletResponse;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.MessageSource;
import org.springframework.web.bind.annotation.*;
import org.springframework.web.context.request.RequestContextHolder;
import org.springframework.web.context.request.ServletRequestAttributes;


import java.util.HashMap;
import java.util.Locale;
import java.util.Map;

@RestController
public class MessageController {

    @RequestMapping("/")
    public String home(){
        return "YsWang";
    }


    @GetMapping("/echo/{message}")                                   //支持get请求模式
    public String echo(@PathVariable("message") String msg){            //接受msg信息
        return "【ECHO】" + msg;                                         //处理信息后返回
    }

    @GetMapping("/object")
    public Object object(HttpServletRequest request, HttpServletResponse response){
        Map<String, String>map = new HashMap<String, String>();
        map.put("客户端IP地址", request.getRemoteAddr());
        map.put("客户端响应编码", response.getCharacterEncoding());
        map.put("SessionID", request.getSession().getId());
        map.put("项目真实路径", request.getServletContext().getRealPath("/"));
        return map;                                 //以Restful风格返回

    }

    public Object object(){
        HttpServletRequest request = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getRequest();
//        获取HttpServletRequest内置对象
        HttpServletResponse response = ((ServletRequestAttributes)RequestContextHolder.getRequestAttributes()).getResponse();
//        获取HttpServletResponse内置对象
        Map<String, String>map = new HashMap<String, String>();
        map.put("客户端IP地址", request.getRemoteAddr());
        map.put("客户端响应编码", response.getCharacterEncoding());
        map.put("SessionID", request.getSession().getId());
        map.put("项目真实路径", request.getServletContext().getRealPath("/"));
        return map;                                 //以Restful风格返回




    }



    @Autowired
    private MessageSource messageSource;
    @GetMapping("/")
    public Object message(){
        Map<String,String>map = new HashMap<String, String>();
        map.put("welcome.url", this.messageSource.getMessage("welcome.url", null, Locale.getDefault()));
        map.put("welcome.msg", this.messageSource.getMessage("welcome.msg", new Object[]{"王玉升"}, Locale.getDefault()));
        return map;
    }

    @Autowired
    private MessageUtil messageUtil;
    @GetMapping("/info")
    public Object info(){
        return this.messageUtil.getInfo();
    }





}


