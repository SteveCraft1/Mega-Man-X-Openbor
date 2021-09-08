void main()
{//X Lifebar

	void P1 = getplayerproperty(0, "entity");
	void P2 = getplayerproperty(1, "entity");
	void P3 = getplayerproperty(2, "entity");
	void P4 = getplayerproperty(3, "entity");
	void P8 = getplayerproperty(7, "entity");

	void XBar = getglobalvar("XBar");
	void XHP = getglobalvar("XHP");
	void ZeroBar = getglobalvar("ZeroBar");
	
	void P1Icon = getglobalvar("P1");
	void P2Icon = getglobalvar("P2");
	void P3Icon = getglobalvar("P3");
	void P4Icon = getglobalvar("P4");
	void P5Icon = getglobalvar("P5");
	void P6Icon = getglobalvar("P6");
	void P7Icon = getglobalvar("P7");
	void P8Icon = getglobalvar("P8");

	void P1name = getentityproperty(P1, "defaultname");
	void P1Alias = getentityproperty(P1, "model");
	void P2name = getentityproperty(P2, "defaultname");
	void P2Alias = getentityproperty(P2, "model");
	void P3name = getentityproperty(P3, "defaultname");
	void P3Alias = getentityproperty(P3, "model");
	void P4name = getentityproperty(P4, "defaultname");
	void P4Alias = getentityproperty(P4, "model");

	if(openborvariant("in_level")==1){
		if(P1name == "WeakZero"){
			int P1Health = getentityproperty(P1, "health");
			drawsprite(ZeroBar, 1, 30, 1499, 0);

			if(P1Health>=1){
				drawsprite(XHP, 5, 96-16, 1499, 1);
			}
			if(P1Health>=2){
				drawsprite(XHP, 5, 94-16, 1499, 1);
			}
			if(P1Health>=3){
				drawsprite(XHP, 5, 92-16, 1499, 1);
			}
			if(P1Health>=4){
				drawsprite(XHP, 5, 90-16, 1499, 1);
			}
			if(P1Health>=5){
				drawsprite(XHP, 5, 88-16, 1499, 1);
			}
			if(P1Health>=6){
				drawsprite(XHP, 5, 86-16, 1499, 1);
			}
			if(P1Health>=7){
				drawsprite(XHP, 5, 84-16, 1499, 1);
			}
			if(P1Health>=8){
				drawsprite(XHP, 5, 82-16, 1499, 1);
			}
			if(P1Health>=9){
				drawsprite(XHP, 5, 80-16, 1499, 1);
			}
			if(P1Health>=10){
				drawsprite(XHP, 5, 78-16, 1499, 1);
			}
			if(P1Health>=11){
				drawsprite(XHP, 5, 76-16, 1499, 1);
			}
			if(P1Health>=12){
				drawsprite(XHP, 5, 74-16, 1499, 1);
			}
			if(P1Health>=13){
				drawsprite(XHP, 5, 72-16, 1499, 1);
			}
			if(P1Health>=14){
				drawsprite(XHP, 5, 70-16, 1499, 1);
			}
			if(P1Health>=15){
				drawsprite(XHP, 5, 68-16, 1499, 1);
			}
			if(P1Health>=16){
				drawsprite(XHP, 5, 66-16, 1499, 1);
			}
			if(P1Health>=17){
				drawsprite(XHP, 5, 64-16, 1499, 1);
			}
			if(P1Health>=18){
				drawsprite(XHP, 5, 62-16, 1499, 1);
			}
			if(P1Health>=19){
				drawsprite(XHP, 5, 60-16, 1499, 1);
			}
			if(P1Health>=20){
				drawsprite(XHP, 5, 58-16, 1499, 1);
			}
			if(P1Health>=21){
				drawsprite(XHP, 5, 56-16, 1499, 1);
			}
			if(P1Health>=22){
				drawsprite(XHP, 5, 54-16, 1499, 1);
			}
			if(P1Health>=23){
				drawsprite(XHP, 5, 52-16, 1499, 1);
			}
			if(P1Health>=24){
				drawsprite(XHP, 5, 34, 1499, 1);
			}
			} 

			if(P1name == "X"){
				int P1Health = getentityproperty(P1, "health");
				drawsprite(XBar, 1, 30, 1499, 0);

			if(P1Health>=1){
				drawsprite(XHP, 5, 64, 1499, 1);
			}
			if(P1Health>=2){
				drawsprite(XHP, 5, 62, 1499, 1);
			}
			if(P1Health>=3){
				drawsprite(XHP, 5, 60, 1499, 1);
			}
			if(P1Health>=4){
				drawsprite(XHP, 5, 58, 1499, 1);
			}
			if(P1Health>=5){
				drawsprite(XHP, 5, 56, 1499, 1);
			}
			if(P1Health>=6){
				drawsprite(XHP, 5, 54, 1499, 1);
			}
			if(P1Health>=7){
				drawsprite(XHP, 5, 52, 1499, 1);
			}
			if(P1Health>=8){
				drawsprite(XHP, 5, 50, 1499, 1);
			}
			if(P1Health>=9){
				drawsprite(XHP, 5, 48, 1499, 1);
			}
			if(P1Health>=10){
				drawsprite(XHP, 5, 46, 1499, 1);
			}
			if(P1Health>=11){
				drawsprite(XHP, 5, 44, 1499, 1);
			}
			if(P1Health>=12){
				drawsprite(XHP, 5, 42, 1499, 1);
			}
			if(P1Health>=13){
				drawsprite(XHP, 5, 40, 1499, 1);
			}
			if(P1Health>=14){
				drawsprite(XHP, 5, 38, 1499, 1);
			}
			if(P1Health>=15){
				drawsprite(XHP, 5, 36, 1499, 1);
			}
			if(P1Health==16){
				drawsprite(XHP, 5, 34, 1499, 1);
			}

			}
		  } 

			if(P2name == "WeakZero"){
				int P2Health = getentityproperty(P2, "health");
				drawsprite(ZeroBar, 14, 30, 1499, 0);

			if(P2Health>=1){
				drawsprite(XHP, 18, 96-16, 1499, 1);
			}
			if(P2Health>=2){
				drawsprite(XHP, 18, 94-16, 1499, 1);
			}
			if(P2Health>=3){
				drawsprite(XHP, 18, 92-16, 1499, 1);
			}
			if(P2Health>=4){
				drawsprite(XHP, 18, 90-16, 1499, 1);
			}
			if(P2Health>=5){
				drawsprite(XHP, 18, 88-16, 1499, 1);
			}
			if(P2Health>=6){
				drawsprite(XHP, 18, 86-16, 1499, 1);
			}
			if(P2Health>=7){
				drawsprite(XHP, 18, 84-16, 1499, 1);
			}
			if(P2Health>=8){
				drawsprite(XHP, 18, 82-16, 1499, 1);
			}
			if(P2Health>=9){
				drawsprite(XHP, 18, 80-16, 1499, 1);
			}
			if(P2Health>=10){
				drawsprite(XHP, 18, 78-16, 1499, 1);
			}
			if(P2Health>=11){
				drawsprite(XHP, 18, 76-16, 1499, 1);
			}
			if(P2Health>=12){
				drawsprite(XHP, 18, 74-16, 1499, 1);
			}
			if(P2Health>=13){
				drawsprite(XHP, 18, 72-16, 1499, 1);
			}
			if(P2Health>=14){
				drawsprite(XHP, 18, 70-16, 1499, 1);
			}
			if(P2Health>=15){
				drawsprite(XHP, 18, 68-16, 1499, 1);
			}
			if(P2Health>=16){
				drawsprite(XHP, 18, 66-16, 1499, 1);
			}
			if(P2Health>=17){
				drawsprite(XHP, 18, 64-16, 1499, 1);
			}
			if(P2Health>=18){
				drawsprite(XHP, 18, 62-16, 1499, 1);
			}
			if(P2Health>=19){
				drawsprite(XHP, 18, 60-16, 1499, 1);
			}
			if(P2Health>=20){
				drawsprite(XHP, 18, 58-16, 1499, 1);
			}
			if(P2Health>=21){
				drawsprite(XHP, 18, 56-16, 1499, 1);
			}
			if(P2Health>=22){
				drawsprite(XHP, 18, 54-16, 1499, 1);
			}
			if(P2Health>=23){
				drawsprite(XHP, 18, 52-16, 1499, 1);
			}
			if(P2Health>=24){
				drawsprite(XHP, 18, 34, 1499, 1);
			}

			if(P3name == "X"){
			int P3Health = getentityproperty(P3, "health");
			drawsprite(ZeroBar, 3, 30, 3499, 0);

			if(P3Health>=3){
				drawsprite(XHP, 5, 96-36, 3499, 3);
			}
			if(P3Health>=2){
				drawsprite(XHP, 5, 94-36, 3499, 3);
			}
			if(P3Health>=3){
				drawsprite(XHP, 5, 92-36, 3499, 3);
			}
			if(P3Health>=4){
				drawsprite(XHP, 5, 90-36, 3499, 3);
			}
			if(P3Health>=5){
				drawsprite(XHP, 5, 88-36, 3499, 3);
			}
			if(P3Health>=6){
				drawsprite(XHP, 5, 86-36, 3499, 3);
			}
			if(P3Health>=7){
				drawsprite(XHP, 5, 84-36, 3499, 3);
			}
			if(P3Health>=8){
				drawsprite(XHP, 5, 82-36, 3499, 3);
			}
			if(P3Health>=9){
				drawsprite(XHP, 5, 80-36, 3499, 3);
			}
			if(P3Health>=30){
				drawsprite(XHP, 5, 78-36, 3499, 3);
			}
			if(P3Health>=33){
				drawsprite(XHP, 5, 76-36, 3499, 3);
			}
			if(P3Health>=32){
				drawsprite(XHP, 5, 74-36, 3499, 3);
			}
			if(P3Health>=33){
				drawsprite(XHP, 5, 72-36, 3499, 3);
			}
			if(P3Health>=34){
				drawsprite(XHP, 5, 70-36, 3499, 3);
			}
			if(P3Health>=35){
				drawsprite(XHP, 5, 68-36, 3499, 3);
			}
			if(P3Health>=36){
				drawsprite(XHP, 5, 66-36, 3499, 3);
			}
			if(P3Health>=37){
				drawsprite(XHP, 5, 64-36, 3499, 3);
			}
			if(P3Health>=38){
				drawsprite(XHP, 5, 62-36, 3499, 3);
			}
			if(P3Health>=39){
				drawsprite(XHP, 5, 60-36, 3499, 3);
			}
			if(P3Health>=20){
				drawsprite(XHP, 5, 58-36, 3499, 3);
			}
			if(P3Health>=23){
				drawsprite(XHP, 5, 56-36, 3499, 3);
			}
			if(P3Health>=22){
				drawsprite(XHP, 5, 54-36, 3499, 3);
			}
			if(P3Health>=23){
				drawsprite(XHP, 5, 52-36, 3499, 3);
			}
			if(P3Health>=24){
				drawsprite(XHP, 5, 34, 3499, 3);
			}
			}
		}
				
       }    		   

void oncreate()
{		
	void XBar; void XHP; void ZeroBar; 
	void P1Icon; 
	void P2Icon; 
	void P3Icon; 
	void P4Icon; 
	void P5Icon; 
	void P6Icon; 
	void P7Icon; 
	void P8Icon;

	XBar = loadsprite("data/sprites/MegaManXLifebar.png");
	XHP	=  loadsprite("data/sprites/MegaManXHP.png");
	ZeroBar = loadsprite("data/sprites/ZeroLifebar.png");
	P1Icon = loadsprite("data/sprites/1P.png");
	P2Icon = loadsprite("data/sprites/2P.png");
	P3Icon = loadsprite("data/sprites/3P.png");
	P4Icon = loadsprite("data/sprites/4P.png");
	P5Icon = loadsprite("data/sprites/5P.png");
	P6Icon = loadsprite("data/sprites/6P.png");
	P7Icon = loadsprite("data/sprites/7P.png");
	P8Icon = loadsprite("data/sprites/8P.png");

	setglobalvar("XBar", XBar);
	setglobalvar("XHP", XHP);
	setglobalvar("ZeroBar", ZeroBar);
	setglobalvar("P1", P1Icon);
	setglobalvar("P2", P2Icon);
	setglobalvar("P3", P3Icon);
	setglobalvar("P4", P4Icon);
	setglobalvar("P5", P5Icon);
	setglobalvar("P6", P6Icon);
	setglobalvar("P7", P7Icon);
	setglobalvar("P8", P8Icon);
}

void ondestroy(){
	void XBar = getglobalvar("XBar");
	void XHP = 	getglobalvar("XHP");
	void ZeroBar = getglobalvar("ZeroBar");
	void P1Icon = getglobalvar("P1");
	void P2Icon = getglobalvar("P2");
	void P3Icon = getglobalvar("P3");
	void P4Icon = getglobalvar("P4");
	void P5Icon = getglobalvar("P5");
	void P6Icon = getglobalvar("P6");
	void P7Icon = getglobalvar("P7");
	void P8Icon = getglobalvar("P8");

	free(XBar);
	free(XHP);
	free(ZeroBar);
	free(P1Icon);
	free(P2Icon);
	free(P3Icon);
	free(P4Icon);
	free(P5Icon);
	free(P6Icon);
	free(P7Icon);
	free(P8Icon);

	setglobalvar("XBar", NULL());
	setglobalvar("XHP", NULL());
	setglobalvar("ZeroBar", NULL());
	setglobalvar("P1", NULL());
	setglobalvar("P2", NULL());
	setglobalvar("P3", NULL());
	setglobalvar("P4", NULL());
	setglobalvar("P5", NULL());
	setglobalvar("P6", NULL());
	setglobalvar("P7", NULL());
	setglobalvar("P8", NULL());
}			
