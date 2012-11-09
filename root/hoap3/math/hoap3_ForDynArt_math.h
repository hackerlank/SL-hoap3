/* sine and cosine precomputation */
sstate22th=Sin(state[22].th);
cstate22th=Cos(state[22].th);

sstate23th=Sin(state[23].th);
cstate23th=Cos(state[23].th);

sstate24th=Sin(state[24].th);
cstate24th=Cos(state[24].th);

sstate7th=Sin(state[7].th);
cstate7th=Cos(state[7].th);

sstate8th=Sin(state[8].th);
cstate8th=Cos(state[8].th);

sstate9th=Sin(state[9].th);
cstate9th=Cos(state[9].th);

sstate10th=Sin(state[10].th);
cstate10th=Cos(state[10].th);

sstate25th=Sin(state[25].th);
cstate25th=Cos(state[25].th);

sstate26th=Sin(state[26].th);
cstate26th=Cos(state[26].th);

sstate17th=Sin(state[17].th);
cstate17th=Cos(state[17].th);

sstate18th=Sin(state[18].th);
cstate18th=Cos(state[18].th);

sstate19th=Sin(state[19].th);
cstate19th=Cos(state[19].th);

sstate20th=Sin(state[20].th);
cstate20th=Cos(state[20].th);

sstate27th=Sin(state[27].th);
cstate27th=Cos(state[27].th);

sstate28th=Sin(state[28].th);
cstate28th=Cos(state[28].th);

sstate21th=Sin(state[21].th);
cstate21th=Cos(state[21].th);

sstate1th=Sin(state[1].th);
cstate1th=Cos(state[1].th);

sstate2th=Sin(state[2].th);
cstate2th=Cos(state[2].th);

sstate3th=Sin(state[3].th);
cstate3th=Cos(state[3].th);

sstate4th=Sin(state[4].th);
cstate4th=Cos(state[4].th);

sstate5th=Sin(state[5].th);
cstate5th=Cos(state[5].th);

sstate6th=Sin(state[6].th);
cstate6th=Cos(state[6].th);

sstate11th=Sin(state[11].th);
cstate11th=Cos(state[11].th);

sstate12th=Sin(state[12].th);
cstate12th=Cos(state[12].th);

sstate13th=Sin(state[13].th);
cstate13th=Cos(state[13].th);

sstate14th=Sin(state[14].th);
cstate14th=Cos(state[14].th);

sstate15th=Sin(state[15].th);
cstate15th=Cos(state[15].th);

sstate16th=Sin(state[16].th);
cstate16th=Cos(state[16].th);


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



hoap3_ForDynArtfunc1();

hoap3_ForDynArtfunc2();

hoap3_ForDynArtfunc3();

hoap3_ForDynArtfunc4();

hoap3_ForDynArtfunc5();

hoap3_ForDynArtfunc6();

hoap3_ForDynArtfunc7();

hoap3_ForDynArtfunc8();

hoap3_ForDynArtfunc9();

hoap3_ForDynArtfunc10();

hoap3_ForDynArtfunc11();

hoap3_ForDynArtfunc12();

hoap3_ForDynArtfunc13();

hoap3_ForDynArtfunc14();

hoap3_ForDynArtfunc15();

hoap3_ForDynArtfunc16();

hoap3_ForDynArtfunc17();

hoap3_ForDynArtfunc18();

hoap3_ForDynArtfunc19();

hoap3_ForDynArtfunc20();

hoap3_ForDynArtfunc21();

hoap3_ForDynArtfunc22();

hoap3_ForDynArtfunc23();

hoap3_ForDynArtfunc24();

hoap3_ForDynArtfunc25();

hoap3_ForDynArtfunc26();

hoap3_ForDynArtfunc27();

hoap3_ForDynArtfunc28();

hoap3_ForDynArtfunc29();

hoap3_ForDynArtfunc30();

hoap3_ForDynArtfunc31();

hoap3_ForDynArtfunc32();

hoap3_ForDynArtfunc33();

hoap3_ForDynArtfunc34();

hoap3_ForDynArtfunc35();

hoap3_ForDynArtfunc36();

hoap3_ForDynArtfunc37();

hoap3_ForDynArtfunc38();

hoap3_ForDynArtfunc39();

hoap3_ForDynArtfunc40();

hoap3_ForDynArtfunc41();

hoap3_ForDynArtfunc42();

hoap3_ForDynArtfunc43();

hoap3_ForDynArtfunc44();

hoap3_ForDynArtfunc45();

hoap3_ForDynArtfunc46();

hoap3_ForDynArtfunc47();

hoap3_ForDynArtfunc48();

hoap3_ForDynArtfunc49();

hoap3_ForDynArtfunc50();

hoap3_ForDynArtfunc51();

hoap3_ForDynArtfunc52();

hoap3_ForDynArtfunc53();

/* acceleration vectors and joint accelerations */
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

a1[1]=-a0[1];
a1[2]=-a0[2];
a1[3]=-a0[3];
a1[4]=-(BODYLINK1*a0[2]) - a0[4];
a1[5]=BODYLINK1*a0[1] - a0[5];
a1[6]=-a0[6];

state[22].thdd=(-(a1[6]*h2[3]) - a1[3]*h2[6] + u[2] - a1[4]*(h2[1]*S21[1][1] + h2[2]*S21[2][1]) - a1[1]*(h2[4]*S21[1][1] + h2[5]*S21[2][1]) - a1[5]*(h2[1]*S21[1][2] + h2[2]*S21[2][2]) - a1[2]*(h2[4]*S21[1][2] + h2[5]*S21[2][2]))/d[2];

a2[1]=c2[1] + a1[1]*S21[1][1] + a1[2]*S21[1][2];
a2[2]=c2[2] + a1[1]*S21[2][1] + a1[2]*S21[2][2];
a2[3]=state[22].thdd + a1[3];
a2[4]=c2[4] + a1[4]*S21[1][1] + a1[5]*S21[1][2];
a2[5]=c2[5] + a1[4]*S21[2][1] + a1[5]*S21[2][2];
a2[6]=a1[6];

state[23].thdd=(-(a2[5]*h3[3]) + u[3] - a2[4]*(h3[1]*S32[1][1] + h3[2]*S32[2][1]) - a2[1]*(-(HEADLINK1*h3[3]) + h3[4]*S32[1][1] + h3[5]*S32[2][1]) - a2[6]*(h3[1]*S32[1][3] + h3[2]*S32[2][3]) - a2[3]*(HEADLINK2*h3[3] + h3[4]*S32[1][3] + h3[5]*S32[2][3]) - a2[2]*(h3[6] + h3[1]*(HEADLINK1*S32[1][1] - HEADLINK2*S32[1][3]) + h3[2]*(HEADLINK1*S32[2][1] - HEADLINK2*S32[2][3])))/d[3];

a3[1]=c3[1] + a2[1]*S32[1][1] + a2[3]*S32[1][3];
a3[2]=c3[2] + a2[1]*S32[2][1] + a2[3]*S32[2][3];
a3[3]=state[23].thdd + a2[2];
a3[4]=c3[4] + a2[4]*S32[1][1] + a2[6]*S32[1][3] + a2[2]*(HEADLINK1*S32[1][1] - HEADLINK2*S32[1][3]);
a3[5]=c3[5] + a2[4]*S32[2][1] + a2[6]*S32[2][3] + a2[2]*(HEADLINK1*S32[2][1] - HEADLINK2*S32[2][3]);
a3[6]=-(HEADLINK1*a2[1]) + HEADLINK2*a2[3] + a2[5];

state[24].thdd=(-(a3[1]*h4[4]) + u[4] - a3[5]*(h4[2]*S43[2][2] + h4[3]*S43[3][2]) - a3[2]*(h4[5]*S43[2][2] + h4[6]*S43[3][2]) - a3[6]*(h4[2]*S43[2][3] + h4[3]*S43[3][3]) - a3[3]*(h4[5]*S43[2][3] + h4[6]*S43[3][3]))/d[4];

a4[1]=state[24].thdd + a3[1];
a4[2]=c4[2] + a3[2]*S43[2][2] + a3[3]*S43[2][3];
a4[3]=c4[3] + a3[2]*S43[3][2] + a3[3]*S43[3][3];
a4[4]=a3[4];
a4[5]=c4[5] + a3[5]*S43[2][2] + a3[6]*S43[2][3];
a4[6]=c4[6] + a3[5]*S43[3][2] + a3[6]*S43[3][3];

state[7].thdd=(-(a1[5]*h5[3]) - a1[2]*h5[6] + u[5] - a1[4]*(h5[1]*S51[1][1] + h5[2]*S51[2][1]) - a1[6]*(h5[1]*S51[1][3] + h5[2]*S51[2][3]) - a1[1]*(h5[4]*S51[1][1] - ARMLINK1*h5[1]*S51[1][3] + h5[5]*S51[2][1] - ARMLINK1*h5[2]*S51[2][3]) - a1[3]*(ARMLINK1*h5[1]*S51[1][1] + h5[4]*S51[1][3] + ARMLINK1*h5[2]*S51[2][1] + h5[5]*S51[2][3]))/d[5];

a5[1]=c5[1] + a1[1]*S51[1][1] + a1[3]*S51[1][3];
a5[2]=c5[2] + a1[1]*S51[2][1] + a1[3]*S51[2][3];
a5[3]=state[7].thdd + a1[2];
a5[4]=c5[4] + ARMLINK1*a1[3]*S51[1][1] + a1[4]*S51[1][1] - ARMLINK1*a1[1]*S51[1][3] + a1[6]*S51[1][3];
a5[5]=c5[5] + ARMLINK1*a1[3]*S51[2][1] + a1[4]*S51[2][1] - ARMLINK1*a1[1]*S51[2][3] + a1[6]*S51[2][3];
a5[6]=a1[5];

state[8].thdd=(a5[5]*h6[3] + a5[2]*h6[6] + u[6] - a5[4]*(h6[1]*S65[1][1] + h6[2]*S65[2][1]) - a5[1]*(h6[4]*S65[1][1] + h6[5]*S65[2][1]) - a5[6]*(h6[1]*S65[1][3] + h6[2]*S65[2][3]) - a5[3]*(h6[4]*S65[1][3] + h6[5]*S65[2][3]))/d[6];

a6[1]=c6[1] + a5[1]*S65[1][1] + a5[3]*S65[1][3];
a6[2]=c6[2] + a5[1]*S65[2][1] + a5[3]*S65[2][3];
a6[3]=state[8].thdd - a5[2];
a6[4]=c6[4] + a5[4]*S65[1][1] + a5[6]*S65[1][3];
a6[5]=c6[5] + a5[4]*S65[2][1] + a5[6]*S65[2][3];
a6[6]=-a5[5];

state[9].thdd=(-(a6[6]*h7[1]) + u[7] - a6[4]*(h7[2]*S76[2][1] + h7[3]*S76[3][1]) - a6[3]*(h7[4] + ARMLINK2*h7[2]*S76[2][1] + ARMLINK2*h7[3]*S76[3][1]) - a6[1]*(-(ARMLINK2*h7[1]) + h7[5]*S76[2][1] + h7[6]*S76[3][1]) - a6[5]*(h7[2]*S76[2][2] + h7[3]*S76[3][2]) - a6[2]*(h7[5]*S76[2][2] + h7[6]*S76[3][2]))/d[7];

a7[1]=state[9].thdd + a6[3];
a7[2]=c7[2] + a6[1]*S76[2][1] + a6[2]*S76[2][2];
a7[3]=c7[3] + a6[1]*S76[3][1] + a6[2]*S76[3][2];
a7[4]=-(ARMLINK2*a6[1]) + a6[6];
a7[5]=c7[5] + ARMLINK2*a6[3]*S76[2][1] + a6[4]*S76[2][1] + a6[5]*S76[2][2];
a7[6]=c7[6] + ARMLINK2*a6[3]*S76[3][1] + a6[4]*S76[3][1] + a6[5]*S76[3][2];

state[10].thdd=(a7[5]*h8[3] + a7[2]*h8[6] + u[8] - a7[4]*(h8[1]*S87[1][1] + h8[2]*S87[2][1]) - a7[1]*(h8[4]*S87[1][1] + h8[5]*S87[2][1]) - a7[6]*(h8[1]*S87[1][3] + h8[2]*S87[2][3]) - a7[3]*(h8[4]*S87[1][3] + h8[5]*S87[2][3]))/d[8];

a8[1]=c8[1] + a7[1]*S87[1][1] + a7[3]*S87[1][3];
a8[2]=c8[2] + a7[1]*S87[2][1] + a7[3]*S87[2][3];
a8[3]=state[10].thdd - a7[2];
a8[4]=c8[4] + a7[4]*S87[1][1] + a7[6]*S87[1][3];
a8[5]=c8[5] + a7[4]*S87[2][1] + a7[6]*S87[2][3];
a8[6]=-a7[5];

state[25].thdd=(-(a8[5]*h9[3]) - a8[2]*h9[6] + u[9] - a8[4]*(h9[1]*S98[1][1] + h9[2]*S98[2][1]) - a8[6]*(h9[1]*S98[1][3] + h9[2]*S98[2][3]) - a8[1]*(h9[4]*S98[1][1] + ARMLINK3*h9[1]*S98[1][3] + h9[5]*S98[2][1] + ARMLINK3*h9[2]*S98[2][3]) - a8[3]*(-(ARMLINK3*h9[1]*S98[1][1]) + h9[4]*S98[1][3] - ARMLINK3*h9[2]*S98[2][1] + h9[5]*S98[2][3]))/d[9];

a9[1]=c9[1] + a8[1]*S98[1][1] + a8[3]*S98[1][3];
a9[2]=c9[2] + a8[1]*S98[2][1] + a8[3]*S98[2][3];
a9[3]=state[25].thdd + a8[2];
a9[4]=c9[4] - ARMLINK3*a8[3]*S98[1][1] + a8[4]*S98[1][1] + ARMLINK3*a8[1]*S98[1][3] + a8[6]*S98[1][3];
a9[5]=c9[5] - ARMLINK3*a8[3]*S98[2][1] + a8[4]*S98[2][1] + ARMLINK3*a8[1]*S98[2][3] + a8[6]*S98[2][3];
a9[6]=a8[5];

a10[1]=a9[1];
a10[2]=a9[2];
a10[3]=a9[3];
a10[4]=-(PALMOFF*a9[3]) + a9[4];
a10[5]=a9[5];
a10[6]=PALMOFF*a9[1] + a9[6];

a11[1]=a10[1];
a11[2]=a10[2];
a11[3]=a10[3];
a11[4]=PALMTIP*a10[2] + a10[4];
a11[5]=-(PALMTIP*a10[1]) + a10[5];
a11[6]=a10[6];

state[26].thdd=(u[12] - a9[5]*(h12[1]*S129[1][2] + h12[2]*S129[2][2]) - a9[1]*(-h12[6] - GRIPROOT*h12[1]*S129[1][2] - GRIPROOT*h12[2]*S129[2][2]) - a9[2]*(h12[4]*S129[1][2] + h12[5]*S129[2][2]) - a9[6]*(h12[1]*S129[1][3] + h12[2]*S129[2][3]) - a9[3]*(h12[4]*S129[1][3] + h12[5]*S129[2][3]))/d[12];

a12[1]=c12[1] + a9[2]*S129[1][2] + a9[3]*S129[1][3];
a12[2]=c12[2] + a9[2]*S129[2][2] + a9[3]*S129[2][3];
a12[3]=state[26].thdd - a9[1];
a12[4]=c12[4] - GRIPROOT*a9[1]*S129[1][2] + a9[5]*S129[1][2] + a9[6]*S129[1][3];
a12[5]=c12[5] - GRIPROOT*a9[1]*S129[2][2] + a9[5]*S129[2][2] + a9[6]*S129[2][3];
a12[6]=-(GRIPROOT*a9[2]) - a9[4];

a13[1]=a12[1];
a13[2]=a12[2];
a13[3]=a12[3];
a13[4]=THUMBOFF*a12[3] + a12[4];
a13[5]=THUMBLEN*a12[3] + a12[5];
a13[6]=-(THUMBOFF*a12[1]) - THUMBLEN*a12[2] + a12[6];

state[17].thdd=(-(a1[5]*h14[3]) - a1[2]*h14[6] + u[14] - a1[4]*(h14[1]*S141[1][1] + h14[2]*S141[2][1]) - a1[6]*(h14[1]*S141[1][3] + h14[2]*S141[2][3]) - a1[1]*(h14[4]*S141[1][1] + ARMLINK1*h14[1]*S141[1][3] + h14[5]*S141[2][1] + ARMLINK1*h14[2]*S141[2][3]) - a1[3]*(-(ARMLINK1*h14[1]*S141[1][1]) + h14[4]*S141[1][3] - ARMLINK1*h14[2]*S141[2][1] + h14[5]*S141[2][3]))/d[14];

a14[1]=c14[1] + a1[1]*S141[1][1] + a1[3]*S141[1][3];
a14[2]=c14[2] + a1[1]*S141[2][1] + a1[3]*S141[2][3];
a14[3]=state[17].thdd + a1[2];
a14[4]=c14[4] - ARMLINK1*a1[3]*S141[1][1] + a1[4]*S141[1][1] + ARMLINK1*a1[1]*S141[1][3] + a1[6]*S141[1][3];
a14[5]=c14[5] - ARMLINK1*a1[3]*S141[2][1] + a1[4]*S141[2][1] + ARMLINK1*a1[1]*S141[2][3] + a1[6]*S141[2][3];
a14[6]=a1[5];

state[18].thdd=(a14[5]*h15[3] + a14[2]*h15[6] + u[15] - a14[4]*(h15[1]*S1514[1][1] + h15[2]*S1514[2][1]) - a14[1]*(h15[4]*S1514[1][1] + h15[5]*S1514[2][1]) - a14[6]*(h15[1]*S1514[1][3] + h15[2]*S1514[2][3]) - a14[3]*(h15[4]*S1514[1][3] + h15[5]*S1514[2][3]))/d[15];

a15[1]=c15[1] + a14[1]*S1514[1][1] + a14[3]*S1514[1][3];
a15[2]=c15[2] + a14[1]*S1514[2][1] + a14[3]*S1514[2][3];
a15[3]=state[18].thdd - a14[2];
a15[4]=c15[4] + a14[4]*S1514[1][1] + a14[6]*S1514[1][3];
a15[5]=c15[5] + a14[4]*S1514[2][1] + a14[6]*S1514[2][3];
a15[6]=-a14[5];

state[19].thdd=(-(a15[6]*h16[1]) + u[16] - a15[4]*(h16[2]*S1615[2][1] + h16[3]*S1615[3][1]) - a15[3]*(h16[4] + ARMLINK2*h16[2]*S1615[2][1] + ARMLINK2*h16[3]*S1615[3][1]) - a15[1]*(-(ARMLINK2*h16[1]) + h16[5]*S1615[2][1] + h16[6]*S1615[3][1]) - a15[5]*(h16[2]*S1615[2][2] + h16[3]*S1615[3][2]) - a15[2]*(h16[5]*S1615[2][2] + h16[6]*S1615[3][2]))/d[16];

a16[1]=state[19].thdd + a15[3];
a16[2]=c16[2] + a15[1]*S1615[2][1] + a15[2]*S1615[2][2];
a16[3]=c16[3] + a15[1]*S1615[3][1] + a15[2]*S1615[3][2];
a16[4]=-(ARMLINK2*a15[1]) + a15[6];
a16[5]=c16[5] + ARMLINK2*a15[3]*S1615[2][1] + a15[4]*S1615[2][1] + a15[5]*S1615[2][2];
a16[6]=c16[6] + ARMLINK2*a15[3]*S1615[3][1] + a15[4]*S1615[3][1] + a15[5]*S1615[3][2];

state[20].thdd=(a16[5]*h17[3] + a16[2]*h17[6] + u[17] - a16[4]*(h17[1]*S1716[1][1] + h17[2]*S1716[2][1]) - a16[1]*(h17[4]*S1716[1][1] + h17[5]*S1716[2][1]) - a16[6]*(h17[1]*S1716[1][3] + h17[2]*S1716[2][3]) - a16[3]*(h17[4]*S1716[1][3] + h17[5]*S1716[2][3]))/d[17];

a17[1]=c17[1] + a16[1]*S1716[1][1] + a16[3]*S1716[1][3];
a17[2]=c17[2] + a16[1]*S1716[2][1] + a16[3]*S1716[2][3];
a17[3]=state[20].thdd - a16[2];
a17[4]=c17[4] + a16[4]*S1716[1][1] + a16[6]*S1716[1][3];
a17[5]=c17[5] + a16[4]*S1716[2][1] + a16[6]*S1716[2][3];
a17[6]=-a16[5];

state[27].thdd=(-(a17[5]*h18[3]) - a17[2]*h18[6] + u[18] - a17[4]*(h18[1]*S1817[1][1] + h18[2]*S1817[2][1]) - a17[6]*(h18[1]*S1817[1][3] + h18[2]*S1817[2][3]) - a17[1]*(h18[4]*S1817[1][1] + ARMLINK3*h18[1]*S1817[1][3] + h18[5]*S1817[2][1] + ARMLINK3*h18[2]*S1817[2][3]) - a17[3]*(-(ARMLINK3*h18[1]*S1817[1][1]) + h18[4]*S1817[1][3] - ARMLINK3*h18[2]*S1817[2][1] + h18[5]*S1817[2][3]))/d[18];

a18[1]=c18[1] + a17[1]*S1817[1][1] + a17[3]*S1817[1][3];
a18[2]=c18[2] + a17[1]*S1817[2][1] + a17[3]*S1817[2][3];
a18[3]=state[27].thdd + a17[2];
a18[4]=c18[4] - ARMLINK3*a17[3]*S1817[1][1] + a17[4]*S1817[1][1] + ARMLINK3*a17[1]*S1817[1][3] + a17[6]*S1817[1][3];
a18[5]=c18[5] - ARMLINK3*a17[3]*S1817[2][1] + a17[4]*S1817[2][1] + ARMLINK3*a17[1]*S1817[2][3] + a17[6]*S1817[2][3];
a18[6]=a17[5];

a19[1]=a18[1];
a19[2]=a18[2];
a19[3]=a18[3];
a19[4]=PALMOFF*a18[3] + a18[4];
a19[5]=a18[5];
a19[6]=-(PALMOFF*a18[1]) + a18[6];

a20[1]=a19[1];
a20[2]=a19[2];
a20[3]=a19[3];
a20[4]=PALMTIP*a19[2] + a19[4];
a20[5]=-(PALMTIP*a19[1]) + a19[5];
a20[6]=a19[6];

state[28].thdd=(u[21] - a18[5]*(h21[1]*S2118[1][2] + h21[2]*S2118[2][2]) - a18[1]*(-h21[6] - GRIPROOT*h21[1]*S2118[1][2] - GRIPROOT*h21[2]*S2118[2][2]) - a18[2]*(h21[4]*S2118[1][2] + h21[5]*S2118[2][2]) - a18[6]*(h21[1]*S2118[1][3] + h21[2]*S2118[2][3]) - a18[3]*(h21[4]*S2118[1][3] + h21[5]*S2118[2][3]))/d[21];

a21[1]=c21[1] + a18[2]*S2118[1][2] + a18[3]*S2118[1][3];
a21[2]=c21[2] + a18[2]*S2118[2][2] + a18[3]*S2118[2][3];
a21[3]=state[28].thdd - a18[1];
a21[4]=c21[4] - GRIPROOT*a18[1]*S2118[1][2] + a18[5]*S2118[1][2] + a18[6]*S2118[1][3];
a21[5]=c21[5] - GRIPROOT*a18[1]*S2118[2][2] + a18[5]*S2118[2][2] + a18[6]*S2118[2][3];
a21[6]=-(GRIPROOT*a18[2]) - a18[4];

a22[1]=a21[1];
a22[2]=a21[2];
a22[3]=a21[3];
a22[4]=-(THUMBOFF*a21[3]) + a21[4];
a22[5]=THUMBLEN*a21[3] + a21[5];
a22[6]=THUMBOFF*a21[1] - THUMBLEN*a21[2] + a21[6];

state[21].thdd=(-(a0[5]*h23[3]) + u[23] + a0[4]*(h23[1]*S230[1][1] + h23[2]*S230[2][1]) + a0[1]*(h23[4]*S230[1][1] + h23[5]*S230[2][1]) + a0[6]*(h23[1]*S230[1][3] + h23[2]*S230[2][3]) + a0[2]*(-h23[6] - BODYLINK2*h23[1]*S230[1][3] - BODYLINK2*h23[2]*S230[2][3]) + a0[3]*(-(BODYLINK2*h23[3]) + h23[4]*S230[1][3] + h23[5]*S230[2][3]))/d[23];

a23[1]=c23[1] - a0[1]*S230[1][1] - a0[3]*S230[1][3];
a23[2]=c23[2] - a0[1]*S230[2][1] - a0[3]*S230[2][3];
a23[3]=state[21].thdd + a0[2];
a23[4]=c23[4] - a0[4]*S230[1][1] + BODYLINK2*a0[2]*S230[1][3] - a0[6]*S230[1][3];
a23[5]=c23[5] - a0[4]*S230[2][1] + BODYLINK2*a0[2]*S230[2][3] - a0[6]*S230[2][3];
a23[6]=BODYLINK2*a0[3] + a0[5];

state[1].thdd=(-(a23[5]*h24[3]) + u[24] - a23[4]*(h24[1]*S2423[1][1] + h24[2]*S2423[2][1]) - a23[6]*(h24[1]*S2423[1][3] + h24[2]*S2423[2][3]) - a23[1]*(-(LEGLINK1*h24[3]) + h24[4]*S2423[1][1] - WAISTLINK1*h24[1]*S2423[1][3] + h24[5]*S2423[2][1] - WAISTLINK1*h24[2]*S2423[2][3]) - a23[3]*(-(WAISTLINK2*h24[3]) + WAISTLINK1*h24[1]*S2423[1][1] + h24[4]*S2423[1][3] + WAISTLINK1*h24[2]*S2423[2][1] + h24[5]*S2423[2][3]) - a23[2]*(h24[6] + h24[1]*(LEGLINK1*S2423[1][1] + WAISTLINK2*S2423[1][3]) + h24[2]*(LEGLINK1*S2423[2][1] + WAISTLINK2*S2423[2][3])))/d[24];

a24[1]=c24[1] + a23[1]*S2423[1][1] + a23[3]*S2423[1][3];
a24[2]=c24[2] + a23[1]*S2423[2][1] + a23[3]*S2423[2][3];
a24[3]=state[1].thdd + a23[2];
a24[4]=c24[4] + WAISTLINK1*a23[3]*S2423[1][1] + a23[4]*S2423[1][1] - WAISTLINK1*a23[1]*S2423[1][3] + a23[6]*S2423[1][3] + a23[2]*(LEGLINK1*S2423[1][1] + WAISTLINK2*S2423[1][3]);
a24[5]=c24[5] + WAISTLINK1*a23[3]*S2423[2][1] + a23[4]*S2423[2][1] - WAISTLINK1*a23[1]*S2423[2][3] + a23[6]*S2423[2][3] + a23[2]*(LEGLINK1*S2423[2][1] + WAISTLINK2*S2423[2][3]);
a24[6]=-(LEGLINK1*a23[1]) - WAISTLINK2*a23[3] + a23[5];

state[2].thdd=(a24[5]*h25[3] + a24[2]*h25[6] + u[25] - a24[4]*(h25[1]*S2524[1][1] + h25[2]*S2524[2][1]) - a24[1]*(h25[4]*S2524[1][1] + h25[5]*S2524[2][1]) - a24[6]*(h25[1]*S2524[1][3] + h25[2]*S2524[2][3]) - a24[3]*(h25[4]*S2524[1][3] + h25[5]*S2524[2][3]))/d[25];

a25[1]=c25[1] + a24[1]*S2524[1][1] + a24[3]*S2524[1][3];
a25[2]=c25[2] + a24[1]*S2524[2][1] + a24[3]*S2524[2][3];
a25[3]=state[2].thdd - a24[2];
a25[4]=c25[4] + a24[4]*S2524[1][1] + a24[6]*S2524[1][3];
a25[5]=c25[5] + a24[4]*S2524[2][1] + a24[6]*S2524[2][3];
a25[6]=-a24[5];

state[3].thdd=(a25[5]*h26[3] + a25[2]*h26[6] + u[26] - a25[4]*(h26[1]*S2625[1][1] + h26[2]*S2625[2][1]) - a25[1]*(h26[4]*S2625[1][1] + h26[5]*S2625[2][1]) - a25[6]*(h26[1]*S2625[1][3] + h26[2]*S2625[2][3]) - a25[3]*(h26[4]*S2625[1][3] + h26[5]*S2625[2][3]))/d[26];

a26[1]=c26[1] + a25[1]*S2625[1][1] + a25[3]*S2625[1][3];
a26[2]=c26[2] + a25[1]*S2625[2][1] + a25[3]*S2625[2][3];
a26[3]=state[3].thdd - a25[2];
a26[4]=c26[4] + a25[4]*S2625[1][1] + a25[6]*S2625[1][3];
a26[5]=c26[5] + a25[4]*S2625[2][1] + a25[6]*S2625[2][3];
a26[6]=-a25[5];

state[4].thdd=(-(a26[6]*h27[3]) + u[27] - a26[4]*(h27[1]*S2726[1][1] + h27[2]*S2726[2][1]) - a26[1]*(h27[4]*S2726[1][1] + h27[5]*S2726[2][1]) - a26[5]*(h27[1]*S2726[1][2] + h27[2]*S2726[2][2]) - a26[3]*(h27[6] - LEGLINK2*h27[1]*S2726[1][2] - LEGLINK2*h27[2]*S2726[2][2]) - a26[2]*(LEGLINK2*h27[3] + h27[4]*S2726[1][2] + h27[5]*S2726[2][2]))/d[27];

a27[1]=c27[1] + a26[1]*S2726[1][1] + a26[2]*S2726[1][2];
a27[2]=c27[2] + a26[1]*S2726[2][1] + a26[2]*S2726[2][2];
a27[3]=state[4].thdd + a26[3];
a27[4]=c27[4] + a26[4]*S2726[1][1] - LEGLINK2*a26[3]*S2726[1][2] + a26[5]*S2726[1][2];
a27[5]=c27[5] + a26[4]*S2726[2][1] - LEGLINK2*a26[3]*S2726[2][2] + a26[5]*S2726[2][2];
a27[6]=LEGLINK2*a26[2] + a26[6];

state[5].thdd=(-(a27[6]*h28[3]) + u[28] - a27[4]*(h28[1]*S2827[1][1] + h28[2]*S2827[2][1]) - a27[1]*(h28[4]*S2827[1][1] + h28[5]*S2827[2][1]) - a27[5]*(h28[1]*S2827[1][2] + h28[2]*S2827[2][2]) - a27[3]*(h28[6] - LEGLINK3*h28[1]*S2827[1][2] - LEGLINK3*h28[2]*S2827[2][2]) - a27[2]*(LEGLINK3*h28[3] + h28[4]*S2827[1][2] + h28[5]*S2827[2][2]))/d[28];

a28[1]=c28[1] + a27[1]*S2827[1][1] + a27[2]*S2827[1][2];
a28[2]=c28[2] + a27[1]*S2827[2][1] + a27[2]*S2827[2][2];
a28[3]=state[5].thdd + a27[3];
a28[4]=c28[4] + a27[4]*S2827[1][1] - LEGLINK3*a27[3]*S2827[1][2] + a27[5]*S2827[1][2];
a28[5]=c28[5] + a27[4]*S2827[2][1] - LEGLINK3*a27[3]*S2827[2][2] + a27[5]*S2827[2][2];
a28[6]=LEGLINK3*a27[2] + a27[6];

state[6].thdd=(-(a28[5]*h29[3]) - a28[2]*h29[6] + u[29] - a28[4]*(h29[1]*S2928[1][1] + h29[2]*S2928[2][1]) - a28[1]*(h29[4]*S2928[1][1] + h29[5]*S2928[2][1]) - a28[6]*(h29[1]*S2928[1][3] + h29[2]*S2928[2][3]) - a28[3]*(h29[4]*S2928[1][3] + h29[5]*S2928[2][3]))/d[29];

a29[1]=c29[1] + a28[1]*S2928[1][1] + a28[3]*S2928[1][3];
a29[2]=c29[2] + a28[1]*S2928[2][1] + a28[3]*S2928[2][3];
a29[3]=state[6].thdd + a28[2];
a29[4]=c29[4] + a28[4]*S2928[1][1] + a28[6]*S2928[1][3];
a29[5]=c29[5] + a28[4]*S2928[2][1] + a28[6]*S2928[2][3];
a29[6]=a28[5];

a30[1]=a29[1];
a30[2]=a29[2];
a30[3]=a29[3];
a30[4]=FOOTLLENGLONG*a29[2] - FOOTWIDLONG*a29[3] + a29[4];
a30[5]=-(FOOTLLENGLONG*a29[1]) - LEGLINK4*a29[3] + a29[5];
a30[6]=FOOTWIDLONG*a29[1] + LEGLINK4*a29[2] + a29[6];

a31[1]=a29[1];
a31[2]=a29[2];
a31[3]=a29[3];
a31[4]=FOOTLLENGLONG*a29[2] + FOOTWIDSHORT*a29[3] + a29[4];
a31[5]=-(FOOTLLENGLONG*a29[1]) - LEGLINK4*a29[3] + a29[5];
a31[6]=-(FOOTWIDSHORT*a29[1]) + LEGLINK4*a29[2] + a29[6];

a32[1]=a29[1];
a32[2]=a29[2];
a32[3]=a29[3];
a32[4]=-(FOOTLENGSHORT*a29[2]) + FOOTWIDSHORT*a29[3] + a29[4];
a32[5]=FOOTLENGSHORT*a29[1] - LEGLINK4*a29[3] + a29[5];
a32[6]=-(FOOTWIDSHORT*a29[1]) + LEGLINK4*a29[2] + a29[6];

a33[1]=a29[1];
a33[2]=a29[2];
a33[3]=a29[3];
a33[4]=-(FOOTLENGSHORT*a29[2]) - FOOTWIDLONG*a29[3] + a29[4];
a33[5]=FOOTLENGSHORT*a29[1] - LEGLINK4*a29[3] + a29[5];
a33[6]=FOOTWIDLONG*a29[1] + LEGLINK4*a29[2] + a29[6];

a34[1]=a29[1]*S3429[1][1] + a29[2]*S3429[1][2] + a29[3]*S3429[1][3];
a34[2]=a29[1]*S3429[2][1] + a29[2]*S3429[2][2] + a29[3]*S3429[2][3];
a34[3]=a29[1]*S3429[3][1] + a29[2]*S3429[3][2] + a29[3]*S3429[3][3];
a34[4]=a29[4]*S3429[1][1] + a29[5]*S3429[1][2] + a29[3]*(-(eff[1].x[2]*S3429[1][1]) + eff[1].x[1]*S3429[1][2]) + a29[6]*S3429[1][3] + a29[2]*(eff[1].x[3]*S3429[1][1] - eff[1].x[1]*S3429[1][3]) + a29[1]*(-(eff[1].x[3]*S3429[1][2]) + eff[1].x[2]*S3429[1][3]);
a34[5]=a29[4]*S3429[2][1] + a29[5]*S3429[2][2] + a29[3]*(-(eff[1].x[2]*S3429[2][1]) + eff[1].x[1]*S3429[2][2]) + a29[6]*S3429[2][3] + a29[2]*(eff[1].x[3]*S3429[2][1] - eff[1].x[1]*S3429[2][3]) + a29[1]*(-(eff[1].x[3]*S3429[2][2]) + eff[1].x[2]*S3429[2][3]);
a34[6]=a29[4]*S3429[3][1] + a29[5]*S3429[3][2] + a29[3]*(-(eff[1].x[2]*S3429[3][1]) + eff[1].x[1]*S3429[3][2]) + a29[6]*S3429[3][3] + a29[2]*(eff[1].x[3]*S3429[3][1] - eff[1].x[1]*S3429[3][3]) + a29[1]*(-(eff[1].x[3]*S3429[3][2]) + eff[1].x[2]*S3429[3][3]);

state[11].thdd=(-(a23[5]*h35[3]) + u[35] - a23[4]*(h35[1]*S3523[1][1] + h35[2]*S3523[2][1]) - a23[6]*(h35[1]*S3523[1][3] + h35[2]*S3523[2][3]) - a23[1]*(LEGLINK1*h35[3] + h35[4]*S3523[1][1] - WAISTLINK1*h35[1]*S3523[1][3] + h35[5]*S3523[2][1] - WAISTLINK1*h35[2]*S3523[2][3]) - a23[3]*(-(WAISTLINK2*h35[3]) + WAISTLINK1*h35[1]*S3523[1][1] + h35[4]*S3523[1][3] + WAISTLINK1*h35[2]*S3523[2][1] + h35[5]*S3523[2][3]) - a23[2]*(h35[6] + h35[1]*(-(LEGLINK1*S3523[1][1]) + WAISTLINK2*S3523[1][3]) + h35[2]*(-(LEGLINK1*S3523[2][1]) + WAISTLINK2*S3523[2][3])))/d[35];

a35[1]=c35[1] + a23[1]*S3523[1][1] + a23[3]*S3523[1][3];
a35[2]=c35[2] + a23[1]*S3523[2][1] + a23[3]*S3523[2][3];
a35[3]=state[11].thdd + a23[2];
a35[4]=c35[4] + WAISTLINK1*a23[3]*S3523[1][1] + a23[4]*S3523[1][1] - WAISTLINK1*a23[1]*S3523[1][3] + a23[6]*S3523[1][3] + a23[2]*(-(LEGLINK1*S3523[1][1]) + WAISTLINK2*S3523[1][3]);
a35[5]=c35[5] + WAISTLINK1*a23[3]*S3523[2][1] + a23[4]*S3523[2][1] - WAISTLINK1*a23[1]*S3523[2][3] + a23[6]*S3523[2][3] + a23[2]*(-(LEGLINK1*S3523[2][1]) + WAISTLINK2*S3523[2][3]);
a35[6]=LEGLINK1*a23[1] - WAISTLINK2*a23[3] + a23[5];

state[12].thdd=(a35[5]*h36[3] + a35[2]*h36[6] + u[36] - a35[4]*(h36[1]*S3635[1][1] + h36[2]*S3635[2][1]) - a35[1]*(h36[4]*S3635[1][1] + h36[5]*S3635[2][1]) - a35[6]*(h36[1]*S3635[1][3] + h36[2]*S3635[2][3]) - a35[3]*(h36[4]*S3635[1][3] + h36[5]*S3635[2][3]))/d[36];

a36[1]=c36[1] + a35[1]*S3635[1][1] + a35[3]*S3635[1][3];
a36[2]=c36[2] + a35[1]*S3635[2][1] + a35[3]*S3635[2][3];
a36[3]=state[12].thdd - a35[2];
a36[4]=c36[4] + a35[4]*S3635[1][1] + a35[6]*S3635[1][3];
a36[5]=c36[5] + a35[4]*S3635[2][1] + a35[6]*S3635[2][3];
a36[6]=-a35[5];

state[13].thdd=(a36[5]*h37[3] + a36[2]*h37[6] + u[37] - a36[4]*(h37[1]*S3736[1][1] + h37[2]*S3736[2][1]) - a36[1]*(h37[4]*S3736[1][1] + h37[5]*S3736[2][1]) - a36[6]*(h37[1]*S3736[1][3] + h37[2]*S3736[2][3]) - a36[3]*(h37[4]*S3736[1][3] + h37[5]*S3736[2][3]))/d[37];

a37[1]=c37[1] + a36[1]*S3736[1][1] + a36[3]*S3736[1][3];
a37[2]=c37[2] + a36[1]*S3736[2][1] + a36[3]*S3736[2][3];
a37[3]=state[13].thdd - a36[2];
a37[4]=c37[4] + a36[4]*S3736[1][1] + a36[6]*S3736[1][3];
a37[5]=c37[5] + a36[4]*S3736[2][1] + a36[6]*S3736[2][3];
a37[6]=-a36[5];

state[14].thdd=(-(a37[6]*h38[3]) + u[38] - a37[4]*(h38[1]*S3837[1][1] + h38[2]*S3837[2][1]) - a37[1]*(h38[4]*S3837[1][1] + h38[5]*S3837[2][1]) - a37[5]*(h38[1]*S3837[1][2] + h38[2]*S3837[2][2]) - a37[3]*(h38[6] - LEGLINK2*h38[1]*S3837[1][2] - LEGLINK2*h38[2]*S3837[2][2]) - a37[2]*(LEGLINK2*h38[3] + h38[4]*S3837[1][2] + h38[5]*S3837[2][2]))/d[38];

a38[1]=c38[1] + a37[1]*S3837[1][1] + a37[2]*S3837[1][2];
a38[2]=c38[2] + a37[1]*S3837[2][1] + a37[2]*S3837[2][2];
a38[3]=state[14].thdd + a37[3];
a38[4]=c38[4] + a37[4]*S3837[1][1] - LEGLINK2*a37[3]*S3837[1][2] + a37[5]*S3837[1][2];
a38[5]=c38[5] + a37[4]*S3837[2][1] - LEGLINK2*a37[3]*S3837[2][2] + a37[5]*S3837[2][2];
a38[6]=LEGLINK2*a37[2] + a37[6];

state[15].thdd=(-(a38[6]*h39[3]) + u[39] - a38[4]*(h39[1]*S3938[1][1] + h39[2]*S3938[2][1]) - a38[1]*(h39[4]*S3938[1][1] + h39[5]*S3938[2][1]) - a38[5]*(h39[1]*S3938[1][2] + h39[2]*S3938[2][2]) - a38[3]*(h39[6] - LEGLINK3*h39[1]*S3938[1][2] - LEGLINK3*h39[2]*S3938[2][2]) - a38[2]*(LEGLINK3*h39[3] + h39[4]*S3938[1][2] + h39[5]*S3938[2][2]))/d[39];

a39[1]=c39[1] + a38[1]*S3938[1][1] + a38[2]*S3938[1][2];
a39[2]=c39[2] + a38[1]*S3938[2][1] + a38[2]*S3938[2][2];
a39[3]=state[15].thdd + a38[3];
a39[4]=c39[4] + a38[4]*S3938[1][1] - LEGLINK3*a38[3]*S3938[1][2] + a38[5]*S3938[1][2];
a39[5]=c39[5] + a38[4]*S3938[2][1] - LEGLINK3*a38[3]*S3938[2][2] + a38[5]*S3938[2][2];
a39[6]=LEGLINK3*a38[2] + a38[6];

state[16].thdd=(-(a39[5]*h40[3]) - a39[2]*h40[6] + u[40] - a39[4]*(h40[1]*S4039[1][1] + h40[2]*S4039[2][1]) - a39[1]*(h40[4]*S4039[1][1] + h40[5]*S4039[2][1]) - a39[6]*(h40[1]*S4039[1][3] + h40[2]*S4039[2][3]) - a39[3]*(h40[4]*S4039[1][3] + h40[5]*S4039[2][3]))/d[40];

a40[1]=c40[1] + a39[1]*S4039[1][1] + a39[3]*S4039[1][3];
a40[2]=c40[2] + a39[1]*S4039[2][1] + a39[3]*S4039[2][3];
a40[3]=state[16].thdd + a39[2];
a40[4]=c40[4] + a39[4]*S4039[1][1] + a39[6]*S4039[1][3];
a40[5]=c40[5] + a39[4]*S4039[2][1] + a39[6]*S4039[2][3];
a40[6]=a39[5];

a41[1]=a40[1];
a41[2]=a40[2];
a41[3]=a40[3];
a41[4]=FOOTLLENGLONG*a40[2] + FOOTWIDLONG*a40[3] + a40[4];
a41[5]=-(FOOTLLENGLONG*a40[1]) - LEGLINK4*a40[3] + a40[5];
a41[6]=-(FOOTWIDLONG*a40[1]) + LEGLINK4*a40[2] + a40[6];

a42[1]=a40[1];
a42[2]=a40[2];
a42[3]=a40[3];
a42[4]=FOOTLLENGLONG*a40[2] - FOOTWIDSHORT*a40[3] + a40[4];
a42[5]=-(FOOTLLENGLONG*a40[1]) - LEGLINK4*a40[3] + a40[5];
a42[6]=FOOTWIDSHORT*a40[1] + LEGLINK4*a40[2] + a40[6];

a43[1]=a40[1];
a43[2]=a40[2];
a43[3]=a40[3];
a43[4]=-(FOOTLENGSHORT*a40[2]) - FOOTWIDSHORT*a40[3] + a40[4];
a43[5]=FOOTLENGSHORT*a40[1] - LEGLINK4*a40[3] + a40[5];
a43[6]=FOOTWIDSHORT*a40[1] + LEGLINK4*a40[2] + a40[6];

a44[1]=a40[1];
a44[2]=a40[2];
a44[3]=a40[3];
a44[4]=-(FOOTLENGSHORT*a40[2]) + FOOTWIDLONG*a40[3] + a40[4];
a44[5]=FOOTLENGSHORT*a40[1] - LEGLINK4*a40[3] + a40[5];
a44[6]=-(FOOTWIDLONG*a40[1]) + LEGLINK4*a40[2] + a40[6];

a45[1]=a40[1]*S4540[1][1] + a40[2]*S4540[1][2] + a40[3]*S4540[1][3];
a45[2]=a40[1]*S4540[2][1] + a40[2]*S4540[2][2] + a40[3]*S4540[2][3];
a45[3]=a40[1]*S4540[3][1] + a40[2]*S4540[3][2] + a40[3]*S4540[3][3];
a45[4]=a40[4]*S4540[1][1] + a40[5]*S4540[1][2] + a40[3]*(-(eff[2].x[2]*S4540[1][1]) + eff[2].x[1]*S4540[1][2]) + a40[6]*S4540[1][3] + a40[2]*(eff[2].x[3]*S4540[1][1] - eff[2].x[1]*S4540[1][3]) + a40[1]*(-(eff[2].x[3]*S4540[1][2]) + eff[2].x[2]*S4540[1][3]);
a45[5]=a40[4]*S4540[2][1] + a40[5]*S4540[2][2] + a40[3]*(-(eff[2].x[2]*S4540[2][1]) + eff[2].x[1]*S4540[2][2]) + a40[6]*S4540[2][3] + a40[2]*(eff[2].x[3]*S4540[2][1] - eff[2].x[1]*S4540[2][3]) + a40[1]*(-(eff[2].x[3]*S4540[2][2]) + eff[2].x[2]*S4540[2][3]);
a45[6]=a40[4]*S4540[3][1] + a40[5]*S4540[3][2] + a40[3]*(-(eff[2].x[2]*S4540[3][1]) + eff[2].x[1]*S4540[3][2]) + a40[6]*S4540[3][3] + a40[2]*(eff[2].x[3]*S4540[3][1] - eff[2].x[1]*S4540[3][3]) + a40[1]*(-(eff[2].x[3]*S4540[3][2]) + eff[2].x[2]*S4540[3][3]);

