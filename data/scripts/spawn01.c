void spawn01(void vName, float fX, float fY, float fZ)
{
//spawn01 (Generic spawner)
//Damon Vaughn Caskey
//07/06/2007
//
//Spawns entity next to caller.
//
//vName: Model name of entity to be spawned in.
//fX: X location adjustment.
//fY: Y location adjustment.
//fZ: Z location adjustment.

void self = getlocalvar("self"); //Get calling entity.
void vSpawn; //Spawn object.
int iDirection = getentityproperty(self, "direction");

clearspawnentry(); //Clear current spawn entry.
setspawnentry("name", vName); //Acquire spawn entity by name.

if (iDirection == 0){ //Is entity facing left?
fX = -fX; //Reverse X direction to match facing.
}

fX = fX + getentityproperty(self, "x"); //Get X location and add adjustment.
fY = fY + getentityproperty(self, "a"); //Get Y location and add adjustment.
fZ = fZ + getentityproperty(self, "z"); //Get Z location and add adjustment.

vSpawn = spawn(); //Spawn in entity.

changeentityproperty(vSpawn, "position", fX, fZ, fY); //Set spawn location.
changeentityproperty(vSpawn, "direction", iDirection); //Set direction.

return vSpawn; //Return spawn.
}