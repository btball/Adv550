#include "adv0.h"
#include "adv3.h"
#ifdef __STDC__
int p116(void)
#else
int p116()
#endif
{
int done=0;
   default_to(0,value[HERE],6);
   if (!keyword(3,-1)) return 0;
   if (!isnear(3,-1,-1)) return 0;
   set('E',3,'c',0,NULL,NULL);
   say(0,533,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p117(void)
#else
int p117(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(62)) return 0;
   if (!isnear(62,-1,-1)) return 0;
   if ((value[HERE]==254)) {
   if (value[62]==0) {
   if (isnear(37,-1,-1)) {
   apport(37,HERE);
   set('E',37,'c',1,NULL,NULL);
   set('E',62,'c',1,NULL,NULL);
   } else {
   set('E',62,'c',2,NULL,NULL);
   }}
   say(0,679,0);
   if (have(62,-1,-1)) {
   apport(62,HERE);
   }
   } else {
   say(0,680,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p118(void)
#else
int p118(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(5)) return 0;
   if (!isnear(5,-1,-1)) return 0;
   say(0,530,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p119(void)
#else
int p119(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(34)) return 0;
   if (!isnear(34,-1,-1)) return 0;
   if (value[34]==1) {
   say(0,826,0);
   set('E',34,'c',0,NULL,NULL);
   } else {
   say(12,825,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p120(void)
#else
int p120(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(84)) return 0;
   if (!isnear(84,-1,-1)) return 0;
   if (value[84]==0) {
   say(12,825,447);
   } else {
   say(12,749,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p121(void)
#else
int p121(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(417)) return 0;
   if (bitest(evar(460),5)) {
   p122();
   }
return done;
}
#ifdef __STDC__
int p241(void)
#else
int p241()
#endif
{
int done=0;
   if (value[469]==0) {
   set('V',469,'c',1,NULL,NULL);
   }
   p243();
   if (value[469]>0) {
   if ((((((((isnear(91,-1,-1)) ||
   isnear(19,-1,-1)) ||
   isnear(21,-1,-1)) ||
   isnear(23,-1,-1)) ||
   value[16]>0) ||
   isnear(31,-1,-1)) ||
   value[90]>0) ||
   isnear(24,-1,-1)) {
   say(0,554,0);
   } else {
   if (bitest(evar(460),7)) {
   say(0,555,0);
   } else {
   say(0,553,0);
   bitmod('s',evar(460),7);
   }}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p294(void)
#else
int p294()
#endif
{
int done=0;
   say(0,642,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p462(void)
#else
int p462()
#endif
{
int done=0;
   if (value[483]==0) {
   p461(-1,520,-1,6,0,0);
   } else {
   set('V',483,'c',0,NULL,NULL);
   }
   if (value[484]==1) {
   set('V',466,'c',1,NULL,NULL);
   p205();
   }
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p71(void)
#else
int p71()
#endif
{
int done=0;
   say(0,663,0);
   bitmod('s',evar(448),1);
   bitmod('c',evar(448),2);
   value[467]=489;*bitword(467)=-1;
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p331(void)
#else
int p331()
#endif
{
int done=0;
   if ((value[448]==1) ||
   !(bitest(evar(460),5))) {
   say(0,562,0);
   longjmp(loop_back,1);
   }
   if (bitest(evar(447),13)) {
   say(2,481,0);
   move(value[447],-1);
   } else {
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p303(void)
#else
int p303()
#endif
{
int done=0;
   default_to(0,value[HERE],5);
   if (!anyof(21,91,19,6,71,37,77,76,23,16,
   26,90,24,25,-1)) return 0;
   if (!isnear(value[447],-1,-1)) return 0;
   if (KEY(21)) {
   p316();
   } else {
   if (KEY(91)) {
   p312();
   } else {
   if (KEY(19)) {
   p311();
   } else {
   if (KEY(6)) {
   p315();
   } else {
   if (KEY(16)) {
   p309();
   } else {
   if (KEY(37)) {
   p306();
   } else {
   if ((KEY(76)) ||
   KEY(77)) {
   p308();
   } else {
   if (KEY(23)) {
   p314();
   } else {
   if (KEY(71)) {
   p307();
   } else {
   if (KEY(26)) {
   p310();
   } else {
   if (KEY(90)) {
   p313();
   } else {
   if (KEY(24)) {
   p305();
   } else {
   if (KEY(25)) {
   p245();
   }}}}}}}}}}}}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p304(void)
#else
int p304()
#endif
{
int done=0;
   if (value[448]==1) {
   say(0,545,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p190(void)
#else
int p190()
#endif
{
int done=0;
   bitmod('c',evar(448),1);
   bitmod('s',evar(448),2);
   say(2,467,0);
   value[467]=487;*bitword(467)=-1;
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p216(void)
#else
int p216()
#endif
{
int done=0;
   bitmod('c',evar(448),1);
   bitmod('c',evar(448),2);
   value[467]=489;*bitword(467)=-1;
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p195(void)
#else
int p195()
#endif
{
int done=0;
   if (!anyof(37,21,71,6,91,19,24,90,-1)) return 0;
   if (isnear(value[447],-1,-1)) {
   if (KEY(37)) {
   if (isnear(80,-1,-1)) {
   say(0,675,0);
   set('E',37,'c',1,NULL,NULL);
   if (have(80,-1,-1)) {
   }
   apport(80,333);
   if (value[85]==1) {
   set('E',85,'c',0,NULL,NULL);
   }
   } else {
   say(0,605,0);
   }
   } else {
   if (KEY(21)) {
   say(0,690,0);
   } else {
   if (KEY(6)) {
   if (have(71,-1,-1)) {
   say(0,604,0);
   apport(71,333);
   } else {
   say(0,605,0);
   }
   } else {
   if (KEY(91)) {
   say(0,606,0);
   bitmod('s',91,11);
   } else {
   if (KEY(71)) {
   say(0,603,0);
   } else {
   if (KEY(19)) {
   if (value[19]==0) {
   say(0,605,0);
   } else {
   say(0,674,0);
   }
   } else {
   if (KEY(24)) {
   if (value[24]<2) {
   say(0,605,0);
   } else {
   say(0,674,0);
   }
   } else {
   if (KEY(90)) {
   say(0,846,0);
   }}}}}}}}
   } else {
   say(12,527,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p196(void)
#else
int p196()
#endif
{
int done=0;
   if (value[448]==1) {
   say(0,511,0);
   } else {
   say(0,613,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p484(void)
#else
int p484()
#endif
{
int done=0;
   set('V',466,'c',1,NULL,NULL);
   p230();
   say(13,735,457);
   say(13,736,458);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p301(void)
#else
int p301()
#endif
{
int done=0;
   say(0,731,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p288(void)
#else
int p288()
#endif
{
int done=0;
   say(0,509,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p427(void)
#else
int p427()
#endif
{
int done=0;
   say(0,509,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p499(void)
#else
int p499()
#endif
{
int done=0;
   say(0,552,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p192(void)
#else
int p192()
#endif
{
int done=0;
   if (!anyof(433,432,431,404,-1)) return 0;
   set('V',462,'c',0,NULL,NULL);
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p193(void)
#else
int p193()
#endif
{
int done=0;
   set('V',462,'c',1,NULL,NULL);
   say(2,467,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p197(void)
#else
int p197()
#endif
{
int done=0;
   if (value[462]==0) {
   set('V',462,'c',2,NULL,NULL);
   say(2,467,0);
   } else {
   set('V',462,'c',0,NULL,NULL);
   say(0,543,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p207(void)
#else
int p207()
#endif
{
int done=0;
   if (value[462]==1) {
   set('V',462,'c',3,NULL,NULL);
   say(2,467,0);
   } else {
   set('V',462,'c',0,NULL,NULL);
   say(0,543,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p208(void)
#else
int p208()
#endif
{
int done=0;
   if (value[462]==2) {
   if (((location[49]==172)) ||
   (location[49]==334)) {
   say(0,543,0);
   } else {
   if (isnear(49,-1,-1)) {
   set('E',49,'c',1,NULL,NULL);
   } else {
   if ((value[HERE]==172)) {
   set('E',49,'c',0,NULL,NULL);
   } else {
   set('E',49,'c',2,NULL,NULL);
   }}
   if (have(49,-1,-1)) {
   apport(49,HERE);
   }
   say(0,49,0);
   set('E',49,'c',0,NULL,NULL);
   if ((location[49]==333)) {
   bitmod('s',21,10);
   if ((value[21]==1) ||
   value[21]==2) {
   if (isnear(22,-1,-1)) {
   set('E',21,'c',5,NULL,NULL);
   say(0,21,0);
   }
   set('E',21,'c',0,NULL,NULL);
   apport(21,199);
   apport(22,333);
   }}
   apport(49,172);
   }
   } else {
   say(0,543,0);
   }
   set('V',462,'c',0,NULL,NULL);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p217(void)
#else
int p217()
#endif
{
int done=0;
   set('V',462,'c',0,NULL,NULL);
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p594(void)
#else
int p594()
#endif
{
int done=0;
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p455(void)
#else
int p455()
#endif
{
int done=0;
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p203(void)
#else
int p203(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(417)) return 0;
   if ((bitest(evar(444),4)) &&
   !(bitest(100,1))) {
   say(0,558,0);
   } else {
   say(0,559,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p204(void)
#else
int p204()
#endif
{
int done=0;
   if (value[448]>1) {
   if (bitest(evar(447),15)) {
   if (isnear(value[447],-1,-1)) {
   if (have(value[447],-1,-1)) {
   say(0,597,0);
   } else {
   say(0,638,0);
   }
   } else {
   say(0,560,0);
   }
   longjmp(loop_back,1);
   } else {
   if (bitest(evar(447),13)) {
   if ((value[HERE]==value[447])) {
   say(0,640,0);
   } else {
   say(0,560,0);
   }
   } else {
   say(0,562,0);
   }
   longjmp(loop_back,1);
   }}
return done;
}
#ifdef __STDC__
int p529(void)
#else
int p529()
#endif
{
int done=0;
   say(0,647,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p64(void)
#else
int p64(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(52)) return 0;
   if (!isnear(52,-1,-1)) return 0;
   say(0,707,0);
   if (have(52,-1,-1)) {
   }
   apport(52,333);
   apport(53,value[444]);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p65(void)
#else
int p65(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(88)) return 0;
   if (!isnear(88,-1,-1)) return 0;
   p66();
return done;
}
#ifdef __STDC__
int p206(void)
#else
int p206(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(52)) return 0;
   if (!isnear(53,-1,-1)) return 0;
   say(0,646,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p199(void)
#else
int p199(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(52)) return 0;
   if (!isnear(52,-1,-1)) return 0;
   if ((bitest(evar(444),6)) ||
   (value[HERE]==113)) {
   say(0,645,0);
   if (have(52,-1,-1)) {
   }
   apport(52,333);
   apport(53,value[444]);
   } else {
   say(0,644,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p200(void)
#else
int p200(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(81)) return 0;
   if (!isnear(81,-1,-1)) return 0;
   if (value[81]==1) {
   if (bitest(evar(444),6)) {
   say(0,610,0);
   set('E',81,'c',0,NULL,NULL);
   if (have(81,-1,-1)) {
   apport(82,INHAND);
   }
   } else {
   if ((value[HERE]==113)) {
   say(0,611,0);
   set('E',81,'c',2,NULL,NULL);
   if (have(81,-1,-1)) {
   apport(83,INHAND);
   }
   } else {
   say(0,609,0);
   }}
   } else {
   say(0,608,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p201(void)
#else
int p201()
#endif
{
int done=0;
   if (value[448]>1) {
   say(0,612,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p458(void)
#else
int p458(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(82)) return 0;
   if (have(82,-1,-1)) {
   apport(82,333);
   set('E',81,'c',1,NULL,NULL);
   if (isnear(10,-1,-1)) {
   value[10] += 1;
   say(0,10,0);
   value[10] += 1;
   if (value[10]==6) {
   set('E',10,'c',0,NULL,NULL);
   bitmod('s',11,7);
   } else {
   bitmod('c',11,7);
   }
   move(value[444],-1);
   set('E',11,'e',10,NULL,NULL);
   } else {
   if (isnear(5,-1,-1)) {
   say(0,616,0);
   set('E',5,'c',0,NULL,NULL);
   } else {
   say(0,580,0);
   bitmod('s',evar(444),12);
   }}
   } else {
   say(12,722,82);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p459(void)
#else
int p459(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(83)) return 0;
   if (have(83,-1,-1)) {
   apport(83,333);
   set('E',81,'c',1,NULL,NULL);
   if (isnear(10,-1,-1)) {
   say(0,615,0);
   } else {
   if (isnear(5,-1,-1)) {
   say(0,617,0);
   set('E',5,'c',1,NULL,NULL);
   } else {
   say(0,580,0);
   bitmod('s',evar(444),12);
   }}
   } else {
   say(12,722,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p442(void)
#else
int p442()
#endif
{
int done=0;
   if (!anyof(91,6,71,19,21,37,18,23,24,90,-1)) return 0;
   if (!isnear(value[447],-1,-1)) return 0;
   say(0,512,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p175(void)
#else
int p175()
#endif
{
int done=0;
   default_to(0,value[HERE],8);
   if (!isnear(89,-1,-1)) return 0;
   if ((value[448]==1) ||
   KEY(89)) {
   if (have(89,-1,-1)) {
   apport(89,HERE);
   }
   set('E',89,'c',2,NULL,NULL);
   say(0,89,0);
   set('V',471,'c',30,NULL,NULL);
   value[471] += value[473];
   apport(89,333);
   set('V',470,'c',12,NULL,NULL);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p176(void)
#else
int p176()
#endif
{
int done=0;
   if (!isnear(80,-1,-1)) return 0;
   if ((value[448]==1) ||
   KEY(80)) {
   if (have(80,-1,-1)) {
   }
   apport(80,333);
   say(0,573,0);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p177(void)
#else
int p177()
#endif
{
int done=0;
   if (!anyof(91,19,71,6,37,21,10,23,
   24,90,-1)) return 0;
   if (isnear(value[447],-1,-1)) {
   say(0,572,0);
   } else {
   say(12,527,447);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p178(void)
#else
int p178()
#endif
{
int done=0;
   if (value[448]==1) {
   say(0,681,0);
   longjmp(loop_back,1);
   } else {
   if (bitest(evar(447),15)) {
   if (isnear(value[447],-1,-1)) {
   say(0,579,0);
   longjmp(loop_back,1);
   }}}
return done;
}
#ifdef __STDC__
int p475(void)
#else
int p475(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(69)) return 0;
   if (!isnear(69,-1,-1)) return 0;
   say(12,577,447);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p476(void)
#else
int p476()
#endif
{
int done=0;
   if (value[448]>1) {
   if (bitest(evar(447),15)) {
   if (isnear(value[447],-1,-1)) {
   say(0,578,0);
   longjmp(loop_back,1);
   }}}
return done;
}
#ifdef __STDC__
int p42(void)
#else
int p42()
#endif
{
int done=0;
   if (((bitest(evar(444),3)) ||
   bitest(evar(445),3)) ||
   value[445]==0) {
   say(0,594,0);
   } else {
   move(value[445],-1);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p376(void)
#else
int p376()
#endif
{
int done=0;
   say(0,570,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p482(void)
#else
int p482()
#endif
{
int done=0;
   if (!anyof(425,421,179,422,428,427,424,
   429,420,430,423,435,426,-1)) return 0;
   if (value[447]<LPROC && value[447]>= 0) (*procs[value[447]])(); else pcall(value[447]);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p483(void)
#else
int p483()
#endif
{
int done=0;
   if (value[448]==2) {
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p480(void)
#else
int p480()
#endif
{
int done=0;
   if (value[448]<2) {
   say(64,918,0);
   }
   if (bitest(evar(460),0)) {
   say(0,709,0);
   } else {
   set('V',450,'c',1,NULL,NULL);
   if ((0>0) &&
   !(bitest(evar(460),5))) {
   say(9,750,0);
   if (!(query(708))) {
   set('V',450,'c',0,NULL,NULL);
   }}
   if (value[450]>0) {
   svar(4,&value[468]);
   value[468] *= 60;
   svar(5,&value[450]);
   value[468] += value[450];
   special(1,&value[450]);
   if (value[450]==0) {
   if ((bitest(evar(460),5)) ||
   0==0) {
   p461(-1,755,-1,14,0,0);
   }
   } else {
   if (value[450]==2) {
   p461(-1,917,-1,16,0,1);
   }
   say(0,751,0);
   }
   } else {
   say(2,467,0);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p471(void)
#else
int p471()
#endif
{
int done=0;
   if (value[448]<2) {
   say(64,919,0);
   }
   special(5,&value[450]);
   if (value[450]>0) {
   if (!(bitest(evar(460),5))) {
   value[451]=768;*bitword(451)=-1;
   value[451] += value[450];
   say(2,451,0);
   longjmp(loop_back,1);
   }}
   if (bitest(evar(460),5)) {
   set('V',450,'c',1,NULL,NULL);
   } else {
   set('V',450,'c',0,NULL,NULL);
   }
   special(7,&value[450]);
   special(2,&value[450]);
   if (value[450]==0) {
   svar(4,&value[450]);
   svar(5,&value[451]);
   value[450] *= 60;
   value[450] += value[451];
   if (value[450]<value[468]) {
   value[450] += 720;
   value[450] += 720;
   }
   value[450] -= value[468];
   special(8,&value[451]);
   if (value[451]==1) {
   bitmod('s',evar(460),5);
   } else {
   bitmod('c',evar(460),5);
   }
   if ((bitest(evar(460),5)) ||
   value[450]>=0) {
   if (value[69]==1) {
   value[449] += 1;
   }
   if ((bitest(evar(460),5)) ||
   0==0) {
   p461(-1,754,-1,15,0,1);
   }}
   } else {
   if (value[450]==1) {
   say(0,752,0);
   value[459] -= 1;
   } else {
   say(0,753,0);
   special(3,&value[450]);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p155(void)
#else
int p155()
#endif
{
int done=0;
   if ((value[448]==1) ||
   KEY(82)) {
   if (bitest(evar(444),6)) {
   say(0,574,0);
   longjmp(loop_back,1);
   } else {
   if ((isnear(81,-1,-1)) &&
   value[81]==0) {
   say(0,576,0);
   apport(82,333);
   set('E',81,'c',1,NULL,NULL);
   longjmp(loop_back,1);
   }}
   if (KEY(82)) {
   say(12,527,447);
   } else {
   say(0,759,0);
   }
   } else {
   if (bitest(evar(447),15)) {
   if (isnear(value[447],-1,-1)) {
   say(0,613,0);
   } else {
   say(12,527,447);
   }
   } else {
   say(0,613,0);
   }}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p396(void)
#else
int p396()
#endif
{
int done=0;
   say(0,491,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p464(void)
#else
int p464()
#endif
{
int done=0;
   if (value[448]>1) {
   if (bitest(evar(447),15)) {
   if (isnear(value[447],-1,-1)) {
   if (KEY(78)) {
   p466();
   } else {
   if (KEY(28)) {
   p467();
   } else {
   if (KEY(8)) {
   p468();
   } else {
   say(12,749,446);
   }}}
   } else {
   say(12,527,447);
   }
   } else {
   say(0,613,0);
   }
   } else {
   return 0;
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p246(void)
#else
int p246()
#endif
{
int done=0;
   say(0,772,0);
   special(6,&value[450]);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p593(void)
#else
int p593()
#endif
{
int done=0;
   p461(-1,773,-1,4,0,0);
return done;
}
#ifdef __STDC__
int p139(void)
#else
int p139()
#endif
{
int done=0;
   if (value[478]==0) {
   set('V',478,'c',1,NULL,NULL);
   } else {
   set('V',478,'c',-1,NULL,NULL);
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p239(void)
#else
int p239()
#endif
{
int done=0;
   if (value[478]==1) {
   set('V',478,'c',2,NULL,NULL);
   } else {
   set('V',478,'c',-1,NULL,NULL);
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p284(void)
#else
int p284()
#endif
{
int done=0;
   if (value[478]==2) {
   set('V',478,'c',3,NULL,NULL);
   } else {
   set('V',478,'c',-1,NULL,NULL);
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p505(void)
#else
int p505()
#endif
{
int done=0;
   if (value[478]==3) {
   set('V',478,'c',4,NULL,NULL);
   } else {
   set('V',478,'c',-1,NULL,NULL);
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p218(void)
#else
int p218()
#endif
{
int done=0;
   if (value[478]==4) {
   set('V',478,'c',-1,NULL,NULL);
   bitmod('s',evar(460),5);
   bitmod('c',evar(460),0);
   say(0,489,0);
   } else {
   set('V',478,'c',-1,NULL,NULL);
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p113(void)
#else
int p113()
#endif
{
int done=0;
   say(0,718,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p328(void)
#else
int p328()
#endif
{
int done=0;
   say(0,569,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p372(void)
#else
int p372()
#endif
{
int done=0;
   if ((isnear(30,-1,-1)) &&
   value[30]==0) {
   set('E',30,'c',1,NULL,NULL);
   say(0,835,0);
   } else {
   say(0,543,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p405(void)
#else
int p405(typ0,par0)
int typ0;int par0;
#endif
{
int done=0;
if (!KEY(424)) return 0;
   if ((((bitest(69,10)) ||
   bitest(evar(444),0)) ||
   !(bitest(278,1))) ||
   !isnear(69,-1,-1)) {
   say(0,543,0);
   } else {
   if (have(69,-1,-1)) {
   say(0,781,0);
   p125();
   } else {
   if (value[449]>40) {
   apport(69,334);
   set('E',38,'c',1,NULL,NULL);
   set('E',69,'c',0,NULL,NULL);
   set('V',449,'c',0,NULL,NULL);
   if (irand(100)<50) {
   say(0,782,0);
   say(0,514,0);
   } else {
   say(0,783,0);
   p125();
   }
   } else {
   say(0,784,0);
   value[449] += 150;
   set('E',69,'c',1,NULL,NULL);
   bitmod('s',69,10);
   }}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p406(void)
#else
int p406()
#endif
{
int done=0;
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p478(void)
#else
int p478()
#endif
{
int done=0;
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p543(void)
#else
int p543()
#endif
{
int done=0;
   say(0,543,0);
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p318(void)
#else
int p318()
#endif
{
int done=0;
   p428();
return done;
}
#ifdef __STDC__
int p598(void)
#else
int p598()
#endif
{
int done=0;
   p428();
return done;
}
#ifdef __STDC__
int p317(void)
#else
int p317()
#endif
{
int done=0;
   p428();
return done;
}
#ifdef __STDC__
int p513(void)
#else
int p513()
#endif
{
int done=0;
   p428();
return done;
}
#ifdef __STDC__
int p61(void)
#else
int p61()
#endif
{
int done=0;
   p428();
return done;
}
#ifdef __STDC__
int p472(void)
#else
int p472()
#endif
{
int done=0;
   if (((value[448]==1) ||
   KEY(27)) &&
   isnear(27,-1,-1)) {
   say(0,859,0);
   move(191,-1);
   apport(27,333);
   longjmp(loop_back,1);
   }
return done;
}
#ifdef __STDC__
int p436(void)
#else
int p436()
#endif
{
int done=0;
   bitmod('s',26,11);
   if (bitest(evar(444),4)) {
   say(0,543,0);
   } else {
   if (((isnear(81,-1,-1)) &&
   value[81]==0) ||
   bitest(evar(444),6)) {
   if (irand(100)<85) {
   say(0,543,0);
   } else {
   if (irand(100)<95) {
   say(0,869,0);
   p125();
   } else {
   say(0,870,0);
   finita();
   }}
   } else {
   if ((isnear(85,-1,-1)) ||
   isnear(86,-1,-1)) {
   if (isnear(85,-1,-1)) {
   say(0,871,0);
   if (have(85,-1,-1)) {
   }
   apport(85,333);
   }
   if (isnear(86,-1,-1)) {
   say(0,872,0);
   if (have(86,-1,-1)) {
   }
   apport(86,333);
   }
   } else {
   value[450] = irand(3);
   value[450] *= 2;
   if (value[91]>1) {
   value[450] += 1;
   }
   if (isnear(91,-1,-1)) {
   if (irand(100)<70) {
   value[451]=873;*bitword(451)=-1;
   value[450] += value[451];
   say(2,450,0);
   apport(91,333);
   value[463] -= value[91];
   set('E',91,'c',0,NULL,NULL);
   } else {
   value[451]=879;*bitword(451)=-1;
   value[450] += value[451];
   say(2,450,0);
   p125();
   }
   } else {
   say(0,543,0);
   }}}}
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p477(void)
#else
int p477()
#endif
{
int done=0;
   if (bitest(evar(460),5)) {
   set('V',464,'c',0,NULL,NULL);
   move(value[444],-1);
   say(2,467,0);
   } else {
   say(0,562,0);
   }
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p2(void)
#else
int p2()
#endif
{
int done=0;
   say(0,488,0);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   apport(value[450],333);
   value[451] = irand(100);
   }
return done;
}
#ifdef __STDC__
int p3(void)
#else
int p3()
#endif
{
int done=0;
   bitmod('s',68,0);
   bitmod('s',69,0);
   bitmod('s',70,0);
   bitmod('s',72,0);
   bitmod('s',74,0);
   bitmod('s',71,0);
   bitmod('s',75,0);
   bitmod('s',76,0);
   bitmod('s',77,0);
   bitmod('s',78,0);
   bitmod('s',79,0);
   bitmod('s',80,0);
   bitmod('s',81,0);
   bitmod('s',82,0);
   bitmod('s',83,0);
   bitmod('s',85,0);
   bitmod('s',37,0);
   bitmod('s',38,0);
   bitmod('s',43,0);
   bitmod('s',44,0);
   bitmod('s',45,0);
   bitmod('s',46,0);
   bitmod('s',47,0);
   bitmod('s',48,0);
   bitmod('s',49,0);
   bitmod('s',50,0);
   bitmod('s',52,0);
   bitmod('s',53,0);
   bitmod('s',54,0);
   bitmod('s',57,0);
   bitmod('s',58,0);
   bitmod('s',59,0);
   bitmod('s',60,0);
   bitmod('s',62,0);
   bitmod('s',63,0);
   bitmod('s',64,0);
   bitmod('s',41,0);
   bitmod('s',51,0);
   bitmod('s',87,0);
   bitmod('s',88,0);
   bitmod('s',89,0);
   bitmod('s',65,0);
   bitmod('s',66,0);
   bitmod('s',67,0);
   bitmod('s',86,0);
   bitmod('s',42,0);
   bitmod('s',55,0);
   bitmod('s',56,0);
   bitmod('s',84,0);
   bitmod('s',73,0);
   bitmod('s',61,0);
return done;
}
#ifdef __STDC__
int p4(void)
#else
int p4()
#endif
{
int done=0;
   bitmod('s',71,9);
   bitmod('s',83,9);
   bitmod('s',82,9);
   bitmod('s',37,9);
return done;
}
#ifdef __STDC__
int p5(void)
#else
int p5()
#endif
{
int done=0;
   bitmod('s',92,0);
   bitmod('s',93,0);
   bitmod('s',94,0);
   bitmod('s',95,0);
   bitmod('s',96,0);
   bitmod('s',97,0);
   bitmod('s',98,0);
   bitmod('s',195,0);
   bitmod('s',99,0);
   bitmod('s',100,0);
   bitmod('s',101,0);
   bitmod('s',179,0);
   bitmod('s',207,0);
   bitmod('s',278,0);
   bitmod('s',330,0);
   bitmod('s',331,0);
   bitmod('s',211,0);
   bitmod('s',212,0);
   bitmod('s',208,0);
   bitmod('s',209,0);
   bitmod('s',245,0);
   bitmod('s',246,0);
   bitmod('s',250,0);
   bitmod('s',332,0);
   bitmod('s',196,0);
   bitmod('s',197,0);
   bitmod('s',194,0);
return done;
}
#ifdef __STDC__
int p6(void)
#else
int p6()
#endif
{
int done=0;
   bitmod('s',100,2);
   bitmod('s',101,2);
   bitmod('s',178,2);
   bitmod('s',179,2);
   bitmod('s',180,2);
   bitmod('s',199,2);
   bitmod('s',200,2);
   bitmod('s',204,2);
   bitmod('s',205,2);
   bitmod('s',206,2);
   bitmod('s',207,2);
   bitmod('s',251,2);
   bitmod('s',252,2);
   bitmod('s',253,2);
   bitmod('s',254,2);
   bitmod('s',198,2);
   bitmod('s',113,2);
   bitmod('s',114,2);
   bitmod('s',124,2);
   bitmod('s',208,2);
   bitmod('s',209,2);
   bitmod('s',210,2);
   bitmod('s',211,2);
   bitmod('s',212,2);
   bitmod('s',213,2);
   bitmod('s',214,2);
   bitmod('s',215,2);
   bitmod('s',216,2);
   bitmod('s',217,2);
   bitmod('s',218,2);
   bitmod('s',219,2);
   bitmod('s',220,2);
   bitmod('s',268,2);
   bitmod('s',221,2);
   bitmod('s',222,2);
   bitmod('s',223,2);
   bitmod('s',224,2);
   bitmod('s',225,2);
   bitmod('s',226,2);
   bitmod('s',227,2);
   bitmod('s',228,2);
   bitmod('s',229,2);
   bitmod('s',230,2);
   bitmod('s',231,2);
   bitmod('s',232,2);
   bitmod('s',233,2);
   bitmod('s',234,2);
   bitmod('s',235,2);
   bitmod('s',236,2);
   bitmod('s',237,2);
   bitmod('s',238,2);
   bitmod('s',239,2);
   bitmod('s',240,2);
   bitmod('s',241,2);
   bitmod('s',242,2);
   bitmod('s',243,2);
   bitmod('s',244,2);
   bitmod('s',245,2);
   bitmod('s',246,2);
   bitmod('s',247,2);
   bitmod('s',248,2);
   bitmod('s',249,2);
   bitmod('s',250,2);
   bitmod('s',192,2);
   bitmod('s',193,2);
   bitmod('s',194,2);
   bitmod('s',269,2);
return done;
}
#ifdef __STDC__
int p7(void)
#else
int p7()
#endif
{
int done=0;
   bitmod('s',92,4);
   bitmod('s',93,4);
   bitmod('s',94,4);
   bitmod('s',95,4);
   bitmod('s',96,4);
   bitmod('s',97,4);
   bitmod('s',98,4);
   bitmod('s',99,4);
   bitmod('s',195,4);
return done;
}
#ifdef __STDC__
int p8(void)
#else
int p8()
#endif
{
int done=0;
   bitmod('s',128,3);
   bitmod('s',129,3);
   bitmod('s',130,3);
   bitmod('s',131,3);
   bitmod('s',132,3);
   bitmod('s',133,3);
   bitmod('s',134,3);
   bitmod('s',135,3);
   bitmod('s',136,3);
   bitmod('s',137,3);
   bitmod('s',138,3);
   bitmod('s',139,3);
   bitmod('s',140,3);
   bitmod('s',141,3);
   bitmod('s',142,3);
   bitmod('s',143,3);
   bitmod('s',162,3);
   bitmod('s',163,3);
   bitmod('s',164,3);
   bitmod('s',165,3);
   bitmod('s',166,3);
   bitmod('s',167,3);
   bitmod('s',168,3);
   bitmod('s',169,3);
   bitmod('s',190,3);
   bitmod('s',198,3);
   bitmod('s',255,3);
   bitmod('s',256,3);
   bitmod('s',257,3);
   bitmod('s',258,3);
   bitmod('s',259,3);
   bitmod('s',260,3);
   bitmod('s',261,3);
   bitmod('s',262,3);
   bitmod('s',263,3);
   bitmod('s',264,3);
   bitmod('s',182,3);
   bitmod('s',324,3);
   bitmod('s',325,3);
   bitmod('s',192,3);
   bitmod('s',171,3);
   bitmod('s',189,3);
   bitmod('s',199,3);
   bitmod('s',200,3);
   bitmod('s',187,3);
   bitmod('s',178,3);
   bitmod('s',179,3);
   bitmod('s',180,3);
   bitmod('s',158,3);
   bitmod('s',283,3);
   bitmod('s',285,3);
   bitmod('s',287,3);
   bitmod('s',289,3);
   bitmod('s',290,3);
   bitmod('s',291,3);
   bitmod('s',292,3);
   bitmod('s',293,3);
   bitmod('s',294,3);
   bitmod('s',295,3);
   bitmod('s',296,3);
   bitmod('s',297,3);
   bitmod('s',299,3);
   bitmod('s',300,3);
   bitmod('s',301,3);
   bitmod('s',303,3);
   bitmod('s',304,3);
   bitmod('s',305,3);
   bitmod('s',306,3);
   bitmod('s',307,3);
   bitmod('s',308,3);
   bitmod('s',282,3);
   bitmod('s',281,3);
   bitmod('s',226,3);
   bitmod('s',227,3);
   bitmod('s',228,3);
   bitmod('s',229,3);
   bitmod('s',230,3);
   bitmod('s',231,3);
   bitmod('s',232,3);
   bitmod('s',233,3);
   bitmod('s',234,3);
   bitmod('s',235,3);
   bitmod('s',236,3);
   bitmod('s',237,3);
   bitmod('s',238,3);
   bitmod('s',239,3);
   bitmod('s',240,3);
   bitmod('s',241,3);
   bitmod('s',242,3);
   bitmod('s',243,3);
   bitmod('s',244,3);
   bitmod('s',208,3);
   bitmod('s',210,3);
   bitmod('s',211,3);
   bitmod('s',218,3);
   bitmod('s',196,3);
   bitmod('s',332,3);
return done;
}
#ifdef __STDC__
int p9(void)
#else
int p9()
#endif
{
int done=0;
   bitmod('s',127,7);
   bitmod('s',128,7);
   bitmod('s',129,7);
   bitmod('s',130,7);
   bitmod('s',131,7);
   bitmod('s',132,7);
   bitmod('s',133,7);
   bitmod('s',134,7);
   bitmod('s',135,7);
   bitmod('s',136,7);
   bitmod('s',137,7);
   bitmod('s',138,7);
   bitmod('s',139,7);
   bitmod('s',140,7);
   bitmod('s',141,7);
   bitmod('s',142,7);
   bitmod('s',143,7);
   bitmod('s',162,7);
   bitmod('s',163,7);
   bitmod('s',164,7);
   bitmod('s',165,7);
   bitmod('s',166,7);
   bitmod('s',167,7);
   bitmod('s',168,7);
   bitmod('s',169,7);
   bitmod('s',186,7);
   bitmod('s',190,7);
   bitmod('s',198,7);
   bitmod('s',255,7);
   bitmod('s',256,7);
   bitmod('s',257,7);
   bitmod('s',258,7);
   bitmod('s',259,7);
   bitmod('s',260,7);
   bitmod('s',261,7);
   bitmod('s',262,7);
   bitmod('s',263,7);
   bitmod('s',264,7);
   bitmod('s',282,7);
   bitmod('s',283,7);
   bitmod('s',284,7);
   bitmod('s',285,7);
   bitmod('s',286,7);
   bitmod('s',287,7);
   bitmod('s',288,7);
   bitmod('s',289,7);
   bitmod('s',290,7);
   bitmod('s',291,7);
   bitmod('s',292,7);
   bitmod('s',293,7);
   bitmod('s',294,7);
   bitmod('s',295,7);
   bitmod('s',296,7);
   bitmod('s',297,7);
   bitmod('s',298,7);
   bitmod('s',299,7);
   bitmod('s',300,7);
   bitmod('s',301,7);
   bitmod('s',302,7);
   bitmod('s',303,7);
   bitmod('s',304,7);
   bitmod('s',305,7);
   bitmod('s',306,7);
   bitmod('s',307,7);
   bitmod('s',308,7);
   bitmod('s',309,7);
   bitmod('s',310,7);
   bitmod('s',311,7);
   bitmod('s',312,7);
   bitmod('s',313,7);
   bitmod('s',314,7);
   bitmod('s',315,7);
   bitmod('s',316,7);
   bitmod('s',317,7);
   bitmod('s',318,7);
return done;
}
#ifdef __STDC__
int p10(void)
#else
int p10()
#endif
{
int done=0;
   bitmod('s',109,8);
   bitmod('s',116,8);
   bitmod('s',265,8);
   bitmod('s',120,8);
   bitmod('s',121,8);
   bitmod('s',131,8);
   bitmod('s',132,8);
   bitmod('s',133,8);
   bitmod('s',134,8);
   bitmod('s',139,8);
   bitmod('s',141,8);
   bitmod('s',143,8);
   bitmod('s',147,8);
   bitmod('s',156,8);
   bitmod('s',161,8);
   bitmod('s',163,8);
   bitmod('s',164,8);
   bitmod('s',167,8);
   bitmod('s',168,8);
   bitmod('s',175,8);
   bitmod('s',184,8);
   bitmod('s',191,8);
   bitmod('s',194,8);
   bitmod('s',264,8);
   bitmod('s',269,8);
   bitmod('s',272,8);
   bitmod('s',274,8);
   bitmod('s',275,8);
   bitmod('s',284,8);
   bitmod('s',288,8);
   bitmod('s',292,8);
   bitmod('s',293,8);
   bitmod('s',299,8);
   bitmod('s',300,8);
   bitmod('s',323,8);
   bitmod('s',331,8);
return done;
}
#ifdef __STDC__
int p11(void)
#else
int p11()
#endif
{
int done=0;
   bitmod('s',3,6);
   bitmod('s',5,6);
   bitmod('s',76,6);
   bitmod('s',77,6);
   bitmod('s',84,6);
   bitmod('s',62,6);
   bitmod('s',34,6);
   bitmod('s',88,6);
return done;
}
#ifdef __STDC__
int p12(void)
#else
int p12()
#endif
{
int done=0;
   bitmod('s',4,7);
   bitmod('s',7,7);
   bitmod('s',9,7);
   bitmod('s',12,7);
   bitmod('s',17,7);
   bitmod('s',18,7);
   bitmod('s',30,7);
   bitmod('s',29,7);
   bitmod('s',31,7);
   bitmod('s',35,7);
   bitmod('s',39,7);
   bitmod('s',91,7);
   bitmod('s',79,7);
   bitmod('s',13,7);
   bitmod('s',11,7);
return done;
}
#ifdef __STDC__
int p13(void)
#else
int p13()
#endif
{
int done=0;
   bitmod('s',127,5);
   bitmod('s',128,5);
   bitmod('s',129,5);
   bitmod('s',130,5);
   bitmod('s',131,5);
   bitmod('s',132,5);
   bitmod('s',133,5);
   bitmod('s',134,5);
   bitmod('s',135,5);
   bitmod('s',136,5);
   bitmod('s',137,5);
   bitmod('s',138,5);
   bitmod('s',139,5);
   bitmod('s',140,5);
   bitmod('s',141,5);
   bitmod('s',142,5);
   bitmod('s',143,5);
   bitmod('s',162,5);
   bitmod('s',163,5);
   bitmod('s',164,5);
   bitmod('s',165,5);
   bitmod('s',166,5);
   bitmod('s',167,5);
   bitmod('s',168,5);
   bitmod('s',169,5);
   bitmod('s',186,5);
   bitmod('s',190,5);
   bitmod('s',198,5);
   bitmod('s',255,5);
   bitmod('s',256,5);
   bitmod('s',257,5);
   bitmod('s',258,5);
   bitmod('s',259,5);
   bitmod('s',260,5);
   bitmod('s',261,5);
   bitmod('s',262,5);
   bitmod('s',263,5);
   bitmod('s',264,5);
   bitmod('s',104,5);
   bitmod('s',99,5);
   bitmod('s',110,5);
   bitmod('s',187,5);
   bitmod('s',179,5);
   bitmod('s',178,5);
   bitmod('s',180,5);
   bitmod('s',282,5);
   bitmod('s',283,5);
   bitmod('s',284,5);
   bitmod('s',285,5);
   bitmod('s',286,5);
   bitmod('s',287,5);
   bitmod('s',288,5);
   bitmod('s',289,5);
   bitmod('s',290,5);
   bitmod('s',291,5);
   bitmod('s',292,5);
   bitmod('s',293,5);
   bitmod('s',294,5);
   bitmod('s',295,5);
   bitmod('s',296,5);
   bitmod('s',297,5);
   bitmod('s',298,5);
   bitmod('s',299,5);
   bitmod('s',300,5);
   bitmod('s',301,5);
   bitmod('s',302,5);
   bitmod('s',303,5);
   bitmod('s',304,5);
   bitmod('s',305,5);
   bitmod('s',306,5);
   bitmod('s',307,5);
   bitmod('s',308,5);
   bitmod('s',309,5);
   bitmod('s',310,5);
   bitmod('s',311,5);
   bitmod('s',312,5);
   bitmod('s',313,5);
   bitmod('s',314,5);
   bitmod('s',315,5);
   bitmod('s',316,5);
   bitmod('s',317,5);
   bitmod('s',318,5);
   bitmod('s',211,5);
return done;
}
#ifdef __STDC__
int p14(void)
#else
int p14()
#endif
{
int done=0;
   bitmod('s',94,6);
   bitmod('s',92,6);
   bitmod('s',95,6);
   bitmod('s',98,6);
   bitmod('s',124,6);
   bitmod('s',174,6);
   bitmod('s',191,6);
   bitmod('s',192,6);
return done;
}
#ifdef __STDC__
int p15(void)
#else
int p15()
#endif
{
int done=0;
   bitmod('s',105,9);
   bitmod('s',107,9);
   bitmod('s',108,9);
   bitmod('s',111,9);
   bitmod('s',112,9);
   bitmod('s',115,9);
   bitmod('s',120,9);
   bitmod('s',121,9);
   bitmod('s',123,9);
   bitmod('s',125,9);
   bitmod('s',142,9);
   bitmod('s',152,9);
   bitmod('s',153,9);
   bitmod('s',157,9);
   bitmod('s',171,9);
   bitmod('s',174,9);
   bitmod('s',177,9);
   bitmod('s',191,9);
   bitmod('s',192,9);
   bitmod('s',189,9);
   bitmod('s',194,9);
   bitmod('s',199,9);
   bitmod('s',200,9);
   bitmod('s',207,9);
   bitmod('s',208,9);
   bitmod('s',216,9);
   bitmod('s',217,9);
   bitmod('s',220,9);
   bitmod('s',221,9);
   bitmod('s',222,9);
   bitmod('s',279,9);
   bitmod('s',280,9);
   bitmod('s',281,9);
   bitmod('s',319,9);
   bitmod('s',330,9);
   bitmod('s',332,9);
return done;
}
#ifdef __STDC__
int p16(void)
#else
int p16()
#endif
{
int done=0;
   bitmod('s',43,2);
   bitmod('s',44,2);
   bitmod('s',45,2);
   bitmod('s',46,2);
   bitmod('s',47,2);
   bitmod('s',48,2);
   bitmod('s',49,2);
   bitmod('s',50,2);
   bitmod('s',52,2);
   bitmod('s',54,2);
   bitmod('s',57,2);
   bitmod('s',58,2);
   bitmod('s',59,2);
   bitmod('s',60,2);
   bitmod('s',62,2);
   bitmod('s',67,2);
   bitmod('s',65,2);
   bitmod('s',66,2);
   bitmod('s',63,2);
   bitmod('s',64,2);
   bitmod('s',41,2);
   bitmod('s',51,2);
   bitmod('s',42,2);
   bitmod('s',55,2);
   bitmod('s',56,2);
   bitmod('s',61,2);
return done;
}
#ifdef __STDC__
int p17(void)
#else
int p17()
#endif
{
int done=0;
   bitmod('s',48,4);
   bitmod('s',65,4);
   bitmod('s',70,4);
   bitmod('s',67,4);
   bitmod('s',87,4);
   bitmod('s',89,4);
   bitmod('s',41,4);
   bitmod('s',42,4);
   bitmod('s',56,4);
   bitmod('s',73,4);
   bitmod('s',61,4);
   bitmod('s',84,4);
return done;
}
#ifdef __STDC__
int p18(void)
#else
int p18()
#endif
{
int done=0;
   bitmod('s',21,5);
   bitmod('s',91,5);
   bitmod('s',19,5);
   bitmod('s',6,5);
   bitmod('s',16,5);
   bitmod('s',37,5);
   bitmod('s',76,5);
   bitmod('s',77,5);
   bitmod('s',23,5);
   bitmod('s',71,5);
   bitmod('s',26,5);
   bitmod('s',90,5);
   bitmod('s',24,5);
   bitmod('s',25,5);
   bitmod('s',80,8);
   bitmod('s',89,8);
return done;
}
#ifdef __STDC__
int p19(void)
#else
int p19()
#endif
{
int done=0;
   apport(68,94);
   apport(69,94);
   apport(3,99);
   apport(70,101);
   apport(72,102);
   apport(4,105);
   apport(71,104);
   apport(5,173);
   apport(75,175);
   apport(6,110);
   apport(7,107);
   apport(8,180);
   apport(76,182);
   apport(78,185);
   apport(80,94);
   apport(81,94);
   apport(10,114);
   apport(11,111);
   apport(12,189);
   apport(15,120);
   apport(17,176);
   apport(19,202);
   apport(20,199);
   apport(21,199);
   apport(37,254);
   apport(29,207);
   apport(33,264);
   apport(39,175);
   apport(43,109);
   apport(44,108);
   apport(45,115);
   apport(46,116);
   apport(47,117);
   apport(49,172);
   apport(50,174);
   apport(52,176);
   apport(54,179);
   apport(57,180);
   apport(60,251);
   apport(62,254);
   apport(64,328);
   apport(41,331);
   apport(40,331);
   apport(51,266);
   apport(88,275);
   apport(89,274);
   apport(65,300);
   apport(67,323);
   apport(34,267);
   apport(31,324);
   apport(32,321);
   apport(86,265);
   apport(23,277);
   apport(35,246);
   apport(36,246);
   apport(55,246);
   apport(42,269);
   apport(30,209);
   apport(13,211);
   apport(56,213);
   apport(66,250);
   apport(84,249);
   apport(24,218);
   apport(73,223);
   apport(61,194);
   apport(25,192);
return done;
}
#ifdef __STDC__
int p20(void)
#else
int p20()
#endif
{
int done=0;
   bitmod('s',3,3);
   bitmod('s',4,3);
   bitmod('s',7,3);
   bitmod('s',11,3);
   bitmod('s',15,3);
   bitmod('s',19,3);
   bitmod('s',20,3);
   bitmod('s',21,3);
   bitmod('s',22,3);
   bitmod('s',31,3);
   bitmod('s',34,3);
   bitmod('s',13,3);
   bitmod('s',29,3);
   bitmod('s',24,3);
return done;
}
#ifdef __STDC__
int p21(void)
#else
int p21()
#endif
{
int done=0;
   set('V',479,'c',35,NULL,NULL);
   set('V',480,'c',25,NULL,NULL);
   move(92,-1);
   value[467]=489;*bitword(467)=-1;
   value[464] = irand(10);
   value[464] += 15;
   set('V',449,'c',300,NULL,NULL);
   value[463] = irand(5);
   value[463] += 4;
   if (irand(100)<5) {
   value[477] = irand(400);
   value[477] += 100;
   } else {
   set('V',477,'c',0,NULL,NULL);
   }
   set('E',62,'c',1,NULL,NULL);
   set('E',13,'c',8,NULL,NULL);
   set('E',84,'c',1,NULL,NULL);
   set('V',454,'c',0,NULL,NULL);
   set('V',470,'c',7,NULL,NULL);
   say(0,490,0);
   p461(-1,566,-1,3,0,0);
return done;
}
#ifdef __STDC__
int p22(void)
#else
int p22()
#endif
{
int done=0;
   longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p24(void)
#else
int p24()
#endif
{
int done=0;
   int lval [1];
   short lbts [1];
   lval[0] = 0;
   lbts [0] = 0;
   if ((value[483]==1) ||
   value[483]==2) {
   set('V',483,'c',0,NULL,NULL);
   }
   if (value[483]==0) {
   return 0;
   }
   input(920);
   set('L',0,'v',483,lval, lbts);
   if (lval[0]==5) {
   set('V',483,'c',0,NULL,NULL);
   value[456] += 10;
   say(64,775,0);
   }
   if ((value[448]==0) ||
   KEY(442)) {
   set('V',484,'c',1,NULL,NULL);
   } else    if (anyof(369,443,393,-1)) {
   set('V',484,'c',0,NULL,NULL);
   } else {
   say(0,921,0);
   say(66,485,0);
   }
   set('V',448,'c',0,NULL,NULL);
   if (lval[0]==11) {
   p125();
   } else    if (lval[0]==7) {
   p311();
   } else    if (lval[0]==8) {
   p312();
   } else    if (lval[0]==9) {
   p314();
   } else    if (lval[0]==12) {
   p243();
   } else    if (lval[0]==13) {
   p244();
   } else    if (lval[0]==10) {
   special(24, &value[0]);
   (*procs[174])();
   } else    if (lval[0]==6) {
   (*procs[393])();
   }
   set('V',483,'c',0,NULL,NULL);
   if (lval[0]==16) {
   special(24, &value[0]);
   special(3,&value[0]);
   (*procs[337])();
   } else    if (lval[0]==15) {
   if (value[484]==0) {
   special(24, &value[0]);
   special(3,&value[0]);
   }
   say(2,467,0);
   move(value[444],-1);
   bitmod('s',evar(448),0);
   bitmod('c',evar(444),1);
   } else    if (lval[0]==14) {
   say(2,467,0);
   if (value[484]==0) {
   finita();
   }
   set('L',0,'c',0,lval, lbts);
   longjmp(loop_back,1);
   } else    if (lval[0]==4) {
   if (KEY(442)) {
   p461(-1,774,-1,5,0,0);
   }
   say(66,467,0);
   } else    if (lval[0]==3) {
   set('V',483,'c',0,NULL,NULL);
   if (value[484]==1) {
   say(64,492,0);
   }
   } else    longjmp(loop_back,1);
return done;
}
#ifdef __STDC__
int p25(void)
#else
int p25()
#endif
{
int done=0;
   value[450] = irand(100);
   if (bitest(evar(460),1)) {
   p544();
   }
   if (!(bitest(evar(448),0))) {
   if ((isnear(91,-1,-1)) &&
   irand(100)<value[479]) {
   p167();
   }
   return 0;
   }
   if (((bitest(evar(445),8)) &&
   (location[91]==value[445])) &&
   !(bitest(evar(460),5))) {
   move(value[445],-1);
   bitmod('c',evar(448),0);
   say(0,493,0);
   return 0;
   }
   if (isnear(13,-1,-1)) {
   p435();
   }
   bitmod('c',evar(448),0);
   value[481] = irand(6);
   value[450]=801;*bitword(450)=-1;
   value[481] += value[450];
   if (irand(100)<5) {
   value[481]=807;*bitword(481)=-1;
   }
   value[461] += 1;
   if (bitest(evar(460),0)) {
   set('V',450,'c',30,NULL,NULL);
   } else {
   set('V',450,'c',800,NULL,NULL);
   }
   if (value[461]==value[450]) {
   say(0,768,0);
   p205();
   }
   if (isnear(69,-1,-1)) {
   if (value[69]==1) {
   value[449] -= 1;
   if ((value[449]==40) ||
   value[449]==0) {
   p320();
   }}}
   if (!((location[90]==333))) {
   apport(90,value[444]);
   if (value[90]>-1) {
   say(0,853,0);
   }
   value[90] += 1;
   }
   if (((bitest(evar(444),1)) &&
   bitest(evar(448),1)) ||
   bitest(evar(448),2)) {
   set('V',451,'c',0,NULL,NULL);
   } else {
   set('V',451,'c',1,NULL,NULL);
   }
   if (((isnear(69,-1,-1)) &&
   value[69]==1) ||
   bitest(evar(444),0)) {
   say(2,444,0);
   if (bitest(evar(444),12)) {
   say(0,581,0);
   }
   if (bitest(evar(444),1)) {
   set('V',452,'c',2,NULL,NULL);
   } else {
   set('V',452,'c',3,NULL,NULL);
   }
   bitmod('s',evar(444),1);
   if (!((location[91]==333))) {
   if (!((bitest(evar(444),4)) ||
   bitest(evar(444),2))) {
   apport(91,value[444]);
   }}
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if ((isnear(value[450],-1,-1)) &&
   !have(value[450],-1,-1)) {
   bitmod('s',evar(450),1);
   if ((value[451]==1) &&
   !(bitest(evar(450),7))) {
   set('V',451,'c',0,NULL,NULL);
   say(0,488,0);
   }
   say(2,450,0);
   }}
   if (have(37,-1,-1)) {
   say(0,641,0);
   }
   } else {
   if (((bitest(evar(445),0)) ||
   irand(100)<75) ||
   bitest(evar(460),6)) {
   say(0,514,0);
   } else {
   say(0,521,0);
   p125();
   }}
   bitmod('c',evar(460),6);
   if ((value[HERE]==118)) {
   if (irand(100)<35) {
   say(0,502,0);
   }}
   if (isnear(90,-1,-1)) {
   value[90] += 1;
   if (value[90]>6) {
   p125();
   }}
   if (!(bitest(evar(444),4))) {
   value[464] -= value[452];
   if (value[464]<1) {
   p114();
   }}
   if (isnear(91,-1,-1)) {
   set('V',480,'c',50,NULL,NULL);
   p167();
   }
   if ((((location[69]==334)) &&
   (value[HERE]==92)) &&
   value[465]<4) {
   say(0,693,0);
   set('V',466,'c',1,NULL,NULL);
   p205();
   }
return done;
}
#ifdef __STDC__
int p26(void)
#else
int p26()
#endif
{
int done=0;
   if (bitest(evar(444),5)) {
   value[469] += 1;
   if (((value[469]>30) &&
   !(bitest(evar(444),7))) ||
   value[469]>50) {
   p243();
   }
   } else {
   set('V',469,'c',0,NULL,NULL);
   }
   if (value[16]==16) {
   apport(16,value[444]);
   }
   if (bitest(evar(448),5)) {
   bitmod('c',evar(448),5);
   set('V',454,'c',0,NULL,NULL);
   *bitword(450)= -1; value[450]=FOBJ-1; while (++value[450]<=LOBJ) {
   if ((have(value[450],-1,-1)) &&
   !(bitest(evar(450),9))) {
   value[454] += 1;
   }}}
   set('V',480,'c',25,NULL,NULL);
   input(0);
   set('V',479,'c',35,NULL,NULL);
   value[462] -= 1;
   value[459] += 1;
   if (value[448]==0) {
   longjmp(loop_back,1);
   }
   if (value[446]==9999) {
   say(0,562,0);
   longjmp(loop_back,1);
   }
   if (KEY(336)) {
   p460();
   }
   if (value[448]>1) {
   if (value[447]==9999) {
   value[450]=338;*bitword(450)=-1;
   if (value[446]>value[450]) {
   say(12,561,447);
   longjmp(loop_back,1);
   }}}
   if (value[444]<LPROC && value[444]>= 0) (*procs[value[444]])(); else pcall(value[444]);
   if (bitest(evar(446),13)) {
   if ((value[HERE]==value[446])) {
   say(0,640,0);
   } else {
   say(0,639,0);
   }
   } else {
   if (value[446]<LPROC && value[446]>= 0) (*procs[value[446]])(); else pcall(value[446]);
   if (bitest(evar(446),15)) {
   if (isnear(value[446],-1,-1)) {
   say(12,719,446);
   bitmod('s',evar(448),4);
   } else {
   say(12,527,446);
   }
   } else {
   p43();
   }}
   longjmp(loop_back,1);
return done;
}
