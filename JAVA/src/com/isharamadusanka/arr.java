package com.isharamadusanka;

public class arr {
    public static void main(String[] args) {
        int sum = 0;
        int[] arr = {1,2,3,4,5};
        System.out.println(arr.length);

        for(int x : arr){ //get sum using foreach loop
            sum += x;
        }
        System.out.println(sum);
    }
}
