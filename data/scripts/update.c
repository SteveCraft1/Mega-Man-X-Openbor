void main()
{//X Lifebar

	void P1 = getplayerproperty(0, "entity");
	void P2 = getplayerproperty(1, "entity");
	void P3 = getplayerproperty(2, "entity");
	void P4 = getplayerproperty(3, "entity");
	void XBar = getglobalvar("XBar");
	void XHP = getglobalvar("XHP");
	void ZeroBar = getglobalvar("ZeroBar");
	void P1name = getentityproperty(P1, "defaultname");
	void P1Alias = getentityproperty(P1, "model");
	void P2name = getnentityproperty(P2, "defaultname");
	void P2Alias = getnentityproperty(P2, "model");

	if(openborvariant("in_level")==1){
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
			if(P1Health>=8){
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
			} else if(P1name == "Zero"){
			drawsprite(ZeroBar, 1, 30, 1499, 0);
				
       }    }
    }    
}
void oncreate()
{		
	void XBar; void XHP; void ZeroBar;

	XBar = loadsprite("data/sprites/MegaManXLifebar.png");
	XHP	=  loadsprite("data/sprites/MegaManXHP.png");
	ZeroBar = loadsprite("data/sprites/ZeroLifebar.png");

	setglobalvar("XBar", XBar);
	setglobalvar("XHP", XHP);
	setglobalvar("ZeroBar", ZeroBar);
}

void ondestroy(){
	void XBar = getglobalvar("XBar");
	void XHP = 	getglobalvar("XHP");
	void ZeroBar = getglobalvar("ZeroBar");

	free(XBar);
	free(XHP);
	free(ZeroBar);

	setglobalvar("XBar", NULL());
	setglobalvar("XHP", NULL());
	setglobalvar("ZeroBar", NULL());
}			
