#include<iostream>
#include<string.h>
using namespace std;
int Element()
{
	char name[20];
	cout<<"Enter the element name:";
	gets(name);
	if(strcmp(name,"He")==0)
	{
		cout<<"\nElement Name:Helium";
		cout<<"\nValence:0";
		cout<<"\nGroup:18";
		cout<<"\nPeriod:1";
	}
	else
	if(strcmp(name,"Li")==0)
	{
		cout<<"\nElement Name:Lithium";
		cout<<"\nValence:+1";
		cout<<"\nGroup:4";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"Be")==0)
	{
		cout<<"\nElement Name:Berilium";
		cout<<"\n	Valence:+2";
		cout<<"\nGroup:2";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"B")==0)
	{
		cout<<"\nElement Name:Boron";
		cout<<"\n	Valence:-3, +3";
		cout<<"\nGroup:13";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"C")==0)
	{
		cout<<"\nElement Name:Carbon";
		cout<<"\n	Valence:(+2), +4";
		cout<<"\nGroup:14";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"N")==0)
	{
		cout<<"\n Name:Nitrogen";
		cout<<"\n	Valence:-3, -2, -1, (+1), +2, +3, +4, +5";
		cout<<"\nGroup:15";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"O")==0)
	{
		cout<<"\nElement Name:Oxygen";
		cout<<"	\nValence:-2";
		cout<<"\nGroup:16";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"F")==0)
	{
		cout<<"\nElement Name:Flourine";
		cout<<"\n	Valence:-1, (+1)";
		cout<<"\nGroup:17";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"Ne")==0)
	{
		cout<<"\nElement Name:Neon";
		cout<<"\n	Valence:0";
		cout<<"\nGroup:18";
		cout<<"\nPeriod:2";
	}
	else
	if(strcmp(name,"Na")==0)
	{
		cout<<"\nElement Name:Sodium";
		cout<<"\n	Valence:+1";
		cout<<"\nGroup:1";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"Mg")==0)
	{
		cout<<"\nElement Name:Magnesium";
		cout<<"\n	Valence:+2";
		cout<<"\nGroup:2";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"Al")==0)
	{
		cout<<"\nElement Name:Aluminium";
		cout<<"	\nValence:+3";
		cout<<"\nGroup:13";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"Si")==0)
	{
		cout<<"\nElement Name:Silicon";
		cout<<"\n	Valence:-4, (+2), +4";
		cout<<"\nGroup:14";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"P")==0)
	{
		cout<<"\nElement Name:Phosphorus";
		cout<<"	\nValence:-3, +1, +3, +5";
		cout<<"\nGroup:15";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"S")==0)
	{
		cout<<"\nElement Name:Sulphur";
		cout<<"\n	Valence:-2, +2, +4, +6";
		cout<<"\nGroup:16";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"Cl")==0)
	{
		cout<<"\nElement Name:Chlorine";
		cout<<"	\nValence:-1, +1, (+2), +3, (+4), +5, +7";
		cout<<"\nGroup:17";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"Ar")==0)
	{
		cout<<"\nElement Name:Argon";
		cout<<"\n	Valence:0";
		cout<<"\nGroup:18";
		cout<<"\nPeriod:3";
	}
	else
	if(strcmp(name,"K")==0)
	{
		cout<<"\nElement Name:";
		cout<<"\n	Valence:+1";
		cout<<"\nGroup:1";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Ca")==0)
	{
		cout<<"\nElement Name:Calcium";
		cout<<"\n	Valence:+2";
		cout<<"\nGroup:2";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Sc")==0)
	{
		cout<<"\nElement Name:Scandium";
		cout<<"\nValence:+3";
		cout<<"\nGroup:3";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Ti")==0)
	{
		cout<<"\nElement Name:Titanium";
		cout<<"	\nValence:+2, +3, +4";
		cout<<"\nGroup:4";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"V")==0)
	{
		cout<<"\nElement Name:Vanadium";
		cout<<"	\nValence:+2, +3, +4, +5";
		cout<<"\nGroup:5";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Cr")==0)
	{
		cout<<"\nElement Name:Chromium";
		cout<<"	\nValence:+2, +3, +6";
		cout<<"\nGroup:6";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Mn")==0)
	{
		cout<<"\nElement Name:Manganese";
		cout<<"\n	Valence:+2, (+3), +4, (+6), +7";
		cout<<"\nGroup:7";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Fe")==0)
	{
		cout<<"\nElement Name:Iron";
		cout<<"\n	Valence:+2, +3, (+4), (+6)";
		cout<<"\nGroup:8";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Co")==0)
	{
		cout<<"\nElement Name:Cobalt";
		cout<<"	\nValence:+2, +3, (+4)";
		cout<<"\nGroup:9";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Ni")==0)
	{
		cout<<"\nElement Name:Nickel";
		cout<<"	\nValence:(+1), +2, (+3), (+4)";
		cout<<"\nGroup:10";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Cu")==0)
	{
		cout<<"\nElement Name:Copper";
		cout<<"	\nValence:+1, +2, (+3)";
		cout<<"\nGroup:11";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Zn")==0)
	{
		cout<<"\nElement Name:Zinc";
		cout<<"\n	Valence:+2";
		cout<<"\nGroup:12";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Ga")==0)
	{
		cout<<"\nElement Name:Gallium";
		cout<<"	\nValence:(+2). +3";
		cout<<"\nGroup:13";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Ge")==0)
	{
		cout<<"\nElement Name:Germasnium";
		cout<<"	\nValence:-4, +2, +4";
		cout<<"\n\nGroup:14";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"As")==0)
	{
		cout<<"\nElement Name:Arsenic";
		cout<<"	\nValence:-3, (+2), +3, +5";
		cout<<"\nGroup:15";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Se")==0)
	{
		cout<<"\nElement Name:Selenium";
		cout<<"	\nValence:-2, (+2), +4, +6";
		cout<<"\nGroup:16";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Br")==0)
	{
		cout<<"\nElement Name:Bromine";
		cout<<"\n	Valence:-1, +1, (+3), (+4), +5";
		cout<<"\nGroup:17";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Kr")==0)
	{
		cout<<"\nElement Name:Krypton";
		cout<<"\n	Valence:0";
		cout<<"\nGroup:18";
		cout<<"\nPeriod:4";
	}
	else
	if(strcmp(name,"Rb")==0)
	{
		cout<<"\nElement Name:Rubidium";
		cout<<"\n	Valence:+1";
		cout<<"\nGroup:1";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Sr")==0)
	{
		cout<<"\nElement Name:Strontium";
		cout<<"	\nValence:+2";
		cout<<"\nGroup:2";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Y")==0)
	{
		cout<<"\nElement Name:Yttrium";
		cout<<"\n	Valence:+3";
		cout<<"\nGroup:3";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Zr")==0)
	{
		cout<<"\nElement Name:Zirconium";
		cout<<"	\nValence:(+2), (+3), +4";
		cout<<"\nGroup:4";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Nb")==0)
	{
		cout<<"\nElement Name:Niobium";
		cout<<"	\nValence:(+2), +3, (+4), +5";
		cout<<"\nGroup:5";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Mo")==0)
	{
		cout<<"\nElement Name:Molybdenum";
		cout<<"	\nValence:(+2), +3, (+4), (+5), +6";
		cout<<"\nGroup:6";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Tc")==0)
	{
		cout<<"\nElement Name:Technetium";
		cout<<"\n	Valence:+6";
		cout<<"\nGroup:7";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Ru")==0)
	{
		cout<<"\nElement Name:Ruthenium";
		cout<<"\n	Valence:(+2), +3, +4, (+6), (+7), +8";
		cout<<"\nGroup:8";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Rh")==0)
	{
		cout<<"\nElement Name:Rhodium";
		cout<<"	\nValence:(+2), (+3), +4, (+6)";
		cout<<"\nGroup:9";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Pd")==0)
	{
		cout<<"\nElement Name:Palladium";
		cout<<"	\nValence:+2, +4, (+6)";
		cout<<"\nGroup:10";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Ag")==0)
	{
		cout<<"\nElement Name:Silver";
		cout<<"\n	Valence:+1, (+2), (+3)";
		cout<<"\nGroup:11";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Cd")==0)
	{
		cout<<"\nElement Name:Cadmium";
		cout<<"\n	Valence:(+1), +2";
		cout<<"\nGroup:12";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"In")==0)
	{
		cout<<"\nElement Name:Indium";
		cout<<"	\nValence:(+1), (+2), +3";
		cout<<"\nGroup:13";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Sn")==0)
	{
		cout<<"\nElement Name:Tin";
		cout<<"	\nValence:+2, +4";
		cout<<"\nGroup:14";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Sb")==0)
	{
		cout<<"\n Name:Antimony";
		cout<<"	\nValence:-3, +3, (+4), +5";
		cout<<"\nGroup:15";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Te")==0)
	{
		cout<<"\nElement Name:Tellurium";
		cout<<"	\nValence:-2, (+2), +4, +6";
		cout<<"\nGroup:16";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"I")==0)
	{
		cout<<"\nElement Name:Iodine";
		cout<<"	\nValence:-1, +1, (+3), (+4), +5, +7";
		cout<<"\nGroup:17";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Xe")==0)
	{
		cout<<"\nElement Name:Xenon";
		cout<<"	\nValence:0";
		cout<<"\nGroup:18";
		cout<<"\nPeriod:5";
	}
	else
	if(strcmp(name,"Cs")==0)
	{
		cout<<"\nElement Name:Caesium";
		cout<<"\n	Valence:+1";
		cout<<"\nGroup:1";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Ba")==0)
	{
		cout<<"\nElement Name:Barium";
		cout<<"	\nValence:+2";
		cout<<"\nGroup:2";
		cout<<"\nPeriod:6";
	}
//////////////////////////////////////////
	else
	if(strcmp(name,"Ta")==0)
	{
		cout<<"\nElement Name:Tantalum";
		cout<<"	\nValence:(+3), (+4), +5";
	}
	else
	if(strcmp(name,"W")==0)
	{
		cout<<"\nElement Name:Tungsten";
		cout<<"	\nValence:(+2), (+3), (+4), (+5), +6";
		cout<<"\nGroup:6";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Re")==0)
	{
		cout<<"\nElement Name:Rhenium";
		cout<<"	\nValence:(-1), (+1), +2, (+3), +4, (+5), +6, +7";
		cout<<"\nGroup:7";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Os")==0)
	{
		cout<<"\nElement Name:Osmium";
		cout<<"	\nValence:(+2), +3, +4, +6, +8";
		cout<<"\nGroup:8";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Ir")==0)
	{
		cout<<"\nElement Name:Iridium";
		cout<<"	\nValence:(+1), (+2), +3, +4, +6";
		cout<<"\nGroup:9";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Pt")==0)
	{
		cout<<"\nElement Name:Platium";
		cout<<"	\nValence:(+1), +2, (+3), +4, +6";
		cout<<"\nGroup:10";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Au")==0)
	{
		cout<<"\nElement Name:Gold";
		cout<<"	\nValence:+1, (+2), +3";
		cout<<"\nGroup:11";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Hg")==0)
	{
		cout<<"\nElement Name:Mercury";
		cout<<"	\nValence:+1, +2";
		cout<<"\nGroup:12";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Tl")==0)
	{
		cout<<"\nElement Name:Thallium";
		cout<<"	\nValence:+1, (+2), +3";
		cout<<"\nGroup:13";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Pb")==0)
	{
		cout<<"\nElement Name:Lead";
		cout<<"	\nValence:+2, +4";
		cout<<"\nGroup:14";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Bi")==0)
	{
		cout<<"\nElement Name:Bismuth";
		cout<<"\nValence:(-3), (+2), +3, (+4), (+5)";
		cout<<"\nGroup:15";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Po")==0)
	{
		cout<<"\nElement Name:Polonium";
		cout<<"\nValence:(-2), +2, +4, (+6)";
		cout<<"\nGroup:16";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"At")==0)
	{
		cout<<"\nElement Name:Astatine";
		cout<<"\nValence:Not Define";
		cout<<"\nGroup:17";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Rn")==0)
	{
		cout<<"\nElement Name:Radon";
		cout<<"\nValence:0";
		cout<<"\nGroup:18";
		cout<<"\nPeriod:6";
	}
	else
	if(strcmp(name,"Fr")==0)
	{
		cout<<"\nElement Name:Francium";
		cout<<"\nValence:Not Define";
		cout<<"\nGroup:1";
		cout<<"\nPeriod:7";
	}
	else
	if(strcmp(name,"Ra")==0)
	{
		cout<<"\nElement Name:Radium";
		cout<<"\nValence:+2";
		cout<<"\nGroup:2";
		cout<<"\nPeriod:7";
	}
	else
	cout<<"\n\nSORRY!!!!\nNo Record For This Element\nWill Update soon.....";
}
