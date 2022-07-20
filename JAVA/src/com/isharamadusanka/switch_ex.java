package com.isharamadusanka;

import java.util.Scanner;

public class switch_ex {
    public static void main(String[] args) {
        Scanner num = new Scanner(System.in);
        int day;

        while(true){
            System.out.println("Enter day of week (1 - 7) : ");
            day = num.nextInt();
            if(day >= 1 && day <=7 ){
                break;
            }
        }

        String dayType = switch(day){
            case 1, 2, 3, 4, 5 ->  "Working Day";
            case 6,7 -> "Weekend";
            default -> "Invalid day";
        };
        System.out.println(dayType);
    }
}
