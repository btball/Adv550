#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p230(void)
#else
int p230()
#endif
{
int done=0;
   if ((value[466]==0) ||
   value[465]>2) {
   set('V',457,'c',9,NULL,NULL);
   } else {
   set('V',457,'c',0,NULL,NULL);
   }
   set('V',458,'c',9,NULL,NULL);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if (bitest(evar(450),2)) {
   if (((location[value[450]]==94)) ||
   value[465]>2) {
   value[457] += 15;
   } else {
   if (bitest(evar(450),1)) {
   value[457] += 2;
   }}
   value[458] += 15;
   }}
   if ((location[78]==187)) {
   value[457] += 1;
   }
   value[458] += 1;
   if ((bitest(102,1)) ||
   bitest(118,1)) {
   value[457] += 20;
   if (bitest(278,1)) {
   value[457] += 10;
   }
   if (bitest(331,1)) {
   value[457] += 10;
   }
   if (bitest(208,1)) {
   value[457] += 10;
   }}
   value[458] += 50;
   set('V',450,'v',465,NULL,NULL);
   value[450] *= 20;
   value[457] += value[450];
   value[458] += 100;
   set('V',453,'v',455,NULL,NULL);
   value[453] *= 10;
   value[457] -= value[453];
   value[457] -= value[456];
   if (value[457]<0) {
   set('V',457,'c',0,NULL,NULL);
   }
return done;
}
#ifdef __STDC__
int p205(void)
#else
int p205()
#endif
{
int done=0;
   p230();
   say(13,728,457);
   say(13,729,458);
   say(13,730,461);
   if (value[457]<20) {
   value[450]=737;*bitword(450)=-1;
   value[457] -= 20;
   } else {
   if (value[457]<130) {
   value[450]=738;*bitword(450)=-1;
   value[457] -= 130;
   } else {
   if (value[457]<240) {
   value[450]=739;*bitword(450)=-1;
   value[457] -= 240;
   } else {
   if (value[457]<350) {
   value[450]=740;*bitword(450)=-1;
   value[457] -= 350;
   } else {
   if (value[457]<470) {
   value[450]=741;*bitword(450)=-1;
   value[457] -= 470;
   } else {
   if (value[457]<510) {
   value[450]=742;*bitword(450)=-1;
   value[457] -= 510;
   } else {
   if (value[457]<530) {
   value[450]=743;*bitword(450)=-1;
   value[457] -= 530;
   } else {
   if (value[457]<550) {
   value[450]=744;*bitword(450)=-1;
   value[457] -= 550;
   } else {
   value[450]=745;*bitword(450)=-1;
   value[457]=0;*bitword(457)=-1;
   }}}}}}}}
   say(2,450,0);
   say(0,488,0);
   value[457] *= -1;
   if (value[457]>0) {
   if (value[457]==1) {
   say(0,746,0);
   } else {
   say(13,747,457);
   }}
   say(0,488,0);
   finita();
return done;
}
#ifdef __STDC__
int p435(void)
#else
int p435()
#endif
{
int done=0;
   if (value[13]<8) {
   value[13] = irand(8);
   }
   value[14] = irand(8);
   if ((isnear(69,-1,-1)) &&
   value[69]==1) {
   apport(14,333);
   } else {
   apport(14,211);
   if (((value[HERE]==211)) &&
   !(bitest(evar(448),0))) {
   say(0,14,0);
   }}
return done;
}
#ifdef __STDC__
int p125(void)
#else
int p125()
#endif
{
int done=0;
   if (value[483]==0) {
   set('V',466,'c',0,NULL,NULL);
   say(0,488,0);
   bitmod('c',evar(460),3);
   bitmod('c',evar(460),1);
   set('E',16,'c',0,NULL,NULL);
   apport(16,333);
   apport(90,333);
   if (value[24]==1) {
   set('E',24,'c',0,NULL,NULL);
   } else {
   if (value[24]==3) {
   set('E',24,'c',2,NULL,NULL);
   }}
   apport(13,210);
   set('E',13,'c',8,NULL,NULL);
   value[455] += 1;
   if (value[465]>1) {
   if (value[465]==2) {
   say(0,635,0);
   } else {
   value[455] -= 1;
   }
   p205();
   }
   value[450]=583;*bitword(450)=-1;
   value[450] += value[455];
   value[450] += value[455];
   p461(*bitword(450),value[450],-1,11,0,0);
   }
   set('V',483,'c',0,NULL,NULL);
   if (value[484]==1) {
   value[450] += 1;
   say(2,450,0);
   say(0,488,0);
   value[451]=592;*bitword(451)=-1;
   if (value[450]<value[451]) {
   if (have(52,-1,-1)) {
   apport(52,333);
   apport(53,INHAND);
   }
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if (have(value[450],-1,-1)) {
   apport(value[450],HERE);
   }}
   apport(82,333);
   apport(83,333);
   set('V',454,'c',0,NULL,NULL);
   set('E',69,'c',0,NULL,NULL);
   apport(13,210);
   set('E',13,'c',8,NULL,NULL);
   p435();
   move(94,-1);
   set('V',445,'c',0,NULL,NULL);
   apport(69,92);
   if (value[449]==0) {
   if ((bitest(69,10)) ||
   !(bitest(278,1))) {
   value[450]=location[38];*bitword(450)=-1;
   if ((value[38]==1) ||
   !(bitest(evar(450),4))) {
   apport(69,334);
   }}}
   apport(91,333);
   set('E',91,'c',0,NULL,NULL);
   bitmod('c',18,10);
   longjmp(loop_back,1);
   } else {
   p205();
   }
   } else {
   p205();
   }
   finita();
return done;
}
#ifdef __STDC__
int p223(void)
#else
int p223()
#endif
{
int done=0;
   if (!isnear(71,-1,-1)) return 0;
   if (have(71,-1,-1)) {
   say(0,522,0);
   longjmp(loop_back,1);
   }
   if (value[71]==1) {
   apport(70,INHAND);
   apport(71,INHAND);
   say(2,467,0);
   } else {
   if (have(70,-1,-1)) {
   if (have(72,-1,-1)) {
   say(0,524,0);
   } else {
   bitmod('c',104,5);
   apport(71,INHAND);
   set('E',71,'c',1,NULL,NULL);
   say(2,467,0);
   }
   } else {
   say(0,525,0);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p225(void)
#else
int p225()
#endif
{
int done=0;
   if (!isnear(70,-1,-1)) return 0;
   if (have(70,-1,-1)) {
   say(0,522,0);
   longjmp(loop_back,1);
   }
   apport(70,INHAND);
   if (isnear(71,-1,-1)) {
   if (value[71]==1) {
   apport(71,INHAND);
   }}
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p227(void)
#else
int p227()
#endif
{
int done=0;
   if (bitest(85,1)) {
   say(0,619,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p160(void)
#else
int p160()
#endif
{
int done=0;
   if (!have(71,-1,-1)) return 0;
   apport(71,HERE);
   set('E',71,'c',0,NULL,NULL);
   if (isnear(6,-1,-1)) {
   say(0,528,0);
   apport(6,333);
   bitmod('c',110,5);
   longjmp(loop_back,1);
   } else {
   if (isnear(19,-1,-1)) {
   if (value[19]==0) {
   apport(71,333);
   say(0,655,0);
   longjmp(loop_back,1);
   }
   } else {
   if (isnear(21,-1,-1)) {
   say(0,656,0);
   longjmp(loop_back,1);
   } else {
   if (isnear(23,-1,-1)) {
   say(0,657,0);
   apport(71,333);
   longjmp(loop_back,1);
   } else {
   if (isnear(37,-1,-1)) {
   if (value[37]==0) {
   say(0,658,0);
   apport(71,333);
   } else {
   say(0,659,0);
   }
   longjmp(loop_back,1);
   } else {
   if ((isnear(24,-1,-1)) &&
   value[24]<2) {
   say(0,660,0);
   apport(71,333);
   p125();
   } else {
   if (isnear(91,-1,-1)) {
   say(12,661,91);
   apport(71,333);
   longjmp(loop_back,1);
   }}}}}}}
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p162(void)
#else
int p162()
#endif
{
int done=0;
   if (!have(70,-1,-1)) return 0;
   apport(70,HERE);
   if (have(71,-1,-1)) {
   apport(71,HERE);
   }
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p164(void)
#else
int p164()
#endif
{
int done=0;
   if (!have(52,-1,-1)) return 0;
   apport(52,HERE);
   if ((value[HERE]==175)) {
   say(2,467,0);
   } else {
   if ((have(75,-1,-1)) ||
   !isnear(75,-1,-1)) {
   set('E',52,'c',2,NULL,NULL);
   say(0,52,0);
   apport(52,333);
   apport(53,value[444]);
   } else {
   set('E',52,'c',1,NULL,NULL);
   say(0,52,0);
   set('E',52,'c',0,NULL,NULL);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p163(void)
#else
int p163()
#endif
{
int done=0;
   if (!have(value[447],-1,-1)) return 0;
   apport(value[447],333);
   set('E',81,'c',1,NULL,NULL);
   if ((isnear(91,-1,-1)) &&
   KEY(392)) {
   if (value[91]==1) {
   say(12,757,447);
   } else {
   say(12,758,447);
   }
   bitmod('s',91,11);
   } else {
   say(0,580,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p161(void)
#else
int p161()
#endif
{
int done=0;
   if (!have(81,-1,-1)) return 0;
   apport(81,HERE);
   apport(83,333);
   apport(82,333);
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p224(void)
#else
int p224()
#endif
{
int done=0;
   if (!isnear(81,-1,-1)) return 0;
   if (have(81,-1,-1)) {
   say(0,522,0);
   longjmp(loop_back,1);
   }
   if (value[454]<value[470]) {
   apport(81,INHAND);
   if (value[81]==0) {
   apport(82,INHAND);
   } else {
   if (value[81]==2) {
   apport(83,INHAND);
   }}
   say(2,467,0);
   } else {
   say(0,595,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p228(void)
#else
int p228()
#endif
{
int done=0;
   if (value[HERE]!=113) return 0;
   if (have(81,-1,-1)) {
   if (value[81]==1) {
   set('E',81,'c',2,NULL,NULL);
   apport(83,INHAND);
   say(0,611,0);
   } else {
   say(0,608,0);
   }
   } else {
   say(0,607,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p232(void)
#else
int p232()
#endif
{
int done=0;
   if (!(bitest(evar(444),6))) {
   return 0;
   }
   if (have(81,-1,-1)) {
   if (value[81]==1) {
   set('E',81,'c',0,NULL,NULL);
   apport(82,INHAND);
   say(0,610,0);
   } else {
   say(0,608,0);
   }
   } else {
   say(0,607,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p316(void)
#else
int p316()
#endif
{
int done=0;
   say(0,664,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p306(void)
#else
int p306()
#endif
{
int done=0;
   if (value[37]==0) {
   say(0,672,0);
   } else {
   say(0,673,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p315(void)
#else
int p315()
#endif
{
int done=0;
   say(0,547,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p311(void)
#else
int p311()
#endif
{
int done=0;
   if (value[19]>0) {
   say(0,674,0);
   longjmp(loop_back,1);
   }
   if (value[483]==0) {
   special(23, &value[0]);
   p461(-1,551,-1,7,0,1);
   } else {
   set('V',483,'c',0,NULL,NULL);
   special(24, &value[0]);
   }
   if (value[484]==1) {
   set('E',19,'c',1,NULL,NULL);
   say(0,19,0);
   set('E',19,'c',2,NULL,NULL);
   apport(59,202);
   apport(87,202);
   bitmod('c',19,3);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if (isnear(value[450],-1,-1)) {
   if (!(have(value[450],-1,-1))) {
   apport(value[450],202);
   }}}
   move(202,-1);
   } else {
   say(12,914,446);
   say(12,915,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p307(void)
#else
int p307()
#endif
{
int done=0;
   if (value[465]<3) {
   apport(71,333);
   say(0,546,0);
   } else {
   say(0,637,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p308(void)
#else
int p308()
#endif
{
int done=0;
   say(0,651,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p312(void)
#else
int p312()
#endif
{
int done=0;
   if (value[483]==0) {
   p461(-1,551,-1,8,0,1);
   } else {
   special(24, &value[0]);
   set('V',483,'c',0,NULL,NULL);
   }
   if (value[484]==1) {
   set('V',450,'v',470,NULL,NULL);
   value[450] -= value[454];
   value[450] += 2;
   value[450] *= 10;
   if (irand(100)<value[450]) {
   say(0,548,0);
   value[91] -= 1;
   if (value[91]==0) {
   apport(91,333);
   }
   value[463] -= 1;
   } else {
   if (irand(100)<value[450]) {
   say(0,549,0);
   } else {
   say(0,550,0);
   p125();
   }}
   } else {
   say(12,914,446);
   say(12,915,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p314(void)
#else
int p314()
#endif
{
int done=0;
   if (value[483]==0) {
   p461(-1,551,-1,9,0,1);
   } else {
   special(24, &value[0]);
   set('V',483,'c',0,NULL,NULL);
   }
   if (value[484]==1) {
   if (irand(100)<50) {
   say(0,814,0);
   } else {
   say(0,815,0);
   p125();
   }
   } else {
   say(12,914,446);
   say(12,915,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p309(void)
#else
int p309()
#endif
{
int done=0;
   say(0,834,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p310(void)
#else
int p310()
#endif
{
int done=0;
   say(0,845,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p313(void)
#else
int p313()
#endif
{
int done=0;
   say(0,851,0);
   p125();
return done;
}
#ifdef __STDC__
int p305(void)
#else
int p305()
#endif
{
int done=0;
   if (value[24]<2) {
   say(0,841,0);
   p125();
   } else {
   say(0,674,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p245(void)
#else
int p245()
#endif
{
int done=0;
   if (isnear(27,-1,-1)) {
   say(0,860,0);
   } else {
   say(0,861,0);
   apport(27,value[444]);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p222(void)
#else
int p222()
#endif
{
int done=0;
   if (!isnear(37,-1,-1)) return 0;
   if (have(37,-1,-1)) {
   say(0,641,0);
   } else {
   if ((value[HERE]==254)) {
   if (value[37]==2) {
   say(2,467,0);
   apport(37,INHAND);
   } else {
   say(0,676,0);
   }
   } else {
   say(2,467,0);
   apport(37,INHAND);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p159(void)
#else
int p159()
#endif
{
int done=0;
   if (!have(37,-1,-1)) return 0;
   apport(37,HERE);
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p215(void)
#else
int p215()
#endif
{
int done=0;
   if (!isnear(26,-1,-1)) return 0;
   say(0,850,0);
   apport(26,333);
   bitmod('s',26,10);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p226(void)
#else
int p226()
#endif
{
int done=0;
   if (value[HERE]!=254) return 0;
   if (!isnear(62,-1,-1)) return 0;
   if (value[62]==0) {
   return 0;
   } else {
   say(0,677,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p231(void)
#else
int p231()
#endif
{
int done=0;
   if (!isnear(86,-1,-1)) return 0;
   if (((value[86]==0) &&
   value[454]<value[470]) &&
   !have(86,-1,-1)) {
   if (value[89]==2) {
   say(0,785,0);
   set('E',86,'c',1,NULL,NULL);
   apport(86,INHAND);
   } else {
   say(0,786,0);
   }
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p229(void)
#else
int p229()
#endif
{
int done=0;
   if (!isnear(55,-1,-1)) return 0;
   if ((value[55]==0) &&
   value[454]<value[470]) {
   apport(55,INHAND);
   set('E',55,'c',1,NULL,NULL);
   value[474] = irand(5);
   if (value[474]==0) {
   value[474]=435;*bitword(474)=-1;
   } else {
   if (value[474]==1) {
   value[474]=430;*bitword(474)=-1;
   } else {
   if (value[474]==2) {
   value[474]=429;*bitword(474)=-1;
   } else {
   if (value[474]==3) {
   value[474]=423;*bitword(474)=-1;
   } else {
   value[474]=420;*bitword(474)=-1;
   }}}}
   if (value[34]==0) {
   say(12,828,474);
   } else {
   say(0,829,0);
   }
   apport(36,333);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p520(void)
#else
int p520()
#endif
{
int done=0;
   value[450]=714;*bitword(450)=-1;
   value[450] += value[455];
   say(2,450,0);
   p125();
return done;
}
#ifdef __STDC__
int p153(void)
#else
int p153()
#endif
{
int done=0;
   set('V',477,'c',0,NULL,NULL);
   if ((((((((((((bitest(evar(444),4)) ||
   bitest(evar(444),2)) ||
   bitest(evar(444),0)) ||
   bitest(evar(444),8)) ||
   !have(69,-1,-1)) ||
   value[69]==0) ||
   bitest(18,10)) ||
   isnear(91,-1,-1)) ||
   isnear(19,-1,-1)) ||
   isnear(21,-1,-1)) ||
   isnear(6,-1,-1)) ||
   isnear(31,-1,-1)) {
   return 0;
   }
   value[450]=886;*bitword(450)=-1;
   value[451] = irand(7);
   value[450] += value[451];
   say(0,488,0);
   say(2,450,0);
   say(0,488,0);
return done;
}
#ifdef __STDC__
int p122(void)
#else
int p122()
#endif
{
int done=0;
   say(0,636,0);
   bitmod('c',evar(448),2);
   bitmod('c',evar(448),1);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   value[451]=location[value[450]];*bitword(451)=-1;
   if (((bitest(evar(451),4)) ||
   have(value[450],-1,-1)) &&
   bitest(evar(450),0)) {
   apport(value[450],334);
   }}
   *bitword(450)= -1; value[450]=FLOC-1; while (++value[450]<=LLOC) {
   if (bitest(evar(450),4)) {
   bitmod('c',evar(450),1);
   }}
   set('V',465,'c',3,NULL,NULL);
   set('V',464,'c',999,NULL,NULL);
   move(196,-1);
   set('V',476,'c',0,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p114(void)
#else
int p114()
#endif
{
int done=0;
   if (value[465]==0) {
   set('V',465,'c',1,NULL,NULL);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if ((bitest(evar(450),2)) &&
   !(location[value[450]]==94)) {
   set('V',465,'c',0,NULL,NULL);
   }}
   if (value[465]==1) {
   set('V',464,'c',35,NULL,NULL);
   } else {
   value[464] = irand(10);
   value[464] += 30;
   }
   if (value[65]>0) {
   value[65] = irand(14);
   value[65] += 1;
   }
   if (value[86]>0) {
   value[86] = irand(11);
   value[86] += 1;
   }
   if (value[19]==2) {
   value[472] -= value[473];
   if (value[472]<0) {
   set('E',19,'c',3,NULL,NULL);
   }}
   if (((bitest(26,10)) &&
   !(bitest(26,11))) &&
   !isnear(91,-1,-1)) {
   bitmod('s',26,11);
   say(0,868,0);
   set('V',464,'c',5,NULL,NULL);
   set('V',473,'v',464,NULL,NULL);
   return 0;
   }
   if (value[89]>1) {
   value[471] -= value[473];
   if (value[471]<0) {
   if (value[89]==2) {
   set('E',89,'c',3,NULL,NULL);
   set('V',471,'c',40,NULL,NULL);
   say(0,89,0);
   set('V',470,'c',7,NULL,NULL);
   set('V',464,'c',8,NULL,NULL);
   set('V',473,'v',464,NULL,NULL);
   return 0;
   } else {
   set('E',89,'c',0,NULL,NULL);
   apport(89,274);
   }}}
   if ((value[477]>0) &&
   value[477]<value[461]) {
   value[464] = irand(10);
   value[464] += 10;
   p153();
   set('V',473,'v',464,NULL,NULL);
   return 0;
   }
   if ((bitest(106,1)) ||
   bitest(118,1)) {
   if ((bitest(evar(444),4)) ||
   bitest(evar(444),2)) {
   value[464] = irand(10);
   value[464] += 8;
   } else {
   if (((((((((value[461]>150) &&
   !(bitest(18,1))) ||
   bitest(18,10)) ||
   irand(100)<15) &&
   !(bitest(48,1))) &&
   !isnear(91,-1,-1)) &&
   !(bitest(evar(444),0))) &&
   have(69,-1,-1)) &&
   value[69]>0) {
   bitmod('c',18,10);
   set('V',451,'c',0,NULL,NULL);
   bitmod('c',63,2);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if ((bitest(evar(450),2)) &&
   isnear(value[450],-1,-1)) {
   apport(value[450],198);
   set('V',451,'c',1,NULL,NULL);
   }}
   bitmod('s',63,2);
   if (value[451]==0) {
   if ((!(bitest(18,1))) &&
   value[461]>150) {
   apport(48,198);
   apport(28,264);
   say(0,694,0);
   bitmod('s',18,1);
   } else {
   say(0,630,0);
   bitmod('s',18,10);
   value[464] = irand(10);
   value[464] += 4;
   }
   } else {
   if (bitest(18,1)) {
   say(0,632,0);
   } else {
   say(0,631,0);
   bitmod('s',18,1);
   apport(48,198);
   apport(28,264);
   }}
   } else {
   set('V',450,'v',463,NULL,NULL);
   value[450] += 2;
   value[450] *= 10;
   if (((isnear(91,-1,-1)) ||
   irand(100)<value[450]) &&
   value[91]<value[463]) {
   if (bitest(85,1)) {
   apport(91,value[444]);
   value[91] += 1;
   if (value[91]==1) {
   say(0,91,0);
   bitmod('s',91,10);
   bitmod('c',91,11);
   }
   } else {
   apport(85,value[444]);
   bitmod('s',85,1);
   say(0,494,0);
   }}}}}
   } else {
   if (value[465]==1) {
   set('V',465,'c',2,NULL,NULL);
   set('E',3,'c',0,NULL,NULL);
   say(0,633,0);
   if (isnear(91,-1,-1)) {
   say(13,733,91);
   }
   apport(91,333);
   set('E',91,'c',0,NULL,NULL);
   set('V',463,'c',0,NULL,NULL);
   set('E',7,'c',0,NULL,NULL);
   set('E',29,'c',0,NULL,NULL);
   apport(21,333);
   apport(19,333);
   set('E',21,'c',5,NULL,NULL);
   apport(22,199);
   bitmod('s',7,7);
   bitmod('s',29,7);
   set('V',464,'c',25,NULL,NULL);
   } else {
   if (bitest(evar(460),4)) {
   bitmod('c',evar(460),4);
   set('V',464,'c',15,NULL,NULL);
   } else {
   p122();
   }}}
   set('V',473,'v',464,NULL,NULL);
return done;
}
#ifdef __STDC__
int p43(void)
#else
int p43()
#endif
{
int done=0;
   if (value[448]==1) {
   say(12,732,446);
   bitmod('s',evar(448),4);
   } else {
   if ((value[448]==2) &&
   bitest(evar(447),15)) {
   if (isnear(value[447],-1,-1)) {
   say(12,749,446);
   } else {
   say(12,527,447);
   }
   } else {
   say(12,749,446);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p320(void)
#else
int p320()
#endif
{
int done=0;
   if (value[449]>0) {
   if (value[38]==1) {
   say(0,697,0);
   } else {
   if (isnear(38,-1,-1)) {
   say(0,696,0);
   set('E',38,'c',1,NULL,NULL);
   value[449] += 300;
   bitmod('c',69,10);
   } else {
   if (bitest(38,1)) {
   say(0,695,0);
   } else {
   say(0,691,0);
   }}}
   } else {
   if (value[465]==2) {
   p122();
   } else {
   if ((isnear(38,-1,-1)) &&
   value[38]==0) {
   say(0,696,0);
   set('E',38,'c',1,NULL,NULL);
   value[449] += 300;
   } else {
   say(0,692,0);
   set('E',69,'c',0,NULL,NULL);
   bitmod('s',evar(460),6);
   p435();
   }}}
return done;
}
#ifdef __STDC__
int p466(void)
#else
int p466()
#endif
{
int done=0;
   say(0,698,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p468(void)
#else
int p468()
#endif
{
int done=0;
   say(0,705,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p467(void)
#else
int p467()
#endif
{
int done=0;
   say(0,699,0);
return done;
}
#ifdef __STDC__
int p465(void)
#else
int p465()
#endif
{
int done=0;
   say(0,703,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p243(void)
#else
int p243()
#endif
{
int done=0;
   if (value[483]==0) {
   set('V',450,'c',0,NULL,NULL);
   if ((value[HERE]==99)) {
   if (value[3]==0) {
   if (!have(68,-1,-1)) {
   value[450]=563;*bitword(450)=-1;
   }}}
   if ((value[HERE]==104)) {
   if (isnear(71,-1,-1)) {
   if (value[71]==0) {
   if (have(72,-1,-1)) {
   value[450]=516;*bitword(450)=-1;
   }}}}
   if ((value[HERE]==110)) {
   if (isnear(6,-1,-1)) {
   if (!isnear(71,-1,-1)) {
   value[450]=518;*bitword(450)=-1;
   }}}
   if ((value[HERE]==187)) {
   value[450]=688;*bitword(450)=-1;
   }
   if ((((value[HERE]==179)) ||
   (value[HERE]==178)) ||
   (value[HERE]==180)) {
   if (!(bitest(180,1))) {
   value[450]=686;*bitword(450)=-1;
   }}
   if ((value[HERE]==211)) {
   value[450]=836;*bitword(450)=-1;
   }
   if (bitest(evar(444),7)) {
   value[450]=684;*bitword(450)=-1;
   }
   value[451]=281;*bitword(451)=-1;
   value[452]=319;*bitword(452)=-1;
   if ((value[444]>value[451]) &&
   value[444]<value[452]) {
   value[450]=909;*bitword(450)=-1;
   }
   if (value[450]==0) {
   return 0;
   }
   set('V',469,'c',0,NULL,NULL);
   p461(*bitword(450),value[450],-1,12,0,0);
   } else {
   set('V',483,'c',0,NULL,NULL);
   if (value[484]==1) {
   say(9,682,20);
   p461(-1,683,-1,13,0,0);
   } else {
   say(66,467,0);
   }}
return done;
}
#ifdef __STDC__
int p244(void)
#else
int p244()
#endif
{
int done=0;
   set('V',483,'c',0,NULL,NULL);
   if (value[484]==1) {
   value[450] += 1;
   say(2,450,0);
   value[456] += 20;
   bitmod('c',evar(444),5);
   if ((((value[HERE]==179)) ||
   (value[HERE]==178)) ||
   (value[HERE]==180)) {
   bitmod('c',179,5);
   bitmod('c',180,5);
   bitmod('c',178,5);
   } else {
   if (bitest(evar(444),7)) {
   *bitword(450)= -1; value[450]=FLOC-1; while (++value[450]<=LLOC) {
   if (bitest(evar(450),7)) {
   bitmod('c',evar(450),5);
   }}}}
   } else {
   say(66,467,0);
   }
return done;
}
#ifdef __STDC__
int p397(void)
#else
int p397()
#endif
{
int done=0;
   if (((isnear(69,-1,-1)) &&
   value[69]==1) ||
   bitest(evar(444),0)) {
   if (KEY(386)) {
   set('V',450,'v',447,NULL,NULL);
   } else {
   set('V',450,'v',446,NULL,NULL);
   }
   value[451] = irand(4);
   value[452]=503;*bitword(452)=-1;
   value[451] += value[452];
   say(14,451,450);
   } else {
   if (irand(100)<25) {
   say(0,521,0);
   p125();
   } else {
   say(0,507,0);
   }}
   if ((isnear(69,-1,-1)) &&
   value[69]==1) {
   value[449] -= 1;
   if ((value[449]==0) ||
   value[449]==40) {
   p320();
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p66(void)
#else
int p66()
#endif
{
int done=0;
   apport(88,333);
   say(0,788,0);
   value[450] = irand(7);
   value[451]=789;*bitword(451)=-1;
   value[450] += value[451];
   say(2,450,0);
   say(0,488,0);
   if (isnear(91,-1,-1)) {
   if (value[91]==1) {
   set('E',88,'c',1,NULL,NULL);
   } else {
   set('E',88,'c',2,NULL,NULL);
   }
   say(0,88,0);
   apport(91,333);
   value[463] -= value[91];
   set('E',91,'c',0,NULL,NULL);
   }
   if (isnear(21,-1,-1)) {
   set('E',88,'c',3,NULL,NULL);
   say(0,88,0);
   }
   if (isnear(37,-1,-1)) {
   set('E',88,'c',4,NULL,NULL);
   if (value[37]>0) {
   set('E',88,'c',5,NULL,NULL);
   }
   say(0,88,0);
   }
   if (isnear(6,-1,-1)) {
   set('E',88,'c',6,NULL,NULL);
   say(0,88,0);
   }
   if (isnear(71,-1,-1)) {
   set('E',88,'c',7,NULL,NULL);
   say(0,88,0);
   }
   if (isnear(32,-1,-1)) {
   set('E',88,'c',8,NULL,NULL);
   say(0,88,0);
   apport(32,333);
   }
   if ((isnear(19,-1,-1)) &&
   value[19]==0) {
   set('E',88,'c',9,NULL,NULL);
   say(0,88,0);
   }
   if (isnear(26,-1,-1)) {
   set('E',88,'c',10,NULL,NULL);
   say(0,88,0);
   }
   if ((isnear(24,-1,-1)) &&
   value[24]<2) {
   set('E',88,'c',11,NULL,NULL);
   say(0,88,0);
   }
   if (isnear(90,-1,-1)) {
   set('E',88,'c',12,NULL,NULL);
   say(0,88,0);
   apport(90,333);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p165(void)
#else
int p165()
#endif
{
int done=0;
   if ((have(88,-1,-1)) &&
   irand(100)<10) {
   say(0,787,0);
   apport(88,333);
   p125();
   }
return done;
}
#ifdef __STDC__
int p167(void)
#else
int p167()
#endif
{
int done=0;
   set('V',451,'e',91,NULL,NULL);
   value[451] += 2;
   value[451] = irand(value[451]);
   value[451] -= 1;
   if (value[451]<1) {
   return 0;
   }
   say(13,495,451);
   set('V',452,'v',470,NULL,NULL);
   value[452] -= value[454];
   value[452] *= 5;
   if (bitest(91,11)) {
   value[452] -= 20;
   }
   value[480] += value[452];
   value[480] += 35;
   value[480] /= value[451];
   if (have(63,-1,-1)) {
   value[450] = irand(5);
   if (value[450]>0) {
   value[452]=497;*bitword(452)=-1;
   value[450] += value[452];
   say(15,450,451);
   return 0;
   }}
   if ((irand(100)<value[480]) ||
   bitest(91,10)) {
   say(13,496,451);
   bitmod('c',91,10);
   } else {
   say(13,497,451);
   p125();
   }
return done;
}
#ifdef __STDC__
int p566(void)
#else
int p566()
#endif
{
int done=0;
   if (isnear(24,-1,-1)) {
   if (value[24]>1) {
   say(0,674,0);
   if (KEY(392)) {
   apport(value[447],INHAND);
   }
   } else {
   say(12,842,447);
   p125();
   }
   } else {
   if (isnear(26,-1,-1)) {
   say(12,843,447);
   } else {
   if (isnear(90,-1,-1)) {
   say(12,844,447);
   p125();
   } else {
   if (KEY(392)) {
   apport(value[447],INHAND);
   return 0;
   } else {
   say(2,467,0);
   }}}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p565(void)
#else
int p565()
#endif
{
int done=0;
   if (have(value[447],-1,-1)) {
   if (KEY(392)) {
   apport(value[447],HERE);
   }
   if (isnear(91,-1,-1)) {
   set('V',450,'v',470,NULL,NULL);
   value[450] -= value[454];
   value[450] *= 5;
   set('V',451,'e',91,NULL,NULL);
   value[451] += 2;
   value[451] *= 15;
   value[450] += value[451];
   if ((KEY(85)) ^
   KEY(384)) {
   value[450] += 15;
   }
   if (irand(100)<value[450]) {
   if ((irand(100)<5) &&
   !(bitest(evar(460),8))) {
   say(12,650,447);
   bitmod('s',evar(460),8);
   } else {
   say(0,649,0);
   }
   value[91] -= 1;
   if (value[91]==0) {
   apport(91,333);
   } else {
   set('V',480,'c',0,NULL,NULL);
   set('V',479,'c',100,NULL,NULL);
   }
   value[463] -= 1;
   } else {
   say(0,549,0);
   set('V',480,'c',0,NULL,NULL);
   set('V',479,'c',100,NULL,NULL);
   }
   } else {
   if (isnear(6,-1,-1)) {
   say(0,547,0);
   if (KEY(392)) {
   apport(value[447],INHAND);
   }
   } else {
   if (isnear(19,-1,-1)) {
   say(12,653,447);
   } else {
   if (isnear(37,-1,-1)) {
   if (value[37]==0) {
   if (KEY(392)) {
   if (KEY(85)) {
   say(0,671,0);
   set('E',85,'c',1,NULL,NULL);
   } else {
   say(0,798,0);
   }
   } else {
   if (irand(100)<50) {
   say(0,799,0);
   } else {
   say(0,800,0);
   p125();
   }}
   } else {
   say(0,673,0);
   }
   longjmp(loop_back,1);
   } else {
   if (isnear(21,-1,-1)) {
   say(0,664,0);
   } else {
   if (isnear(23,-1,-1)) {
   if (KEY(384)) {
   say(12,811,447);
   p125();
   } else {
   if (KEY(85)) {
   say(12,812,447);
   p125();
   } else {
   say(0,813,0);
   apport(86,333);
   apport(23,333);
   apport(63,value[444]);
   longjmp(loop_back,1);
   }}
   } else {
   if (isnear(16,-1,-1)) {
   say(12,833,447);
   longjmp(loop_back,1);
   } else {
   p566();
   return 0;
   }}}}}}}
   } else {
   say(12,722,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p428(void)
#else
int p428()
#endif
{
int done=0;
   if (isnear(34,-1,-1)) {
   if (value[34]==0) {
   if (((value[448]==2) &&
   value[447]==value[474]) ||
   value[446]==value[474]) {
   say(0,827,0);
   set('E',34,'c',1,NULL,NULL);
   bitmod('s',34,10);
   longjmp(loop_back,1);
   } else {
   if (!(bitest(34,10))) {
   say(0,830,0);
   set('E',34,'c',2,NULL,NULL);
   set('E',16,'c',1,NULL,NULL);
   bitmod('s',evar(460),1);
   bitmod('s',evar(460),3);
   set('E',3,'c',0,NULL,NULL);
   longjmp(loop_back,1);
   }}}}
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p544(void)
#else
int p544()
#endif
{
int done=0;
   if (value[16]>0) {
   if (value[16]==16) {
   set('E',16,'c',17,NULL,NULL);
   say(0,16,0);
   p125();
   }
   say(0,16,0);
   value[16] += 1;
   }
return done;
}
#ifdef __STDC__
int p460(void)
#else
int p460()
#endif
{
int done=0;
   if (value[448]>1) {
   say(12,734,447);
   }
return done;
}
#ifdef __STDC__
int p456(void)
#else
int p456()
#endif
{
int done=0;
   move(334,-1);
   if (value[69]==1) {
   set('V',449,'c',0,NULL,NULL);
   if (have(69,-1,-1)) {
   say(0,854,0);
   } else {
   say(0,855,0);
   }
   } else {
   say(0,855,0);
   }
   p125();
return done;
}
#ifdef __STDC__
int p552(void)
#else
int p552()
#endif
{
int done=0;
   set('V',450,'c',0,NULL,NULL);
   if ((value[HERE]==105)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=106;*bitword(451)=-1;
   }
   if ((value[HERE]==107)) {
   value[450]=894;*bitword(450)=-1;
   value[451]=174;*bitword(451)=-1;
   }
   if ((value[HERE]==108)) {
   value[450]=894;*bitword(450)=-1;
   value[451]=174;*bitword(451)=-1;
   }
   if ((value[HERE]==111)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=114;*bitword(451)=-1;
   }
   if ((value[HERE]==112)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=113;*bitword(451)=-1;
   }
   if ((value[HERE]==115)) {
   value[450]=895;*bitword(450)=-1;
   value[451]=122;*bitword(451)=-1;
   }
   if ((value[HERE]==120)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=188;*bitword(451)=-1;
   }
   if ((value[HERE]==121)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=188;*bitword(451)=-1;
   }
   if ((value[HERE]==123)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=124;*bitword(451)=-1;
   }
   if ((value[HERE]==125)) {
   value[450]=895;*bitword(450)=-1;
   value[451]=148;*bitword(451)=-1;
   }
   if ((value[HERE]==142)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=104;*bitword(451)=-1;
   }
   if ((value[HERE]==152)) {
   value[450]=896;*bitword(450)=-1;
   value[451]=151;*bitword(451)=-1;
   }
   if ((value[HERE]==153)) {
   value[450]=896;*bitword(450)=-1;
   value[451]=149;*bitword(451)=-1;
   }
   if ((value[HERE]==157)) {
   value[450]=897;*bitword(450)=-1;
   value[451]=158;*bitword(451)=-1;
   }
   if ((value[HERE]==171)) {
   value[450]=896;*bitword(450)=-1;
   value[451]=155;*bitword(451)=-1;
   }
   if ((value[HERE]==174)) {
   value[450]=898;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==177)) {
   value[450]=899;*bitword(450)=-1;
   value[451]=174;*bitword(451)=-1;
   }
   if ((value[HERE]==189)) {
   value[450]=896;*bitword(450)=-1;
   value[451]=138;*bitword(451)=-1;
   }
   if (((value[HERE]==191)) ||
   (value[HERE]==192)) {
   value[450]=907;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==194)) {
   value[450]=896;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==199)) {
   value[450]=900;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==200)) {
   value[450]=900;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==207)) {
   value[450]=901;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==208)) {
   value[450]=901;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==216)) {
   value[450]=902;*bitword(450)=-1;
   value[451]=215;*bitword(451)=-1;
   }
   if ((value[HERE]==217)) {
   value[450]=903;*bitword(450)=-1;
   value[451]=210;*bitword(451)=-1;
   }
   if ((value[HERE]==220)) {
   value[450]=904;*bitword(450)=-1;
   value[451]=221;*bitword(451)=-1;
   }
   if ((value[HERE]==221)) {
   value[450]=904;*bitword(450)=-1;
   value[451]=222;*bitword(451)=-1;
   }
   if ((value[HERE]==222)) {
   value[450]=904;*bitword(450)=-1;
   value[451]=223;*bitword(451)=-1;
   }
   if ((value[HERE]==279)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==280)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==281)) {
   value[450]=905;*bitword(450)=-1;
   value[451]=282;*bitword(451)=-1;
   }
   if ((value[HERE]==319)) {
   value[450]=893;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[HERE]==330)) {
   value[450]=906;*bitword(450)=-1;
   value[451]=331;*bitword(451)=-1;
   }
   if ((value[HERE]==332)) {
   value[450]=901;*bitword(450)=-1;
   value[451]=334;*bitword(451)=-1;
   }
   if ((value[450]==0) ||
   KEY(37)) {
   return 0;
   }
   say(14,450,447);
   apport(value[447],value[451]);
   if (KEY(52)) {
   apport(52,334);
   apport(53,value[451]);
   value[450]=334;*bitword(450)=-1;
   if (!(value[450]==value[451])) {
   say(0,908,0);
   }}
   if (KEY(81)) {
   apport(83,333);
   apport(82,333);
   }
   if ((KEY(83)) ||
   KEY(82)) {
   set('E',81,'c',1,NULL,NULL);
   apport(value[447],333);
   }
   if ((KEY(70)) &&
   have(71,-1,-1)) {
   apport(71,value[451]);
   }
   if (((KEY(69)) &&
   value[69]==1) &&
   !(bitest(evar(444),0))) {
   say(0,514,0);
   }
   if (KEY(71)) {
   set('E',71,'c',0,NULL,NULL);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p240(void)
#else
int p240()
#endif
{
int done=0;
   if (value[448]==1) {
   say(0,911,0);
   longjmp(loop_back,1);
   }
   if (bitest(evar(447),15)) {
   if ((have(value[447],-1,-1)) ||
   !(bitest(evar(447),0))) {
   return 0;
   }
   set('V',450,'v',454,NULL,NULL);
   value[450] -= value[470];
   value[450] *= 5;
   value[450] += 60;
   if (irand(100)<value[450]) {
   say(12,912,447);
   p125();
   } else {
   say(12,913,447);
   longjmp(loop_back,1);
   }}
return done;
}
#ifdef __STDC__
int p461(int typ0,int par0,int typ1,int par1,int typ2,int par2)
#else
int p461(typ0,par0,typ1,par1,typ2,par2)
int typ0;int par0;
int typ1;int par1;
int typ2;int par2;
#endif
{
int done=0;
   int lval [3];
   short lbts [3];
   lval[0] = par0;
   lbts [0] = typ0;
   lval[1] = par1;
   lbts [1] = typ1;
   lval[2] = par2;
   lbts [2] = typ2;
   if (lval[2]!=0) {
   special(23, &value[0]);
   }
   set('V',483,'l',1,lval, lbts);
   set('V',485,'l',0,lval, lbts);
   say(66,485,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p473(void)
#else
int p473()
#endif
{
int done=0;
   move(93,0,-92);
   move(93,0,-368);
   move(93,0,-357);
   move(94,0,-350);
   move(94,0,-94);
   move(94,0,-350);
   move(94,0,-367);
   move(95,0,-340);
   move(95,0,-345);
   move(95,0,-346);
   move(95,0,-370);
   move(95,0,-358);
   move(96,0,-96);
   move(96,0,-369);
   move(96,0,-367);
   move(99,0,-99);
return done;
}
#ifdef __STDC__
int p242(void)
#else
int p242()
#endif
{
int done=0;
   move(92,0,-92);
   move(92,0,-94);
   move(92,0,-341);
   move(92,0,-367);
   move(92,0,-369);
   move(96,0,-96);
   move(96,0,-369);
   move(96,0,-370);
return done;
}
#ifdef __STDC__
int p83(void)
#else
int p83()
#endif
{
int done=0;
   move(92,0,-92);
   move(92,0,-343);
   move(92,0,-359);
   move(92,0,-368);
   if (value[465]<2) {
   move(102,value[481],-421);
   move(118,value[481],-425);
   }
return done;
}
#ifdef __STDC__
int p84(void)
#else
int p84()
#endif
{
int done=0;
   if (!anyof(346,340,-1)) return 0;
   say(0,721,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p553(void)
#else
int p553()
#endif
{
int done=0;
   move(92,0,-339);
   move(92,0,-94);
   move(92,0,-369);
   move(96,0,-96);
   move(96,0,-367);
   move(96,0,-368);
   move(96,0,-357);
   move(99,0,-99);
   if (!anyof(370,358,340,-1)) return 0;
   if (value[465]<2) {
   move(98,-1);
   } else {
   move(195,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p210(void)
#else
int p210()
#endif
{
int done=0;
   move(95,0,-95);
   move(95,0,-367);
   move(95,0,-358);
   move(96,0,-368);
   move(96,0,-370);
return done;
}
#ifdef __STDC__
int p211(void)
#else
int p211()
#endif
{
int done=0;
   if (!anyof(96,341,369,-1)) return 0;
   if (irand(100)<50) {
   move(96,-1);
   } else {
   move(97,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p212(void)
#else
int p212()
#endif
{
int done=0;
   move(92,0,-92);
   move(92,0,-369);
   move(95,0,-95);
   move(95,0,-367);
   move(95,0,-368);
   move(95,0,-358);
   move(96,0,-96);
   move(96,0,-370);
return done;
}
#ifdef __STDC__
int p510(void)
#else
int p510()
#endif
{
int done=0;
   move(92,0,-94);
   move(95,0,-339);
   move(95,0,-369);
   move(96,0,-96);
   move(96,0,-367);
   move(96,0,-368);
   move(99,0,-340);
   move(99,0,-347);
   move(99,0,-348);
   move(99,0,-370);
return done;
}
#ifdef __STDC__
int p185(void)
#else
int p185()
#endif
{
int done=0;
   move(92,0,-94);
   move(95,0,-339);
   move(95,0,-369);
   move(96,0,-96);
   move(96,0,-367);
   move(96,0,-368);
   move(99,0,-340);
   move(99,0,-347);
   move(99,0,-348);
   move(99,0,-370);
return done;
}
#ifdef __STDC__
int p511(void)
#else
int p511()
#endif
{
int done=0;
   if (!anyof(98,346,358,350,-1)) return 0;
   say(0,598,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p186(void)
#else
int p186()
#endif
{
int done=0;
   if (!anyof(98,346,358,350,-1)) return 0;
   set('V',465,'c',5,NULL,NULL);
   bitmod('c',evar(448),2);
   bitmod('c',evar(448),1);
   say(0,197,0);
   set('V',466,'c',0,NULL,NULL);
   p205();
return done;
}
#ifdef __STDC__
int p149(void)
#else
int p149()
#endif
{
int done=0;
   move(96,0,-96);
   move(97,0,-367);
   move(96,0,-368);
   move(97,0,-370);
   move(92,0,-94);
   if (!anyof(339,345,369,98,-1)) return 0;
   if (value[465]<2) {
   move(98,-1);
   } else {
   move(195,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p150(void)
#else
int p150()
#endif
{
int done=0;
   if (!anyof(350,358,350,-1)) return 0;
   if (value[3]==1) {
   move(100,-1);
   } else {
   say(0,596,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p291(void)
#else
int p291()
#endif
{
int done=0;
   if (!anyof(357,343,343,351,-1)) return 0;
   if (value[3]==1) {
   move(99,-1);
   } else {
   say(0,596,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p292(void)
#else
int p292()
#endif
{
int done=0;
   move(101,0,-349);
   move(101,0,-101);
   move(101,0,-350);
   move(101,0,-368);
   move(105,0,-105);
   move(102,0,-102);
return done;
}
#ifdef __STDC__
int p123(void)
#else
int p123()
#endif
{
int done=0;
   move(100,0,-343);
   move(100,0,-351);
   move(100,0,-352);
   move(100,0,-344);
   move(100,0,-367);
   move(102,0,-350);
   move(102,0,-180);
   move(102,0,-368);
   move(102,0,-102);
   move(105,0,-105);
return done;
}
#ifdef __STDC__
int p146(void)
#else
int p146()
#endif
{
int done=0;
   move(100,0,-344);
   move(101,0,-349);
   move(101,0,-101);
   move(101,0,-353);
   move(101,0,-155);
   move(101,0,-367);
   move(103,0,-103);
   move(103,0,-350);
   move(103,0,-357);
   move(103,0,-368);
   move(105,0,-105);
   if (value[3]==1) {
   move(99,0,-99);
   } else {
   move(100,596,-99);
   }
return done;
}
#ifdef __STDC__
int p147(void)
#else
int p147()
#endif
{
int done=0;
   if (!keyword(421,-1)) return 0;
   if ((value[465]>1) ||
   bitest(evar(460),3)) {
   say(0,543,0);
   bitmod('s',evar(460),4);
   longjmp(loop_back,1);
   } else {
   move(94,value[481],-421);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p86(void)
#else
int p86()
#endif
{
int done=0;
   move(100,0,-344);
   move(102,0,-358);
   move(102,0,-367);
   move(102,0,-102);
   move(104,0,-350);
   move(104,0,-357);
   move(104,0,-368);
   move(105,0,-105);
   if (value[3]==1) {
   move(99,0,-99);
   } else {
   move(100,596,-99);
   }
return done;
}
#ifdef __STDC__
int p60(void)
#else
int p60()
#endif
{
int done=0;
   move(100,0,-344);
   move(102,0,-102);
   move(103,0,-103);
   move(103,0,-367);
   move(105,0,-353);
   move(105,0,-105);
   move(105,0,-368);
   if (value[3]==1) {
   move(99,0,-99);
   } else {
   move(100,596,-99);
   }
return done;
}
#ifdef __STDC__
int p438(void)
#else
int p438()
#endif
{
int done=0;
   move(100,0,-344);
   move(102,0,-102);
   move(104,0,-353);
   move(104,0,-367);
   move(106,0,-358);
   if (value[3]==1) {
   move(99,0,-99);
   } else {
   move(100,596,-99);
   }
return done;
}
#ifdef __STDC__
int p439(void)
#else
int p439()
#endif
{
int done=0;
   if (!anyof(358,4,105,-1)) return 0;
   if (have(43,-1,-1)) {
   say(0,710,0);
   move(106,-1);
   p125();
   } else {
   move(106,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p440(void)
#else
int p440()
#endif
{
int done=0;
   if (!anyof(368,360,-1)) return 0;
   say(0,720,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p441(void)
#else
int p441()
#endif
{
int done=0;
   if (!keyword(365,-1)) return 0;
   move(106,-1);
   p520();
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p378(void)
#else
int p378()
#endif
{
int done=0;
   move(109,0,-362);
   move(109,0,-370);
   move(265,0,-367);
   move(107,0,-341);
   move(107,0,-364);
   move(107,0,-368);
   move(110,0,-356);
   move(110,0,-358);
   move(110,0,-369);
   move(119,0,-118);
return done;
}
#ifdef __STDC__
int p379(void)
#else
int p379()
#endif
{
int done=0;
   if (!anyof(357,105,4,361,353,350,-1)) return 0;
   if (have(43,-1,-1)) {
   say(0,711,0);
   } else {
   move(105,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p170(void)
#else
int p170()
#endif
{
int done=0;
   move(106,0,-364);
   move(106,0,-367);
return done;
}
#ifdef __STDC__
int p171(void)
#else
int p171()
#endif
{
int done=0;
   if (!anyof(341,366,368,-1)) return 0;
   if (value[7]==0) {
   say(0,600,0);
   } else {
   move(108,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p172(void)
#else
int p172()
#endif
{
int done=0;
   if (!keyword(365,-1)) return 0;
   if (value[7]==1) {
   say(0,599,0);
   } else {
   move(174,-1);
   p520();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p238(void)
#else
int p238()
#endif
{
int done=0;
   move(106,0,-364);
   move(106,0,-343);
   move(106,0,-369);
return done;
}
#ifdef __STDC__
int p385(void)
#else
int p385()
#endif
{
int done=0;
   move(106,0,-356);
   move(106,0,-357);
   move(106,0,-367);
return done;
}
#ifdef __STDC__
int p386(void)
#else
int p386()
#endif
{
int done=0;
   if (!anyof(369,362,370,363,368,341,373,375,
   374,372,371,358,-1)) return 0;
   if (isnear(6,-1,-1)) {
   say(0,712,0);
   longjmp(loop_back,1);
   } else {
   move(115,0,-369);
   move(115,0,-362);
   move(116,0,-370);
   move(116,0,-363);
   move(117,0,-368);
   move(117,0,-341);
   move(267,0,-358);
   move(266,0,-371);
   move(273,0,-374);
   move(270,0,-372);
   move(157,0,-375);
   if (irand(100)<35) {
   move(157,0,-373);
   } else {
   say(0,557,0);
   }
   longjmp(loop_back,1);
}return done;
}
#ifdef __STDC__
int p568(void)
#else
int p568()
#endif
{
int done=0;
   move(112,0,-367);
   move(112,0,-366);
   move(151,0,-368);
   move(151,0,-151);
   move(114,0,-358);
   move(114,0,-105);
return done;
}
#ifdef __STDC__
int p569(void)
#else
int p569()
#endif
{
int done=0;
   if (!keyword(355,-1)) return 0;
   say(0,648,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p173(void)
#else
int p173()
#endif
{
int done=0;
   move(112,0,-357);
   move(112,0,-343);
return done;
}
#ifdef __STDC__
int p580(void)
#else
int p580()
#endif
{
int done=0;
   move(111,0,-357);
   move(111,0,-343);
return done;
}
#ifdef __STDC__
int p581(void)
#else
int p581()
#endif
{
int done=0;
   if (!keyword(376,-1)) return 0;
   if (value[10]==0) {
   say(0,723,0);
   } else {
   if (value[10]==2) {
   say(0,724,0);
   move(111,-1);
   } else {
   say(0,725,0);
   move(170,-1);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p582(void)
#else
int p582()
#endif
{
int done=0;
   if (!keyword(378,10,-1)) return 0;
   say(0,618,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p575(void)
#else
int p575()
#endif
{
int done=0;
   move(126,0,-368);
return done;
}
#ifdef __STDC__
int p576(void)
#else
int p576()
#endif
{
int done=0;
   if (!anyof(341,366,367,-1)) return 0;
   if (value[7]==0) {
   say(0,600,0);
   } else {
   move(107,-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p577(void)
#else
int p577()
#endif
{
int done=0;
   if (!keyword(365,-1)) return 0;
   if (value[7]==1) {
   say(0,599,0);
   } else {
   move(174,-1);
   p520();
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p578(void)
#else
int p578()
#endif
{
int done=0;
   if (!keyword(369,-1)) return 0;
   say(0,713,0);
   move(126,-1);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p330(void)
#else
int p330()
#endif
{
int done=0;
   move(110,0,-364);
   move(110,0,-343);
   move(110,0,-370);
   move(118,0,-369);
   move(118,0,-118);
   move(122,0,-358);
   move(122,0,-355);
return done;
}
#ifdef __STDC__
int p517(void)
#else
int p517()
#endif
{
int done=0;
   move(110,0,-364);
   move(110,0,-343);
   move(110,0,-369);
return done;
}
#ifdef __STDC__
int p583(void)
#else
int p583()
#endif
{
int done=0;
   move(110,0,-364);
   move(110,0,-343);
   move(110,0,-367);
   move(146,0,-368);
   move(146,0,-357);
return done;
}
#ifdef __STDC__
int p596(void)
#else
int p596()
#endif
{
int done=0;
   move(115,0,-370);
   move(119,0,-367);
   move(119,0,-119);
   move(120,0,-368);
return done;
}
#ifdef __STDC__
int p597(void)
#else
int p597()
#endif
{
int done=0;
   if (!anyof(425,179,-1)) return 0;
   if ((value[448]==2) &&
   !KEY(336)) {
   return 0;
   }
   if ((value[465]>1) ||
   bitest(evar(460),3)) {
   say(0,543,0);
   bitmod('s',evar(460),4);
   longjmp(loop_back,1);
   } else {
   if (KEY(425)) {
   move(94,-1);
   } else {
   move(179,-1);
   }
   say(2,481,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p300(void)
#else
int p300()
#endif
{
int done=0;
   move(118,0,-358);
   move(118,0,-118);
   move(106,0,-357);
return done;
}
#ifdef __STDC__
int p585(void)
#else
int p585()
#endif
{
int done=0;
   move(118,0,-367);
   move(118,0,-118);
return done;
}
#ifdef __STDC__
int p586(void)
#else
int p586()
#endif
{
int done=0;
   if (!keyword(365,-1)) return 0;
   say(0,710,0);
   move(188,-1);
   p125();
return done;
}
#ifdef __STDC__
int p152(void)
#else
int p152()
#endif
{
int done=0;
   move(123,0,-367);
   move(123,0,-349);
   move(115,0,-357);
   move(115,0,-355);
   move(125,0,-368);
   move(149,0,-149);
return done;
}
#ifdef __STDC__
int p72(void)
#else
int p72()
#endif
{
int done=0;
   move(122,0,-368);
   move(122,0,-349);
   move(124,0,-358);
   move(124,0,-105);
   move(124,0,-376);
return done;
}
#ifdef __STDC__
int p527(void)
#else
int p527()
#endif
{
int done=0;
   move(123,0,-376);
   move(123,0,-357);
   move(123,0,-343);
return done;
}
#ifdef __STDC__
int p528(void)
#else
int p528()
#endif
{
int done=0;
   if (!anyof(98,346,358,339,340,-1)) return 0;
   say(0,598,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p166(void)
#else
int p166()
#endif
{
int done=0;
   move(122,0,-367);
   move(122,0,-353);
   move(148,0,-358);
   move(148,0,-355);
   move(149,0,-149);
return done;
}
#ifdef __STDC__
int p571(void)
#else
int p571()
#endif
{
int done=0;
   move(127,0,-370);
   move(127,0,-357);
   move(127,0,-353);
   move(127,0,-376);
   move(108,0,-367);
   move(144,0,-368);
   move(144,0,-349);
return done;
}
#ifdef __STDC__
int p572(void)
#else
int p572()
#endif
{
int done=0;
   if (!keyword(369,-1)) return 0;
   say(0,713,0);
   move(108,-1);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p333(void)
#else
int p333()
#endif
{
int done=0;
   move(126,0,-357);
   move(127,0,-369);
   move(128,0,-367);
   move(130,0,-370);
   move(162,0,-368);
return done;
}
#ifdef __STDC__
int p334(void)
#else
int p334()
#endif
{
int done=0;
   move(127,0,-368);
   move(129,0,-370);
   move(130,0,-367);
return done;
}
#ifdef __STDC__
int p335(void)
#else
int p335()
#endif
{
int done=0;
   move(128,0,-367);
   move(133,0,-358);
   move(135,0,-370);
   move(164,0,-369);
return done;
}
#ifdef __STDC__
int p336(void)
#else
int p336()
#endif
{
int done=0;
   move(127,0,-368);
   move(128,0,-369);
   move(131,0,-367);
   move(132,0,-370);
   move(169,0,-357);
   move(169,0,-358);
return done;
}
#ifdef __STDC__
int p337(void)
#else
int p337()
#endif
{
int done=0;
   move(130,0,-368);
   move(130,0,-343);
return done;
}
#ifdef __STDC__
int p338(void)
#else
int p338()
#endif
{
int done=0;
   move(130,0,-367);
   move(130,0,-343);
return done;
}
#ifdef __STDC__
int p339(void)
#else
int p339()
#endif
{
int done=0;
   move(129,0,-357);
   move(129,0,-343);
return done;
}
#ifdef __STDC__
int p340(void)
#else
int p340()
#endif
{
int done=0;
   move(135,0,-367);
   move(136,0,-368);
return done;
}
#ifdef __STDC__
int p341(void)
#else
int p341()
#endif
{
int done=0;
   move(129,0,-367);
   move(134,0,-368);
   move(136,0,-358);
   move(137,0,-370);
return done;
}
#ifdef __STDC__
int p342(void)
#else
int p342()
#endif
{
int done=0;
   move(134,0,-368);
   move(135,0,-357);
   move(137,0,-367);
   move(138,0,-370);
return done;
}
#ifdef __STDC__
int p343(void)
#else
int p343()
#endif
{
int done=0;
   move(135,0,-368);
   move(136,0,-367);
   move(137,0,-370);
   move(138,0,-357);
   move(140,0,-369);
   move(168,0,-358);
return done;
}
