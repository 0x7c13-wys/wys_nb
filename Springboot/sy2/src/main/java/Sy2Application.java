package main.java;


import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.ImportResource;


@ImportResource("classpath:spring-util.xml")
@SpringBootApplication
public class Sy2Application {

    public static void main(String[] args) {
        SpringApplication.run(Sy2Application.class, args);
    }

}
