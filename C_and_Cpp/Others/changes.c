struct cus
{
    char id[10];
    struct visit
    {
        int pv;
        struct visit *nextv;
    }pagev;
    struct kart
    {
        int pk;
        struct visit *nextk;
    }pagek;
};
// in function like iphone

