#include<iostream>
#include<deque>
#include<vector>
using namespace std;

int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curr_gas=0,start=0;
        int total_gas=0,total_cost=0;
        for(int i=0;i<gas.size();i++){
            total_gas+=gas[i];
            total_cost+=cost[i];

            curr_gas+=(gas[i]-cost[i]);
            if(curr_gas < 0){
                start = i+1;
                curr_gas = 0;
            }
        }
        return total_gas<total_cost?-1 : start;
    }

    int main(){
        vector<int> gas={1,2,3,4,5};
        vector<int> cost={3,4,5,1,2};
        cout<<"starting gas station's index if you can travel around the circuit once in the clockwise direction : "<< canCompleteCircuit(gas,cost)<<"\n";
    }