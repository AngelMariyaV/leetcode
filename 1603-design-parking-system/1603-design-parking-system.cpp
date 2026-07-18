class ParkingSystem {
public:
    int l;
    int m;
    int s;

    ParkingSystem(int big, int medium, int small) {
        l=big;
        m=medium;
        s=small;
    }
    
    bool addCar(int carType) {
        if (carType==1 && l>0){
            l--;
            return true;
        }else if (carType==2 && m>0){
            m--;
            return true;
        }else if (carType==3 && s>0){
            s--;
            return true;
        }
        return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna