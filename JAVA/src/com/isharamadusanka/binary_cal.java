package com.isharamadusanka;
import java.util.Scanner;

class Converter{
    public static String toBinary(int y){
        String binary = "";
        if(y != 0) {
            while (y > 0) {
                binary = (y % 2) + binary;
                y /= 2;
            }
        }
        else {
            return "0";
        }
        return binary;
    }
}
public class binary_cal {
    public static void main(String[ ] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        System.out.print(Converter.toBinary(x));
    }
}
