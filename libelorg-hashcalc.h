// Simple calculator to find profit of cryptocurrency mining as well approximate the earnings in fiat currencies
// In the future, I will update it to connect to the Internet and retrieve the values it uses
// Until then, this library is a very simple library, at most a calculator.
#include <iostream>
#include <stdlib.h>
#include <string>
// Thinger
using namespace std;
// Main function

    // Parameter 1; your hashrate
    // Parameter 2; the network hashrate
    // Parameter 3; the reward per block
    // Parameter 4; the blocks in the time period
    // Parameter 5; the coin that you mine with - see proper documentation for information on what that may be
    // The equation here is yourHashrate / netHashrate * rewardPerTimePeriod
    double calc(double yourHashrate, double netHashrate, double blockReward, double blockInTimePeriod, string coin){
        
        // This loop below is to set default values for the cryptocurrency Monero - it is run if you set the string coin to "monero" or "xmr"
        if(coin == "monero" || coin == "xmr") {
            if(blockInTimePeriod == 0) {
            // This loop here will set the amount of blocks in the time period to one day's worth if it isn't already set
            // This may be confusing to those who don't know this and also somehow don't set this value, but that is unlikely
                blockInTimePeriod = 720;
            }
            if(blockReward == 0) {
            // At the time of writing, the Monero block reward is 0.6 XMR per block
            // This loop sets the block reward for the equation to 0.6 if it was not already set - this is a good default
                blockReward = 0.6;
            }
            if(netHashrate == 0) {
                return 0;
            }
            if(yourHashrate == 0) {
                return 0;
            }
        }
        
        double rewardPerTimePeriod;
        rewardPerTimePeriod = blockReward * blockInTimePeriod;
        
        double yourFraction;
        yourFraction = yourHashrate / netHashrate * rewardPerTimePeriod;
        
        return yourFraction;
    }



