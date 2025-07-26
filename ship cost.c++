enum difficulty {
        NOVICE,
        EASY,
        HARD,
        UNBEATABLe
    };
difficulty mydifficulty = EASY;

enum shipcost
{
    FIGHTER_COST = 10,
    BOMBER_COST,
    CRUISER_COST = 20
};
shipcost myshipcost = BOMBER_COST;
cout << " To upgrade my ship to criuse I need " << (CRUISER_COST - myshipcost) << " upgrade coins." << endl;
