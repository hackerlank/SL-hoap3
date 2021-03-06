/* sine and cosine precomputation */
sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

sstate10th=Sin(state[10].th);
cstate10th=Cos(state[10].th);

sstate11th=Sin(state[11].th);
cstate11th=Cos(state[11].th);

sstate12th=Sin(state[12].th);
cstate12th=Cos(state[12].th);

sstate13th=Sin(state[13].th);
cstate13th=Cos(state[13].th);

sstate14th=Sin(state[14].th);
cstate14th=Cos(state[14].th);

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

sstate3th=Sin(state[3].th);
cstate3th=Cos(state[3].th);

sstate4th=Sin(state[4].th);
cstate4th=Cos(state[4].th);

sstate5th=Sin(state[5].th);
cstate5th=Cos(state[5].th);

sstate6th=Sin(state[6].th);
cstate6th=Cos(state[6].th);

sstate7th=Sin(state[7].th);
cstate7th=Cos(state[7].th);


/* rotation matrix sine and cosine precomputation */














rseff1a1=Sin(eff[1].a[1]);
rceff1a1=Cos(eff[1].a[1]);

rseff1a2=Sin(eff[1].a[2]);
rceff1a2=Cos(eff[1].a[2]);

rseff1a3=Sin(eff[1].a[3]);
rceff1a3=Cos(eff[1].a[3]);













rseff2a1=Sin(eff[2].a[1]);
rceff2a1=Cos(eff[2].a[1]);

rseff2a2=Sin(eff[2].a[2]);
rceff2a2=Cos(eff[2].a[2]);

rseff2a3=Sin(eff[2].a[3]);
rceff2a3=Cos(eff[2].a[3]);



biped_InvDynArtfunc1();

biped_InvDynArtfunc2();

biped_InvDynArtfunc3();

biped_InvDynArtfunc4();

biped_InvDynArtfunc5();

biped_InvDynArtfunc6();

biped_InvDynArtfunc7();

biped_InvDynArtfunc8();

biped_InvDynArtfunc9();

biped_InvDynArtfunc10();

biped_InvDynArtfunc11();

biped_InvDynArtfunc12();

biped_InvDynArtfunc13();

biped_InvDynArtfunc14();

biped_InvDynArtfunc15();

biped_InvDynArtfunc16();

biped_InvDynArtfunc17();

biped_InvDynArtfunc18();

biped_InvDynArtfunc19();

biped_InvDynArtfunc20();

biped_InvDynArtfunc21();

biped_InvDynArtfunc22();

biped_InvDynArtfunc23();

biped_InvDynArtfunc24();

biped_InvDynArtfunc25();

biped_InvDynArtfunc26();

biped_InvDynArtfunc27();

biped_InvDynArtfunc28();

biped_InvDynArtfunc29();

biped_InvDynArtfunc30();

biped_InvDynArtfunc31();

biped_InvDynArtfunc32();

biped_InvDynArtfunc33();

biped_InvDynArtfunc34();

biped_InvDynArtfunc35();

/* acceleration vectors, base acceleration, and joint torques */
/* now solve for base accelerations: -xp[0] = JA[0]*add[0]  */
/* Note: xp and JA are calculated above */
MY_MATRIX(JAmat,1,6,1,6);
for (i=1; i<=6; ++i)
   for (j=1; j<=6; ++j) 
      JAmat[i][j]=JA0[i][j];
my_inv_ludcmp_solve(JAmat,p0,6,a0);

if (freeze_base) for (i=1; i<=6; ++i) a0[i]=0.0;



baseo[0].qdd[1]=(-(baseo[0].ad[1]*baseo[0].qd[2]) - baseo[0].ad[2]*baseo[0].qd[3] - baseo[0].ad[3]*baseo[0].qd[4] - baseo[0].q[2]*(-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3]) - baseo[0].q[3]*(-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3]) - baseo[0].q[4]*(-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3]))/2.;
baseo[0].qdd[2]=(baseo[0].ad[1]*baseo[0].qd[1] - baseo[0].ad[3]*baseo[0].qd[3] + baseo[0].ad[2]*baseo[0].qd[4] + baseo[0].q[1]*(-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3]) + baseo[0].q[4]*(-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3]) - baseo[0].q[3]*(-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3]))/2.;
baseo[0].qdd[3]=(baseo[0].ad[2]*baseo[0].qd[1] + baseo[0].ad[3]*baseo[0].qd[2] - baseo[0].ad[1]*baseo[0].qd[4] - baseo[0].q[4]*(-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3]) + baseo[0].q[1]*(-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3]) + baseo[0].q[2]*(-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3]))/2.;
baseo[0].qdd[4]=(baseo[0].ad[3]*baseo[0].qd[1] - baseo[0].ad[2]*baseo[0].qd[2] + baseo[0].ad[1]*baseo[0].qd[3] + baseo[0].q[3]*(-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3]) - baseo[0].q[2]*(-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3]) + baseo[0].q[1]*(-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3]))/2.;
basec[0].xdd[1]=basec[0].xd[3]*baseo[0].ad[2] - basec[0].xd[2]*baseo[0].ad[3] - a0[4]*Si00[1][1] - a0[5]*Si00[1][2] - a0[6]*Si00[1][3] + basec[0].x[3]*(-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3]) - a0[1]*(-(basec[0].x[3]*Si00[2][1]) + basec[0].x[2]*Si00[3][1]) - a0[2]*(-(basec[0].x[3]*Si00[2][2]) + basec[0].x[2]*Si00[3][2]) - basec[0].x[2]*(-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3]) - a0[3]*(-(basec[0].x[3]*Si00[2][3]) + basec[0].x[2]*Si00[3][3]);
basec[0].xdd[2]=-(basec[0].xd[3]*baseo[0].ad[1]) + basec[0].xd[1]*baseo[0].ad[3] - basec[0].x[3]*(-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3]) - a0[4]*Si00[2][1] - a0[5]*Si00[2][2] - a0[6]*Si00[2][3] - a0[1]*(basec[0].x[3]*Si00[1][1] - basec[0].x[1]*Si00[3][1]) - a0[2]*(basec[0].x[3]*Si00[1][2] - basec[0].x[1]*Si00[3][2]) + basec[0].x[1]*(-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3]) - a0[3]*(basec[0].x[3]*Si00[1][3] - basec[0].x[1]*Si00[3][3]);
basec[0].xdd[3]=basec[0].xd[2]*baseo[0].ad[1] - basec[0].xd[1]*baseo[0].ad[2] + basec[0].x[2]*(-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3]) - a0[1]*(-(basec[0].x[2]*Si00[1][1]) + basec[0].x[1]*Si00[2][1]) - a0[2]*(-(basec[0].x[2]*Si00[1][2]) + basec[0].x[1]*Si00[2][2]) - basec[0].x[1]*(-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3]) - a0[3]*(-(basec[0].x[2]*Si00[1][3]) + basec[0].x[1]*Si00[2][3]) - a0[4]*Si00[3][1] - a0[5]*Si00[3][2] - a0[6]*Si00[3][3];
baseo[0].add[1]=-(a0[1]*Si00[1][1]) - a0[2]*Si00[1][2] - a0[3]*Si00[1][3];
baseo[0].add[2]=-(a0[1]*Si00[2][1]) - a0[2]*Si00[2][2] - a0[3]*Si00[2][3];
baseo[0].add[3]=-(a0[1]*Si00[3][1]) - a0[2]*Si00[3][2] - a0[3]*Si00[3][3];

a1[1]=c1[1] - a0[1]*S10[1][1] - a0[2]*S10[1][2];
a1[2]=c1[2] - a0[1]*S10[2][1] - a0[2]*S10[2][2];
a1[3]=state[15].thdd + a0[3];
a1[4]=c1[4] - PELVISOFFSET*a0[3]*S10[1][1] - a0[4]*S10[1][1] - a0[5]*S10[1][2];
a1[5]=c1[5] - PELVISOFFSET*a0[3]*S10[2][1] - a0[4]*S10[2][1] - a0[5]*S10[2][2];
a1[6]=-(PELVISOFFSET*a0[1]) + a0[6];

a2[1]=c2[1] + a1[1]*S21[1][1] + a1[3]*S21[1][3];
a2[2]=c2[2] + a1[1]*S21[2][1] + a1[3]*S21[2][3];
a2[3]=state[16].thdd - a1[2];
a2[4]=c2[4] - PELVIS2THORAX*a1[2]*S21[1][1] + a1[4]*S21[1][1] + a1[6]*S21[1][3];
a2[5]=c2[5] - PELVIS2THORAX*a1[2]*S21[2][1] + a1[4]*S21[2][1] + a1[6]*S21[2][3];
a2[6]=-(PELVIS2THORAX*a1[1]) - a1[5];

a3[1]=a2[1];
a3[2]=a2[3];
a3[3]=-a2[2];
a3[4]=THORAX2HEAD*a2[3] + a2[4];
a3[5]=-(THORAX2HEAD*a2[1]) + a2[6];
a3[6]=-a2[5];

a4[1]=c4[1] - a0[1]*S40[1][1] - a0[3]*S40[1][3];
a4[2]=c4[2] - a0[1]*S40[2][1] - a0[3]*S40[2][3];
a4[3]=state[9].thdd - a0[2];
a4[4]=c4[4] - a0[4]*S40[1][1] + XHIP*a0[2]*S40[1][3] - a0[6]*S40[1][3];
a4[5]=c4[5] - a0[4]*S40[2][1] + XHIP*a0[2]*S40[2][3] - a0[6]*S40[2][3];
a4[6]=-(XHIP*a0[3]) - a0[5];

a5[1]=c5[1] + a4[2]*S54[1][2] + a4[3]*S54[1][3];
a5[2]=c5[2] + a4[2]*S54[2][2] + a4[3]*S54[2][3];
a5[3]=state[8].thdd + a4[1];
a5[4]=c5[4] + a4[5]*S54[1][2] + a4[6]*S54[1][3];
a5[5]=c5[5] + a4[5]*S54[2][2] + a4[6]*S54[2][3];
a5[6]=a4[4];

a6[1]=c6[1] + a5[1]*S65[1][1] + a5[2]*S65[1][2] + a5[3]*S65[1][3];
a6[2]=c6[2] + a5[1]*S65[2][1] + a5[2]*S65[2][2] + a5[3]*S65[2][3];
a6[3]=state[10].thdd - 0.26723837607825685*a5[1] + 0.963630453208623*a5[2];
a6[4]=c6[4] + a5[4]*S65[1][1] + YHIP*a5[3]*S65[1][2] + a5[5]*S65[1][2] - YHIP*a5[2]*S65[1][3] + a5[6]*S65[1][3];
a6[5]=c6[5] + a5[4]*S65[2][1] + YHIP*a5[3]*S65[2][2] + a5[5]*S65[2][2] - YHIP*a5[2]*S65[2][3] + a5[6]*S65[2][3];
a6[6]=0.963630453208623*YHIP*a5[3] - 0.26723837607825685*a5[4] + 0.963630453208623*a5[5];

a7[1]=c7[1] + a6[1]*S76[1][1] + a6[3]*S76[1][3];
a7[2]=c7[2] + a6[1]*S76[2][1] + a6[3]*S76[2][3];
a7[3]=state[11].thdd + a6[2];
a7[4]=c7[4] + a6[4]*S76[1][1] + a6[6]*S76[1][3] + a6[2]*((UPPERLEG - 0.26723837607825685*YKNEE)*S76[1][1] - 0.963630453208623*YKNEE*S76[1][3]);
a7[5]=c7[5] + a6[4]*S76[2][1] + a6[6]*S76[2][3] + a6[2]*((UPPERLEG - 0.26723837607825685*YKNEE)*S76[2][1] - 0.963630453208623*YKNEE*S76[2][3]);
a7[6]=(-UPPERLEG + 0.26723837607825685*YKNEE)*a6[1] + 0.963630453208623*YKNEE*a6[3] + a6[5];

a8[1]=c8[1] + a7[1]*S87[1][1] + a7[3]*S87[1][3];
a8[2]=c8[2] + a7[1]*S87[2][1] + a7[3]*S87[2][3];
a8[3]=state[12].thdd - a7[2];
a8[4]=c8[4] + a7[4]*S87[1][1] + a7[6]*S87[1][3];
a8[5]=c8[5] + a7[4]*S87[2][1] + a7[6]*S87[2][3];
a8[6]=-a7[5];

a9[1]=c9[1] + a8[1]*S98[1][1] + a8[3]*S98[1][3];
a9[2]=c9[2] + a8[1]*S98[2][1] + a8[3]*S98[2][3];
a9[3]=state[13].thdd - a8[2];
a9[4]=c9[4] + LOWERLEG*a8[2]*S98[1][1] + a8[4]*S98[1][1] + a8[6]*S98[1][3];
a9[5]=c9[5] + LOWERLEG*a8[2]*S98[2][1] + a8[4]*S98[2][1] + a8[6]*S98[2][3];
a9[6]=LOWERLEG*a8[1] - a8[5];

a10[1]=c10[1] + a9[2]*S109[1][2] + a9[3]*S109[1][3];
a10[2]=c10[2] + a9[2]*S109[2][2] + a9[3]*S109[2][3];
a10[3]=state[14].thdd - a9[1];
a10[4]=c10[4] + a9[5]*S109[1][2] + a9[6]*S109[1][3];
a10[5]=c10[5] + a9[5]*S109[2][2] + a9[6]*S109[2][3];
a10[6]=-a9[4];

a11[1]=a10[1];
a11[2]=a10[2];
a11[3]=a10[3];
a11[4]=YTOE*a10[2] - ZTOE*a10[3] + a10[4];
a11[5]=-(YTOE*a10[1]) + XTOE*a10[3] + a10[5];
a11[6]=ZTOE*a10[1] - XTOE*a10[2] + a10[6];

a12[1]=a10[1];
a12[2]=a10[2];
a12[3]=a10[3];
a12[4]=YTOE*a10[2] - ZTOE*a10[3] + a10[4];
a12[5]=-(YTOE*a10[1]) - XTOE*a10[3] + a10[5];
a12[6]=ZTOE*a10[1] + XTOE*a10[2] + a10[6];

a13[1]=a10[1];
a13[2]=a10[2];
a13[3]=a10[3];
a13[4]=-(YHEEL*a10[2]) - ZHEEL*a10[3] + a10[4];
a13[5]=YHEEL*a10[1] + XHEEL*a10[3] + a10[5];
a13[6]=ZHEEL*a10[1] - XHEEL*a10[2] + a10[6];

a14[1]=a10[1];
a14[2]=a10[2];
a14[3]=a10[3];
a14[4]=-(YHEEL*a10[2]) - ZHEEL*a10[3] + a10[4];
a14[5]=YHEEL*a10[1] - XHEEL*a10[3] + a10[5];
a14[6]=ZHEEL*a10[1] + XHEEL*a10[2] + a10[6];

a15[1]=a10[1]*S1510[1][1] + a10[2]*S1510[1][2] + a10[3]*S1510[1][3];
a15[2]=a10[1]*S1510[2][1] + a10[2]*S1510[2][2] + a10[3]*S1510[2][3];
a15[3]=a10[1]*S1510[3][1] + a10[2]*S1510[3][2] + a10[3]*S1510[3][3];
a15[4]=a10[4]*S1510[1][1] + a10[5]*S1510[1][2] + a10[3]*(-(eff[1].x[2]*S1510[1][1]) + eff[1].x[1]*S1510[1][2]) + a10[6]*S1510[1][3] + a10[2]*(eff[1].x[3]*S1510[1][1] - eff[1].x[1]*S1510[1][3]) + a10[1]*(-(eff[1].x[3]*S1510[1][2]) + eff[1].x[2]*S1510[1][3]);
a15[5]=a10[4]*S1510[2][1] + a10[5]*S1510[2][2] + a10[3]*(-(eff[1].x[2]*S1510[2][1]) + eff[1].x[1]*S1510[2][2]) + a10[6]*S1510[2][3] + a10[2]*(eff[1].x[3]*S1510[2][1] - eff[1].x[1]*S1510[2][3]) + a10[1]*(-(eff[1].x[3]*S1510[2][2]) + eff[1].x[2]*S1510[2][3]);
a15[6]=a10[4]*S1510[3][1] + a10[5]*S1510[3][2] + a10[3]*(-(eff[1].x[2]*S1510[3][1]) + eff[1].x[1]*S1510[3][2]) + a10[6]*S1510[3][3] + a10[2]*(eff[1].x[3]*S1510[3][1] - eff[1].x[1]*S1510[3][3]) + a10[1]*(-(eff[1].x[3]*S1510[3][2]) + eff[1].x[2]*S1510[3][3]);

a16[1]=c16[1] - a0[1]*S160[1][1] - a0[3]*S160[1][3];
a16[2]=c16[2] - a0[1]*S160[2][1] - a0[3]*S160[2][3];
a16[3]=state[2].thdd + a0[2];
a16[4]=c16[4] - a0[4]*S160[1][1] - XHIP*a0[2]*S160[1][3] - a0[6]*S160[1][3];
a16[5]=c16[5] - a0[4]*S160[2][1] - XHIP*a0[2]*S160[2][3] - a0[6]*S160[2][3];
a16[6]=-(XHIP*a0[3]) + a0[5];

a17[1]=c17[1] + a16[2]*S1716[1][2] + a16[3]*S1716[1][3];
a17[2]=c17[2] + a16[2]*S1716[2][2] + a16[3]*S1716[2][3];
a17[3]=state[1].thdd + a16[1];
a17[4]=c17[4] + a16[5]*S1716[1][2] + a16[6]*S1716[1][3];
a17[5]=c17[5] + a16[5]*S1716[2][2] + a16[6]*S1716[2][3];
a17[6]=a16[4];

a18[1]=c18[1] + a17[1]*S1817[1][1] + a17[2]*S1817[1][2] + a17[3]*S1817[1][3];
a18[2]=c18[2] + a17[1]*S1817[2][1] + a17[2]*S1817[2][2] + a17[3]*S1817[2][3];
a18[3]=state[3].thdd - 0.26723837607825685*a17[1] + 0.963630453208623*a17[2];
a18[4]=c18[4] + a17[4]*S1817[1][1] - YHIP*a17[3]*S1817[1][2] + a17[5]*S1817[1][2] + YHIP*a17[2]*S1817[1][3] + a17[6]*S1817[1][3];
a18[5]=c18[5] + a17[4]*S1817[2][1] - YHIP*a17[3]*S1817[2][2] + a17[5]*S1817[2][2] + YHIP*a17[2]*S1817[2][3] + a17[6]*S1817[2][3];
a18[6]=-0.963630453208623*YHIP*a17[3] - 0.26723837607825685*a17[4] + 0.963630453208623*a17[5];

a19[1]=c19[1] + a18[1]*S1918[1][1] + a18[3]*S1918[1][3];
a19[2]=c19[2] + a18[1]*S1918[2][1] + a18[3]*S1918[2][3];
a19[3]=state[4].thdd + a18[2];
a19[4]=c19[4] + a18[4]*S1918[1][1] + a18[6]*S1918[1][3] + a18[2]*((-UPPERLEG + 0.26723837607825685*YKNEE)*S1918[1][1] + 0.963630453208623*YKNEE*S1918[1][3]);
a19[5]=c19[5] + a18[4]*S1918[2][1] + a18[6]*S1918[2][3] + a18[2]*((-UPPERLEG + 0.26723837607825685*YKNEE)*S1918[2][1] + 0.963630453208623*YKNEE*S1918[2][3]);
a19[6]=(UPPERLEG - 0.26723837607825685*YKNEE)*a18[1] - 0.963630453208623*YKNEE*a18[3] + a18[5];

a20[1]=c20[1] + a19[1]*S2019[1][1] + a19[3]*S2019[1][3];
a20[2]=c20[2] + a19[1]*S2019[2][1] + a19[3]*S2019[2][3];
a20[3]=state[5].thdd + a19[2];
a20[4]=c20[4] + a19[4]*S2019[1][1] + a19[6]*S2019[1][3];
a20[5]=c20[5] + a19[4]*S2019[2][1] + a19[6]*S2019[2][3];
a20[6]=a19[5];

a21[1]=c21[1] + a20[1]*S2120[1][1] + a20[3]*S2120[1][3];
a21[2]=c21[2] + a20[1]*S2120[2][1] + a20[3]*S2120[2][3];
a21[3]=state[6].thdd + a20[2];
a21[4]=c21[4] - LOWERLEG*a20[2]*S2120[1][1] + a20[4]*S2120[1][1] + a20[6]*S2120[1][3];
a21[5]=c21[5] - LOWERLEG*a20[2]*S2120[2][1] + a20[4]*S2120[2][1] + a20[6]*S2120[2][3];
a21[6]=LOWERLEG*a20[1] + a20[5];

a22[1]=c22[1] + a21[2]*S2221[1][2] + a21[3]*S2221[1][3];
a22[2]=c22[2] + a21[2]*S2221[2][2] + a21[3]*S2221[2][3];
a22[3]=state[7].thdd + a21[1];
a22[4]=c22[4] + a21[5]*S2221[1][2] + a21[6]*S2221[1][3];
a22[5]=c22[5] + a21[5]*S2221[2][2] + a21[6]*S2221[2][3];
a22[6]=a21[4];

a23[1]=a22[1];
a23[2]=a22[2];
a23[3]=a22[3];
a23[4]=-(YTOE*a22[2]) - ZTOE*a22[3] + a22[4];
a23[5]=YTOE*a22[1] - XTOE*a22[3] + a22[5];
a23[6]=ZTOE*a22[1] + XTOE*a22[2] + a22[6];

a24[1]=a22[1];
a24[2]=a22[2];
a24[3]=a22[3];
a24[4]=-(YTOE*a22[2]) - ZTOE*a22[3] + a22[4];
a24[5]=YTOE*a22[1] + XTOE*a22[3] + a22[5];
a24[6]=ZTOE*a22[1] - XTOE*a22[2] + a22[6];

a25[1]=a22[1];
a25[2]=a22[2];
a25[3]=a22[3];
a25[4]=YHEEL*a22[2] - ZHEEL*a22[3] + a22[4];
a25[5]=-(YHEEL*a22[1]) - XHEEL*a22[3] + a22[5];
a25[6]=ZHEEL*a22[1] + XHEEL*a22[2] + a22[6];

a26[1]=a22[1];
a26[2]=a22[2];
a26[3]=a22[3];
a26[4]=YHEEL*a22[2] - ZHEEL*a22[3] + a22[4];
a26[5]=-(YHEEL*a22[1]) + XHEEL*a22[3] + a22[5];
a26[6]=ZHEEL*a22[1] - XHEEL*a22[2] + a22[6];

a27[1]=a22[1]*S2722[1][1] + a22[2]*S2722[1][2] + a22[3]*S2722[1][3];
a27[2]=a22[1]*S2722[2][1] + a22[2]*S2722[2][2] + a22[3]*S2722[2][3];
a27[3]=a22[1]*S2722[3][1] + a22[2]*S2722[3][2] + a22[3]*S2722[3][3];
a27[4]=a22[4]*S2722[1][1] + a22[5]*S2722[1][2] + a22[3]*(-(eff[2].x[2]*S2722[1][1]) + eff[2].x[1]*S2722[1][2]) + a22[6]*S2722[1][3] + a22[2]*(eff[2].x[3]*S2722[1][1] - eff[2].x[1]*S2722[1][3]) + a22[1]*(-(eff[2].x[3]*S2722[1][2]) + eff[2].x[2]*S2722[1][3]);
a27[5]=a22[4]*S2722[2][1] + a22[5]*S2722[2][2] + a22[3]*(-(eff[2].x[2]*S2722[2][1]) + eff[2].x[1]*S2722[2][2]) + a22[6]*S2722[2][3] + a22[2]*(eff[2].x[3]*S2722[2][1] - eff[2].x[1]*S2722[2][3]) + a22[1]*(-(eff[2].x[3]*S2722[2][2]) + eff[2].x[2]*S2722[2][3]);
a27[6]=a22[4]*S2722[3][1] + a22[5]*S2722[3][2] + a22[3]*(-(eff[2].x[2]*S2722[3][1]) + eff[2].x[1]*S2722[3][2]) + a22[6]*S2722[3][3] + a22[2]*(eff[2].x[3]*S2722[3][1] - eff[2].x[1]*S2722[3][3]) + a22[1]*(-(eff[2].x[3]*S2722[3][2]) + eff[2].x[2]*S2722[3][3]);

/* inverse dynamics torques */
state[15].uff=p1[6] + a1[1]*JA1[6][1] + a1[2]*JA1[6][2] + a1[3]*JA1[6][3] + a1[4]*JA1[6][4] + a1[5]*JA1[6][5] + a1[6]*JA1[6][6];
state[16].uff=p2[6] + a2[1]*JA2[6][1] + a2[2]*JA2[6][2] + a2[3]*JA2[6][3] + a2[4]*JA2[6][4] + a2[5]*JA2[6][5];
state[9].uff=p4[6] + a4[1]*JA4[6][1] + a4[2]*JA4[6][2] + a4[3]*JA4[6][3] + a4[4]*JA4[6][4] + a4[5]*JA4[6][5] + a4[6]*JA4[6][6];
state[8].uff=p5[6] + a5[1]*JA5[6][1] + a5[2]*JA5[6][2] + a5[3]*JA5[6][3] + a5[4]*JA5[6][4] + a5[5]*JA5[6][5] + a5[6]*JA5[6][6];
state[10].uff=p6[6] + a6[1]*JA6[6][1] + a6[2]*JA6[6][2] + a6[3]*JA6[6][3] + a6[4]*JA6[6][4] + a6[5]*JA6[6][5] + a6[6]*JA6[6][6];
state[11].uff=p7[6] + a7[1]*JA7[6][1] + a7[2]*JA7[6][2] + a7[3]*JA7[6][3] + a7[4]*JA7[6][4] + a7[5]*JA7[6][5] + a7[6]*JA7[6][6];
state[12].uff=p8[6] + a8[1]*JA8[6][1] + a8[2]*JA8[6][2] + a8[3]*JA8[6][3] + a8[4]*JA8[6][4] + a8[5]*JA8[6][5] + a8[6]*JA8[6][6];
state[13].uff=p9[6] + a9[1]*JA9[6][1] + a9[2]*JA9[6][2] + a9[3]*JA9[6][3] + a9[4]*JA9[6][4] + a9[5]*JA9[6][5] + a9[6]*JA9[6][6];
state[14].uff=p10[6] + a10[1]*JA10[6][1] + a10[2]*JA10[6][2] + a10[3]*JA10[6][3] + a10[4]*JA10[6][4] + a10[5]*JA10[6][5] + a10[6]*JA10[6][6];
state[2].uff=p16[6] + a16[1]*JA16[6][1] + a16[2]*JA16[6][2] + a16[3]*JA16[6][3] + a16[4]*JA16[6][4] + a16[5]*JA16[6][5] + a16[6]*JA16[6][6];
state[1].uff=p17[6] + a17[1]*JA17[6][1] + a17[2]*JA17[6][2] + a17[3]*JA17[6][3] + a17[4]*JA17[6][4] + a17[5]*JA17[6][5] + a17[6]*JA17[6][6];
state[3].uff=p18[6] + a18[1]*JA18[6][1] + a18[2]*JA18[6][2] + a18[3]*JA18[6][3] + a18[4]*JA18[6][4] + a18[5]*JA18[6][5] + a18[6]*JA18[6][6];
state[4].uff=p19[6] + a19[1]*JA19[6][1] + a19[2]*JA19[6][2] + a19[3]*JA19[6][3] + a19[4]*JA19[6][4] + a19[5]*JA19[6][5] + a19[6]*JA19[6][6];
state[5].uff=p20[6] + a20[1]*JA20[6][1] + a20[2]*JA20[6][2] + a20[3]*JA20[6][3] + a20[4]*JA20[6][4] + a20[5]*JA20[6][5] + a20[6]*JA20[6][6];
state[6].uff=p21[6] + a21[1]*JA21[6][1] + a21[2]*JA21[6][2] + a21[3]*JA21[6][3] + a21[4]*JA21[6][4] + a21[5]*JA21[6][5] + a21[6]*JA21[6][6];
state[7].uff=p22[6] + a22[1]*JA22[6][1] + a22[2]*JA22[6][2] + a22[3]*JA22[6][3] + a22[4]*JA22[6][4] + a22[5]*JA22[6][5] + a22[6]*JA22[6][6];

