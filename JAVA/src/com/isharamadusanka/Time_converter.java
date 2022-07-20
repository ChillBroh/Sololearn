package com.isharamadusanka;

import java.util.Scanner;

public class Time_converter {
    public static void main(String[] args) {
        final int SEC_MIN = 60;
        final int MIN_HOUR = 60;
        final int HOUR_DAY = 24;

        Scanner scanner = new Scanner(System.in);
        int days = scanner.nextInt();

        //your code goes here
        int seconds = SEC_MIN * MIN_HOUR * HOUR_DAY * days;
        System.out.print(seconds);

    }
}
