class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars;
        for(int i = 0; i < n ; i++){
            double val = (double)(target - position[i])/speed[i];
            cars.push_back({position[i], val});
        }
        sort(cars.begin(), cars.end(), greater<>());

        double current_max_time = 0;
        int fleets = 0;
        for(auto& car : cars){
            if(car.second > current_max_time){
                fleets++;
                current_max_time = car.second;
            }
        }
        return fleets;
    }
};
