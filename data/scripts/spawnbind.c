#import "data/scripts/spawn01.c"
void spawnbind(void Name, float dx, float dy, float dz, int iDir,int iBind)
{ // Spawn and bind other entity
   void self = getlocalvar("self");
   void Spawn;

   Spawn = spawn01(Name, dx, dy, 0);
   bindentity(Spawn, self, dx, dz, dy, iDir, iBind);
}