package com.isharamadusanka;

import java.util.Scanner;

public class Time_converter {
    public static void main(String[] args) {
        final int sec_Min = 60;
        final int min_hour = 60;
        final int hour_day = 24;

        Scanner scanner = new Scanner(System.in);
        int days = scanner.nextInt();

        //your code goes here
        int seconds = sec_Min * min_hour * hour_day * days;
        System.out.print(seconds);

    }
}
