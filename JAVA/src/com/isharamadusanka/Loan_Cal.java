package com.isharamadusanka;

import java.util.Scanner;
public class Loan_Cal {
    public static void main(String[] args) {
        final int PERCENT = 10;
        int i;
        int payment = 0;
        int remain = 0;

        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter Loan amount : ");
        int amount = scanner.nextInt();
        //your code goes here

        for(i = 0; i < 3 ; i++){
            payment = amount * PERCENT/100;
            amount -= payment;

        }
        System.out.print(amount);


    }
}
