/* d - the days to rent */
unsigned rental_car_cost(unsigned d)
{
    unsigned res = d * 40;
    if(d >= 7) return (res -= 50); 
    else if(d >= 3) return res-=20;
    return res;
}
