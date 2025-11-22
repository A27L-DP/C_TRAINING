#include<stdio.h>
enum months
{
    jan=1,feb,mar,apr,may,jun,jul,aug,sept,oct,nov,dec
};
void main()
{
    enum months m;
    m=sept;
    char*season;
    switch(m)
    {
        case dec:case jan:case feb:
        season="winter";
        break;
        case mar:case apr:case may:
        season="summer";
        break;
        case jun:case jul:case aug:
        season="monsoon";
        break;
        case sept:case oct:case nov:
        season="spring";
        break;
    }
    printf("%s",season);
}