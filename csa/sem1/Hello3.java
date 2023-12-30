// Harsha Kotla
// S05: Basic Input and Output Activity
// Hello 3
// 12-25-23

import java.util.Scanner;

public class Hello3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("What is your name? ");
        String name = sc.nextLine();
        System.out.println("Hello " + name + ", how old are you?");
        int age = sc.nextInt();
        sc.close();
        
        System.out.println("You are " + age + " years old.");
    }
}