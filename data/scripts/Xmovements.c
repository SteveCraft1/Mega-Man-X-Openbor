void main()
{
int Player = getlocalvar("player");
       void Self = getplayerproperty(Player, "entity");
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
       void HoldPAttack2 = playerkeys(Player,0,"attack2");
       
      if(Animation == openborconstant("ANI_JUMP") ){ //Moving in the Air
       if(NotPLeft || NotPRight){
         if(HoldPLeft || HoldPRight){
	   changeentityproperty(Self, "velocity", 0);
	   }
	   } else if(PLeft){
       changeentityproperty(Self, "direction", 0);
	     changeentityproperty(Self, "velocity", -1);
	     changeplayerproperty(Self, "playkeys", 0);
           } else if(PRight){
       changeentityproperty(Self, "direction", 1);     
	     changeentityproperty(Self, "velocity", 1);
	     changeplayerproperty(Self, "playkeys", 0);
	     }
	   }
     if(Animation == openborconstant("ANI_IDLE")){
     if(PAttack2 && Direction != 0){
        performattack(Self, openborconstant("ANI_FREESPECIAL"), 0);//Dash in ground
        changeentityproperty(Self, "velocity", 1.3);
      } else if(PAttack2 && Direction != 1){
        performattack(Self, openborconstant("ANI_FREESPECIAL"), 0);
        changeentityproperty(Self, "velocity", -1.3);
      }
   }

   if(Animation == openborconstant("ANI_FREESPECIAL")){// stop Dashing
     if(frame == 0 && NotPAttack2 || frame == 1 && NotPAttack2 || frame == 2 && HoldPAttack2){
       changeentityproperty(Self, "velocity", 0);
       updateframe(Self, 2);
     }
   }
   if(Animation == openborconstant("ANI_JUMP")){ //Dash in air
      if(PAttack2 && Direction != 0){
        performattack(Self, openborconstant("ANI_FREESPECIAL2"), 0);
        changeentityproperty(Self, "velocity", 1.3);
      } else if(PAttack2 && Direction != 1){
        performattack(Self, openborconstant("ANI_FREESPECIAL2"), 0);
        changeentityproperty(Self, "velocity", -1.3);
      }
}
}