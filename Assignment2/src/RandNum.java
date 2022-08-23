public class RandNum {
    int[][] array = new int[5][5];
    int maximum = 0, minimum = 0;

    public RandNum() {
        int i, k, rand;
        double random;


        for (i = 0; i < 5; i++) {
            for (k = 0; k < 5; k++) {
                random = Math.random() * 100;
                rand = (int) random + 1;
                array[i][k] = rand;
            }
        }

    }

    public void showArr() {

        int i, k;

        for (i = 0; i < 5; i++) {
            for (k = 0; k < 5; k++) {
                System.out.print(" " + array[i][k] + " ");
            }
            System.out.println();
        }

    }

    public double calculate() {
        int i, k, x;
        int[] store = {array[0][0], array[0][0]};
        double avg;
        int total = 0;


        for (i = 0; i < 5; i++) {
            for (k = 0; k < 5; k++) {

                x = array[i][k];

                //check the maximum value
                if (store[0] <= x) {
                    maximum = x;
                    store[0] = x;

                }

                //check the minimum value
                if (store[1] >= x) {
                    minimum = x;
                    store[1] = x;

                }

                //store the sum of all values in the array
                total += x;
            }
        }

        avg = total / 25.0;
        return avg;

    }

    public void showCal() {
        System.out.println("Maximum is " + maximum);
        System.out.println("Minimum is " + minimum);
        System.out.println("Average is " + calculate());
    }
}

