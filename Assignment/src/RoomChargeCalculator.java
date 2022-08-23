
public class RoomChargeCalculator {
    final int Deluxdouble = 5000;
    final int StandardFamily = 3000;
    final int StandardSingle = 2000;

    final int balconyPrice = 500;
    final int parkingPrice = 200;
    final int tvPrice = 200;
    final int kitchenPrice = 1000;
    final int kitchenPrice2 = 500;
    final int wifiPrice = 100;
    final int gardenPrice = 200;
    final int acPrice = 500;

    //convert string answer to boolean
    public boolean confirmation(String value) {
        if(value.equals("yes"))
            return true;
        else
            return false;
    }
    //calculation for  delux double room
    public int  getChargeDeluxDouble(boolean balcony, boolean parking, boolean tv, boolean kitchen, boolean wifi) {
        int total = 0;

        if(balcony)
            total += balconyPrice;
        if(parking)
            total += parkingPrice;
        if(tv)
            total += tvPrice;
        if(kitchen)
            total += kitchenPrice;
        if(wifi)
            total += wifiPrice;

        return total;
    }
    //calculation method for standard family room
    public int  getChargeStandardFamily(boolean parking, boolean kitchen, boolean garden) {
        int total = 0;

        if(parking)
            total += parkingPrice;
        if(kitchen)
            total += kitchenPrice2;
        if(garden)
            total += gardenPrice;

        return total;
    }

    //calculation method for standard single room
    public int getChargeStandardSingle(boolean parking, boolean ac, boolean wifi) {
        int total = 0;

        if(parking)
            total += parkingPrice;
        if(ac)
            total += acPrice;
        if(wifi)
            total += wifiPrice;

        return total;
    }
}
