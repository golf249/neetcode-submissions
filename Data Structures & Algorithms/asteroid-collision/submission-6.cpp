class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> state;
        
        state.push_back(asteroids[0]);

        for (int i = 1; i < asteroids.size(); i++) {
            int asteroid = asteroids[i];

            while (!state.empty() & asteroid < 0 & state.back() > 0) {
                int diff = asteroid + state.back();

                if (diff < 0) {
                    state.pop_back();
                } else if (diff > 0) {
                    asteroid = 0;
                } else {
                    state.pop_back();
                    asteroid = 0;
                }
            }
            
            if (asteroid != 0) {
                state.push_back(asteroid);
            }
        }

        return state;
    }
};