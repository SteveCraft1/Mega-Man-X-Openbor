void main()
{// Temporary invincibility script
    void self = getlocalvar("self"); //Get calling entity.
    int Health = getentityproperty(self,"health");
    int eTime = openborvariant("elapsed_time");

    if(Health > 0){
      changeentityproperty(self, "invincible", 1);
      changeentityproperty(self, "invinctime", eTime + 116);
    }
}