void main()
{
int Self = getlocalvar("self");
      void Player = getentityproperty(Self, "playerindex");
       int Direction = getentityproperty(Self, "direction");
       void Animation = getentityproperty(Self, "animationID");
       void frame = getentityproperty(Self, "animpos");
       void PLeft = playerkeys(Player,1,"moveleft");
       void PRight = playerkeys(Player,1,"moveright");
       void NotPLeft = playerkeys(Player,2,"moveleft");
       void NotPRight = playerkeys(Player,2,"moveright");
       void HoldPLeft = playerkeys(Player,0,"moveleft");
       void HoldPRight = playerkeys(Player,0,"moveright");
       void PSpecial = playerkeys(Player,1,"Special");
       void NotPSpecial = playerkeys(Player,2,"Special");
       void PAttack = playerkeys(Player,1,"attack");
       void PAttack2 = playerkeys(Player,1,"attack2");
       void PAttack3 = playerkeys(Player,1,"attack3");
       void PAttack4 = playerkeys(Player,1,"attack4");
       void NotPAttack = playerkeys(Player,2,"attack");
       void NotPAttack2 = playerkeys(Player,2,"attack2");
       void NotPAttack3 = playerkeys(Player,2,"attack3");
       void NotPAttack4 = playerkeys(Player,2,"attack4");
       void HoldPAttack = playerkeys(Player,0,"attack");
       void HoldPAttack2 = playerkeys(Player,0,"attack2");
       void HoldPAttack3 = playerkeys(Player,0,"attack3");
       void HoldPAttack4 = playerkeys(Player,0,"attack4");

       if(Animation == openborconstant("ANI_FREESPECIAL") ){
       if(frame == 2){
          int Charging2 = loadsample("data/SOUNDS/Chargeloop.wav");
          int charging_id = playsample(Charging2,0,120,120,100,0);
          setglobalvar("chargingloop", charging_id);
          updateframe(Self, 0);
          stopchannel(charging_id);
          setglobalvar("chargingloop", charging_id);
       }
       }        
       }