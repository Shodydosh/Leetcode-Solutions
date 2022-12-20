class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // to stores available keys
        stack<int> keys;
        int roomsVisited = 0;
        vector<int> entered(rooms.size(), 0);

        // start from room 0 so we got all the keys from room 0
        for(int i=0; i<rooms[0].size(); i++)
            keys.push(rooms[0][i]);
            
        // also mark the room[0] as entered
        entered[0] = 1;
        
        if(keys.empty()) return false;
        while(!keys.empty()){
            // take out the top key of the keys stack
            int tmp = keys.top();
            keys.pop();

            // if the key was for a room that wasn't visited
            if(entered[tmp] == 0){
                roomsVisited++;

                // mark that room as visited
                entered[tmp] = 1;

                // push all the keys in that room into keys stack
                for(int i=0; i<rooms[tmp].size(); i++){
                    keys.push(rooms[tmp][i]);
                }
            }
        }

        // because we skip the room 0 so if we unlock rooms.size()-1 return true
        if(roomsVisited == rooms.size()-1) return true;
        else return false;
    }
};
