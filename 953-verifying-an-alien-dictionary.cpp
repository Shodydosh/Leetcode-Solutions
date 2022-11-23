class Solution {
public:

    bool compare(string &a, string &b, string &order){

        //itterate over i, i will go over the length of a, if a[i] and b[i]
        //are same we will keep on incermenting
        int i=0;

        //when will the while loop stops?
        while(i<a.size() && a[i]==b[i])
        i++;

        //if a stops and b doesn't(a is smaller than b)
        if(a.size()==i)
        return true;

        //if b stops (b is smaller than b)
        else if(b.size()==i)
        return false;

        //a and b dont stop, they stop at the point where character are
        //different, if in order a[i] is smaller than return true, else
        //false
        // return the index of char in the order string
        return(order.find(a[i])<order.find(b[i]));
    }
    bool isAlienSorted(vector<string>& words, string order) {

        //itterate over all the adjacent words and compare them as they are 
        //in correct order or not
        for(int i=0;i<words.size()-1;i++){
            if(!compare(words[i],words[i+1],order))
            return false;
        }
        return true;
    }
};
