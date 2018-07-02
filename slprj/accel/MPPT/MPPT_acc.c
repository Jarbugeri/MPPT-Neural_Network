#include "__cf_MPPT.h"
#include <math.h>
#include "MPPT_acc.h"
#include "MPPT_acc_private.h"
#include <stdio.h>
#include "slexec_vm_simstruct_bridge.h"
#include "slexec_vm_zc_functions.h"
#include "slexec_vm_lookup_functions.h"
#include "simstruc.h"
#include "fixedpoint.h"
#define CodeFormat S-Function
#define AccDefine1 Accelerator_S-Function
#include "simtarget/slAccSfcnBridge.h"
void ouojpwpuwe ( SimStruct * const S ) { nfjekb3bsc * _rtB ; h2ev02slmc *
_rtP ; pdevxrjmms * _rtDW ; _rtDW = ( ( pdevxrjmms * ) ssGetRootDWork ( S ) )
; _rtP = ( ( h2ev02slmc * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * )
_ssGetModelBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 0 , 7 ,
SS_CALL_MDL_INITIALIZE_CONDITIONS ) ; } void beue4oz41i ( SimStruct * const S
) { ssCallAccelRunBlock ( S , 4 , 37 , SS_CALL_MDL_OUTPUTS ) ; } void
ksid4woqdi ( SimStruct * const S ) { nfjekb3bsc * _rtB ; h2ev02slmc * _rtP ;
pdevxrjmms * _rtDW ; _rtDW = ( ( pdevxrjmms * ) ssGetRootDWork ( S ) ) ; _rtP
= ( ( h2ev02slmc * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * )
_ssGetModelBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 0 , 7 ,
SS_CALL_MDL_UPDATE ) ; } void pmtqqn0qrt ( SimStruct * const S ) { nfjekb3bsc
* _rtB ; h2ev02slmc * _rtP ; pdevxrjmms * _rtDW ; _rtDW = ( ( pdevxrjmms * )
ssGetRootDWork ( S ) ) ; _rtP = ( ( h2ev02slmc * ) ssGetModelRtp ( S ) ) ;
_rtB = ( ( nfjekb3bsc * ) _ssGetModelBlockIO ( S ) ) ; ssCallAccelRunBlock (
S , 0 , 7 , SS_CALL_MDL_DERIVATIVES ) ; } void doydbp5xog ( SimStruct * const
S ) { nfjekb3bsc * _rtB ; h2ev02slmc * _rtP ; pdevxrjmms * _rtDW ; _rtDW = (
( pdevxrjmms * ) ssGetRootDWork ( S ) ) ; _rtP = ( ( h2ev02slmc * )
ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * ) _ssGetModelBlockIO ( S ) )
; ssCallAccelRunBlock ( S , 0 , 7 , SS_CALL_MDL_PROJECTION ) ; } void
dayezeyhm3 ( SimStruct * const S ) { nfjekb3bsc * _rtB ; h2ev02slmc * _rtP ;
pdevxrjmms * _rtDW ; _rtDW = ( ( pdevxrjmms * ) ssGetRootDWork ( S ) ) ; _rtP
= ( ( h2ev02slmc * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * )
_ssGetModelBlockIO ( S ) ) ; ssCallAccelRunBlock ( S , 0 , 7 ,
SS_CALL_MDL_ZERO_CROSSINGS ) ; } void hzreni4qoa ( SimStruct * const S ) {
nfjekb3bsc * _rtB ; h2ev02slmc * _rtP ; pdevxrjmms * _rtDW ; _rtDW = ( (
pdevxrjmms * ) ssGetRootDWork ( S ) ) ; _rtP = ( ( h2ev02slmc * )
ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * ) _ssGetModelBlockIO ( S ) )
; { SimStruct * rts = ssGetSFunction ( S , 0 ) ; sfcnTerminate ( rts ) ; } }
void oav24anpde ( gb5oerlwuf * localB , b2vgh5tvgj * localP ) { localB ->
mxl35noq1s = localP -> P_0 ; } void kb3gnicghz ( SimStruct * const S , real_T
nov4t33dh5 , real_T fzvinx4yep , gb5oerlwuf * localB , og0hizz4vj * localDW ,
celktmhpcw * localZCE ) { ZCEventType zcEvent ; if ( ssIsMajorTimeStep ( S )
) { zcEvent = rt_ZCFcn ( RISING_ZERO_CROSSING , & localZCE -> kknmzilkod , (
nov4t33dh5 ) ) ; if ( zcEvent != NO_ZCEVENT ) { localB -> mxl35noq1s =
fzvinx4yep ; localDW -> hveluddu1l = 4 ; } } } void ocvs3v4thb ( SimStruct *
const S ) { } static void mdlOutputs ( SimStruct * S , int_T tid ) { real_T
coycysfbt4 ; real_T temp ; ZCEventType zcEvent ; boolean_T cyg1kuxzzz ;
nfjekb3bsc * _rtB ; h2ev02slmc * _rtP ; oykvejcuzo * _rtX ; d52acnsdym *
_rtZCE ; pdevxrjmms * _rtDW ; _rtDW = ( ( pdevxrjmms * ) ssGetRootDWork ( S )
) ; _rtZCE = ( ( d52acnsdym * ) _ssGetPrevZCSigState ( S ) ) ; _rtX = ( (
oykvejcuzo * ) ssGetContStates ( S ) ) ; _rtP = ( ( h2ev02slmc * )
ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * ) _ssGetModelBlockIO ( S ) )
; ssCallAccelRunBlock ( S , 4 , 0 , SS_CALL_MDL_OUTPUTS ) ; _rtB ->
h35du5bloe = _rtB -> e1pv5wp5qg + _rtB -> c3qvsjfkto ; _rtB -> c2wpbx1x3s =
_rtB -> h35du5bloe - _rtB -> g05iswhzeu ; _rtB -> fsasmh5xry = _rtP -> P_26 *
_rtB -> c2wpbx1x3s ; _rtB -> bd1nxmpwrb = _rtB -> fsasmh5xry + _rtB ->
oyw0wlipie ; _rtB -> fhb45fr2wm = _rtP -> P_28 * _rtB -> bd1nxmpwrb ;
ssCallAccelRunBlock ( S , 4 , 9 , SS_CALL_MDL_OUTPUTS ) ; _rtB -> n43clse2y1
= _rtP -> P_29 * _rtB -> p54c5qdkmg ; _rtB -> foghiasjib = _rtB -> fhb45fr2wm
* _rtB -> n43clse2y1 ; _rtB -> dqkpecqryq = _rtB -> h35du5bloe - _rtB ->
jnax5h1vbb ; _rtB -> mr2hlmmvfl = _rtP -> P_33 * _rtB -> dqkpecqryq ; _rtB ->
p3jgusjoma = _rtB -> pzfbuu1pev + _rtB -> mr2hlmmvfl ; _rtB -> myuptltuws =
_rtP -> P_34 * _rtB -> p3jgusjoma ; _rtB -> nyot21dz0i = _rtP -> P_35 * _rtB
-> h35du5bloe ; _rtB -> fgboggrv5x = _rtB -> myuptltuws / _rtB -> nyot21dz0i
; _rtB -> p2tkrxum3w = _rtB -> jkfkm013qk - _rtB -> fgboggrv5x ; _rtB ->
fxg3vo3amu = _rtB -> h35du5bloe / _rtB -> jakzpwqypn ; _rtB -> dfmpdzfrcp =
_rtP -> P_37 * muDoubleScalarPower ( _rtB -> fxg3vo3amu , 3.0 ) ; _rtB ->
cln5nbqta4 = muDoubleScalarExp ( _rtB -> p2tkrxum3w ) * _rtB -> dfmpdzfrcp ;
_rtB -> bhiokjmgyn = _rtP -> P_38 * _rtB -> fxg3vo3amu ; _rtB -> eumrejilkf =
_rtX -> msfvxacfgs ; _rtB -> jcxohutlsr = _rtP -> P_40 * _rtB -> eumrejilkf ;
_rtB -> lunhii5ybe = _rtX -> niig3zyce1 ; _rtB -> apeak1jtf4 = _rtP -> P_42 *
_rtB -> lunhii5ybe ; beue4oz41i ( S ) ; _rtB -> k44ur1xucu = 0.0 ; _rtB ->
k44ur1xucu += _rtP -> P_50 * _rtX -> fgrkgkxz0g [ 1 ] ; temp = _rtP -> P_53 *
ssGetT ( S ) ; if ( temp - muDoubleScalarFloor ( temp ) >= 0.5 ) { _rtB ->
hi3aevogxy = _rtP -> P_52 ; } else { _rtB -> hi3aevogxy = - _rtP -> P_52 ; }
if ( ssIsSampleHit ( S , 1 , 0 ) ) { kb3gnicghz ( S , _rtB -> hi3aevogxy ,
_rtB -> k44ur1xucu , & _rtB -> kb3gnicghzk , & _rtDW -> kb3gnicghzk , &
_rtZCE -> kb3gnicghzk ) ; } _rtB -> phzsrohids = 0.0 ; _rtB -> phzsrohids +=
_rtP -> P_56 * _rtX -> dgdqaosuyg [ 1 ] ; if ( ssIsSampleHit ( S , 1 , 0 ) )
{ kb3gnicghz ( S , _rtB -> hi3aevogxy , _rtB -> phzsrohids , & _rtB ->
b5cva55wbq , & _rtDW -> b5cva55wbq , & _rtZCE -> b5cva55wbq ) ;
ssCallAccelRunBlock ( S , 1 , 0 , SS_CALL_MDL_OUTPUTS ) ; if ( _rtB ->
jaarnzh1fm > _rtP -> P_58 ) { _rtB -> gsxftwndtq = _rtP -> P_58 ; } else if (
_rtB -> jaarnzh1fm < _rtP -> P_59 ) { _rtB -> gsxftwndtq = _rtP -> P_59 ; }
else { _rtB -> gsxftwndtq = _rtB -> jaarnzh1fm ; } cyg1kuxzzz = ( _rtB ->
gsxftwndtq != d2mzadeviz ( S ) -> ouhs1snykz ) ; } coycysfbt4 = ssGetT ( S )
; if ( ssIsSampleHit ( S , 1 , 0 ) ) { _rtB -> psdjrqztc1 = _rtP -> P_61 ;
_rtB -> dfxeabzqzi = _rtP -> P_62 ; } _rtB -> nprc0q1y2n = muDoubleScalarRem
( coycysfbt4 + _rtB -> psdjrqztc1 , _rtB -> dfxeabzqzi ) * _rtP -> P_63 ;
_rtB -> mfdhjleaul = ( ( 2.0 * _rtB -> nprc0q1y2n - 1.0 ) + 1.0 ) * 0.5 ; if
( ssIsSampleHit ( S , 1 , 0 ) ) { if ( ssIsMajorTimeStep ( S ) ) { _rtDW ->
oys4fitgnf = ( _rtB -> gsxftwndtq >= _rtB -> mfdhjleaul ) ; } temp = (
cyg1kuxzzz && _rtDW -> oys4fitgnf ) ; if ( temp > _rtP -> P_64 ) { temp =
_rtP -> P_64 ; } else { if ( temp < _rtP -> P_65 ) { temp = _rtP -> P_65 ; }
} _rtB -> p1mdvtiwqx = temp * _rtB -> ddk0nof02a ; } _rtB -> gkgjrdtvm3 =
_rtP -> P_67 * _rtB -> fufjlnmi2y [ 3 ] ; _rtB -> jeppek0vhx = _rtP -> P_68 *
_rtB -> fufjlnmi2y [ 0 ] ; _rtB -> at4ugyqrok = _rtP -> P_69 * _rtB ->
fufjlnmi2y [ 1 ] ; ssCallAccelRunBlock ( S , 4 , 79 , SS_CALL_MDL_OUTPUTS ) ;
if ( ssIsSampleHit ( S , 1 , 0 ) ) { zcEvent = rt_ZCFcn ( ANY_ZERO_CROSSING ,
& _rtZCE -> igmyk5tau1 , ( _rtB -> nprc0q1y2n - _rtP -> P_70 ) ) ; if ( _rtDW
-> nnrge00vnv == 0 ) { if ( zcEvent != NO_ZCEVENT ) { _rtB -> jqhya1d5ch = !
_rtB -> jqhya1d5ch ; _rtDW -> nnrge00vnv = 1 ; } else if ( _rtB -> jqhya1d5ch
) { if ( _rtB -> nprc0q1y2n != _rtP -> P_70 ) { _rtB -> jqhya1d5ch = false ;
} } else { if ( _rtB -> nprc0q1y2n == _rtP -> P_70 ) { _rtB -> jqhya1d5ch =
true ; } } } else { if ( _rtB -> nprc0q1y2n != _rtP -> P_70 ) { _rtB ->
jqhya1d5ch = false ; } _rtDW -> nnrge00vnv = 0 ; } } _rtB -> lld0jfq4re =
_rtP -> P_71 * _rtB -> lunhii5ybe ; _rtB -> lxekkqvqtj = _rtP -> P_72 * _rtB
-> lcycrwgnbw ; _rtB -> ou5ymefycw = _rtB -> lxekkqvqtj + _rtB -> lld0jfq4re
; _rtB -> mcdf4rn2zi = _rtP -> P_73 * _rtB -> eumrejilkf ; _rtB -> hgkkjcmw2j
= _rtP -> P_74 * _rtB -> gcwlwb44fp ; _rtB -> pgmk1gpvva = _rtB -> hgkkjcmw2j
+ _rtB -> mcdf4rn2zi ; UNUSED_PARAMETER ( tid ) ; } static void
mdlOutputsTID3 ( SimStruct * S , int_T tid ) { nfjekb3bsc * _rtB ; h2ev02slmc
* _rtP ; _rtP = ( ( h2ev02slmc * ) ssGetModelRtp ( S ) ) ; _rtB = ( (
nfjekb3bsc * ) _ssGetModelBlockIO ( S ) ) ; _rtB -> c3qvsjfkto = _rtP -> P_24
; _rtB -> g05iswhzeu = _rtP -> P_25 ; _rtB -> oyw0wlipie = _rtP -> P_27 ;
_rtB -> jkfkm013qk = _rtP -> P_30 ; _rtB -> pzfbuu1pev = _rtP -> P_31 ; _rtB
-> jnax5h1vbb = _rtP -> P_32 ; _rtB -> jakzpwqypn = _rtP -> P_36 ; _rtB ->
fjhf1tz0bs = _rtP -> P_43 ; _rtB -> jcwt0yv0vm = _rtP -> P_44 ; _rtB ->
a55jdwqqex = _rtP -> P_45 ; _rtB -> nqufnfzep0 = _rtP -> P_46 ; _rtB ->
ddk0nof02a = ( 0.0 <= _rtP -> P_47 ) ; _rtB -> p4iftmj5sf = _rtP -> P_66 ;
UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdate ( SimStruct * S , int_T tid ) { ksid4woqdi ( S ) ;
UNUSED_PARAMETER ( tid ) ; }
#define MDL_UPDATE
static void mdlUpdateTID3 ( SimStruct * S , int_T tid ) { UNUSED_PARAMETER (
tid ) ; }
#define MDL_DERIVATIVES
static void mdlDerivatives ( SimStruct * S ) { nfjekb3bsc * _rtB ; h2ev02slmc
* _rtP ; oykvejcuzo * _rtX ; kpbn2bgvlc * _rtXdot ; _rtXdot = ( ( kpbn2bgvlc
* ) ssGetdX ( S ) ) ; _rtX = ( ( oykvejcuzo * ) ssGetContStates ( S ) ) ;
_rtP = ( ( h2ev02slmc * ) ssGetModelRtp ( S ) ) ; _rtB = ( ( nfjekb3bsc * )
_ssGetModelBlockIO ( S ) ) ; _rtXdot -> msfvxacfgs = _rtB -> pgmk1gpvva ;
_rtXdot -> niig3zyce1 = _rtB -> ou5ymefycw ; pmtqqn0qrt ( S ) ; _rtXdot ->
fgrkgkxz0g [ 0 ] = 0.0 ; _rtXdot -> dgdqaosuyg [ 0 ] = 0.0 ; _rtXdot ->
fgrkgkxz0g [ 1 ] = 0.0 ; _rtXdot -> dgdqaosuyg [ 1 ] = 0.0 ; _rtXdot ->
fgrkgkxz0g [ 0 ] += _rtP -> P_48 [ 0 ] * _rtX -> fgrkgkxz0g [ 0 ] ; _rtXdot
-> fgrkgkxz0g [ 0 ] += _rtP -> P_48 [ 1 ] * _rtX -> fgrkgkxz0g [ 1 ] ;
_rtXdot -> fgrkgkxz0g [ 1 ] += _rtP -> P_48 [ 2 ] * _rtX -> fgrkgkxz0g [ 0 ]
; _rtXdot -> fgrkgkxz0g [ 0 ] += _rtP -> P_49 * _rtB -> at4ugyqrok ; _rtXdot
-> dgdqaosuyg [ 0 ] += _rtP -> P_54 [ 0 ] * _rtX -> dgdqaosuyg [ 0 ] ;
_rtXdot -> dgdqaosuyg [ 0 ] += _rtP -> P_54 [ 1 ] * _rtX -> dgdqaosuyg [ 1 ]
; _rtXdot -> dgdqaosuyg [ 1 ] += _rtP -> P_54 [ 2 ] * _rtX -> dgdqaosuyg [ 0
] ; _rtXdot -> dgdqaosuyg [ 0 ] += _rtP -> P_55 * _rtB -> gkgjrdtvm3 ; }
#define MDL_PROJECTION
static void mdlProjection ( SimStruct * S ) { doydbp5xog ( S ) ; }
#define MDL_ZERO_CROSSINGS
static void mdlZeroCrossings ( SimStruct * S ) { nfjekb3bsc * _rtB ;
h2ev02slmc * _rtP ; h41hxo23lw * _rtZCSV ; pdevxrjmms * _rtDW ; _rtDW = ( (
pdevxrjmms * ) ssGetRootDWork ( S ) ) ; _rtZCSV = ( ( h41hxo23lw * )
ssGetSolverZcSignalVector ( S ) ) ; _rtP = ( ( h2ev02slmc * ) ssGetModelRtp (
S ) ) ; _rtB = ( ( nfjekb3bsc * ) _ssGetModelBlockIO ( S ) ) ;
ssCallAccelRunBlock ( S , 4 , 0 , SS_CALL_MDL_ZERO_CROSSINGS ) ;
ssCallAccelRunBlock ( S , 4 , 9 , SS_CALL_MDL_ZERO_CROSSINGS ) ; dayezeyhm3 (
S ) ; _rtZCSV -> fpluy4m5ij = _rtB -> gsxftwndtq - _rtB -> mfdhjleaul ;
_rtZCSV -> khgxnowcp0 = _rtB -> nprc0q1y2n - _rtP -> P_70 ; if ( _rtDW ->
nnrge00vnv == 0 ) { _rtZCSV -> defoir3ecu = ( ( _rtB -> nprc0q1y2n - _rtP ->
P_70 ) * ( real_T ) _rtB -> jqhya1d5ch != 0.0 ) ; } else { _rtZCSV ->
defoir3ecu = ssGetT ( S ) - ssGetTimeOfLastOutput ( S ) ; } } static void
mdlInitializeSizes ( SimStruct * S ) { ssSetChecksumVal ( S , 0 , 2572427688U
) ; ssSetChecksumVal ( S , 1 , 323671172U ) ; ssSetChecksumVal ( S , 2 ,
497468140U ) ; ssSetChecksumVal ( S , 3 , 3159647852U ) ; { mxArray *
slVerStructMat = NULL ; mxArray * slStrMat = mxCreateString ( "simulink" ) ;
char slVerChar [ 10 ] ; int status = mexCallMATLAB ( 1 , & slVerStructMat , 1
, & slStrMat , "ver" ) ; if ( status == 0 ) { mxArray * slVerMat = mxGetField
( slVerStructMat , 0 , "Version" ) ; if ( slVerMat == NULL ) { status = 1 ; }
else { status = mxGetString ( slVerMat , slVerChar , 10 ) ; } }
mxDestroyArray ( slStrMat ) ; mxDestroyArray ( slVerStructMat ) ; if ( (
status == 1 ) || ( strcmp ( slVerChar , "8.7" ) != 0 ) ) { return ; } }
ssSetOptions ( S , SS_OPTION_EXCEPTION_FREE_CODE ) ; if ( ssGetSizeofDWork (
S ) != sizeof ( pdevxrjmms ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal DWork sizes do "
"not match for accelerator mex file." ) ; } if ( ssGetSizeofGlobalBlockIO ( S
) != sizeof ( nfjekb3bsc ) ) { ssSetErrorStatus ( S ,
"Unexpected error: Internal BlockIO sizes do "
"not match for accelerator mex file." ) ; } { int ssSizeofParams ;
ssGetSizeofParams ( S , & ssSizeofParams ) ; if ( ssSizeofParams != sizeof (
h2ev02slmc ) ) { static char msg [ 256 ] ; sprintf ( msg ,
"Unexpected error: Internal Parameters sizes do "
"not match for accelerator mex file." ) ; } } _ssSetModelRtp ( S , ( real_T *
) & g1rwbwt2np ) ; _ssSetConstBlockIO ( S , & mzeefuhszk ) ; rt_InitInfAndNaN
( sizeof ( real_T ) ) ; } static void mdlInitializeSampleTimes ( SimStruct *
S ) { { SimStruct * childS ; SysOutputFcn * callSysFcns ; childS =
ssGetSFunction ( S , 1 ) ; callSysFcns = ssGetCallSystemOutputFcnList (
childS ) ; callSysFcns [ 3 + 0 ] = ( SysOutputFcn ) ( NULL ) ; }
slAccRegPrmChangeFcn ( S , mdlOutputsTID3 ) ; } static void mdlTerminate (
SimStruct * S ) { }
#include "simulink.c"
