package com.isharamadusanka;
import java.util.Scanner;
public class Reverse_string {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String text = scanner.nextLine();
        char[] arr = text.toCharArray();

        int i, len;
        len = arr.length;
        char[] arr2 = new char[len];
        int count = len -1;
        for(i = 0; i < len; i++){
            arr2[count] = arr[i];
            count--;

        }
        for(char x : arr2)
            System.out.print(x);
    }
}
