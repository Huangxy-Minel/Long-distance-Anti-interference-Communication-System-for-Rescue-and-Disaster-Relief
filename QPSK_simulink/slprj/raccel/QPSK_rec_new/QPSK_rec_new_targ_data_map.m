  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 5;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtP)
    ;%
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% rtP.DigitalFilter_DenCoeffs
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.DigitalFilter_DenCoeffs_o4x43fum1w
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% rtP.DigitalFilter_DenCoeffs_kep0pa5mts
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% rtP.DigitalFilter_NumCoeffs
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% rtP.DigitalFilter_NumCoeffs_pm3tdg2tvj
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% rtP.DigitalFilter_NumCoeffs_ilqcl03itu
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtP.CompareToConstant_const
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.CounterLimited_uplimit
	  section.data(2).logicalSrcIdx = 7;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 30;
      section.data(30)  = dumData; %prealloc
      
	  ;% rtP.Delay_InitialCondition
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Buffer_ic
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.ConstantBarkerCode_Value
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.Constant1_Value
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 15;
	
	  ;% rtP.Delay1_InitialCondition
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 16;
	
	  ;% rtP.Gain_Gain
	  section.data(6).logicalSrcIdx = 13;
	  section.data(6).dtTransOffset = 17;
	
	  ;% rtP.MagnitudeAngletoComplex_ConstantPart
	  section.data(7).logicalSrcIdx = 14;
	  section.data(7).dtTransOffset = 18;
	
	  ;% rtP.Constant_Value
	  section.data(8).logicalSrcIdx = 15;
	  section.data(8).dtTransOffset = 19;
	
	  ;% rtP.SFunctionBuilder_P1
	  section.data(9).logicalSrcIdx = 16;
	  section.data(9).dtTransOffset = 20;
	
	  ;% rtP.Buffer_ic_mhhskld4kq
	  section.data(10).logicalSrcIdx = 17;
	  section.data(10).dtTransOffset = 21;
	
	  ;% rtP.FIRDecimation_FILT
	  section.data(11).logicalSrcIdx = 18;
	  section.data(11).dtTransOffset = 22;
	
	  ;% rtP.Alphabetsize_Value
	  section.data(12).logicalSrcIdx = 19;
	  section.data(12).dtTransOffset = 64;
	
	  ;% rtP.DigitalFilter_InitialStates
	  section.data(13).logicalSrcIdx = 20;
	  section.data(13).dtTransOffset = 65;
	
	  ;% rtP.DigitalFilter_Coefficients
	  section.data(14).logicalSrcIdx = 21;
	  section.data(14).dtTransOffset = 66;
	
	  ;% rtP.Gain_Gain_f3wchj02z3
	  section.data(15).logicalSrcIdx = 22;
	  section.data(15).dtTransOffset = 68;
	
	  ;% rtP.CompensateforFrequencyOffset_Phase
	  section.data(16).logicalSrcIdx = 23;
	  section.data(16).dtTransOffset = 69;
	
	  ;% rtP.Unbuffer_ic
	  section.data(17).logicalSrcIdx = 24;
	  section.data(17).dtTransOffset = 70;
	
	  ;% rtP.Delay1_InitialCondition_ndhyglan5c
	  section.data(18).logicalSrcIdx = 25;
	  section.data(18).dtTransOffset = 71;
	
	  ;% rtP.K1_Gain
	  section.data(19).logicalSrcIdx = 26;
	  section.data(19).dtTransOffset = 72;
	
	  ;% rtP.K2_Gain
	  section.data(20).logicalSrcIdx = 27;
	  section.data(20).dtTransOffset = 73;
	
	  ;% rtP.Gain_Gain_lh2vjcl0wj
	  section.data(21).logicalSrcIdx = 28;
	  section.data(21).dtTransOffset = 74;
	
	  ;% rtP.MagnitudeAngletoComplex_ConstantPart_ni3ctenwcr
	  section.data(22).logicalSrcIdx = 29;
	  section.data(22).dtTransOffset = 75;
	
	  ;% rtP.IntegerDelay2_InitialCondition
	  section.data(23).logicalSrcIdx = 30;
	  section.data(23).dtTransOffset = 76;
	
	  ;% rtP.IntegerDelay1_InitialCondition
	  section.data(24).logicalSrcIdx = 31;
	  section.data(24).dtTransOffset = 77;
	
	  ;% rtP.Gain1_Gain
	  section.data(25).logicalSrcIdx = 32;
	  section.data(25).dtTransOffset = 78;
	
	  ;% rtP.ToAudioDevice1_P1
	  section.data(26).logicalSrcIdx = 33;
	  section.data(26).dtTransOffset = 79;
	
	  ;% rtP.ToAudioDevice1_P2
	  section.data(27).logicalSrcIdx = 34;
	  section.data(27).dtTransOffset = 80;
	
	  ;% rtP.ToAudioDevice1_P3
	  section.data(28).logicalSrcIdx = 35;
	  section.data(28).dtTransOffset = 81;
	
	  ;% rtP.K2_Gain_m5hzi5qib5
	  section.data(29).logicalSrcIdx = 36;
	  section.data(29).dtTransOffset = 82;
	
	  ;% rtP.K1_Gain_hbz2ttd0l3
	  section.data(30).logicalSrcIdx = 37;
	  section.data(30).dtTransOffset = 83;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtP.Delay_DelayLength
	  section.data(1).logicalSrcIdx = 38;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Delay1_DelayLength
	  section.data(2).logicalSrcIdx = 39;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Delay1_DelayLength_fhvxo5d3vu
	  section.data(3).logicalSrcIdx = 40;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtP.IntegerDelay2_DelayLength
	  section.data(4).logicalSrcIdx = 41;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtP.IntegerDelay1_DelayLength
	  section.data(5).logicalSrcIdx = 42;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtP.Output_InitialCondition
	  section.data(1).logicalSrcIdx = 43;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.FixPtConstant_Value
	  section.data(2).logicalSrcIdx = 44;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtP.Constant_Value_k5dpjwyc51
	  section.data(3).logicalSrcIdx = 45;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtB)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtB.minxrdkfnw
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.fb3mramyi2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 4096;
	
	  ;% rtB.oteo0hgonb
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 6096;
	
	  ;% rtB.ovjxaccksb
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 8096;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% rtB.fpc14ms2ti
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.cofyxefywj
	  section.data(2).logicalSrcIdx = 5;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.neeeqzegf1
	  section.data(3).logicalSrcIdx = 6;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtB.cuiphlrvh3
	  section.data(4).logicalSrcIdx = 7;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtB.ggid3ra30q
	  section.data(5).logicalSrcIdx = 8;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtB.csbznulm04
	  section.data(6).logicalSrcIdx = 9;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtB.ipgnpglywt
	  section.data(7).logicalSrcIdx = 10;
	  section.data(7).dtTransOffset = 105;
	
	  ;% rtB.fobbopvf0e
	  section.data(8).logicalSrcIdx = 11;
	  section.data(8).dtTransOffset = 305;
	
	  ;% rtB.i2fhusba1q
	  section.data(9).logicalSrcIdx = 12;
	  section.data(9).dtTransOffset = 306;
	
	  ;% rtB.gvvtdp5xcm
	  section.data(10).logicalSrcIdx = 13;
	  section.data(10).dtTransOffset = 307;
	
	  ;% rtB.fvj531xizo
	  section.data(11).logicalSrcIdx = 14;
	  section.data(11).dtTransOffset = 407;
	
	  ;% rtB.lgr1arenbz
	  section.data(12).logicalSrcIdx = 15;
	  section.data(12).dtTransOffset = 4407;
	
	  ;% rtB.kvzns23b5z
	  section.data(13).logicalSrcIdx = 16;
	  section.data(13).dtTransOffset = 6407;
	
	  ;% rtB.aja0cn3qsg
	  section.data(14).logicalSrcIdx = 17;
	  section.data(14).dtTransOffset = 8455;
	
	  ;% rtB.ehxhqbkdhz
	  section.data(15).logicalSrcIdx = 18;
	  section.data(15).dtTransOffset = 8468;
	
	  ;% rtB.kom1j355dw
	  section.data(16).logicalSrcIdx = 19;
	  section.data(16).dtTransOffset = 8580;
	
	  ;% rtB.k2f4fy42ut
	  section.data(17).logicalSrcIdx = 20;
	  section.data(17).dtTransOffset = 8680;
	
	  ;% rtB.dp1z0w3pyb
	  section.data(18).logicalSrcIdx = 21;
	  section.data(18).dtTransOffset = 8693;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 48;
      section.data(48)  = dumData; %prealloc
      
	  ;% rtB.mwspxnqhvh
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.lsrweaeuar
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.ishhgfdoic
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 3;
	
	  ;% rtB.lcukeg4ra1
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 2003;
	
	  ;% rtB.atw401twj1
	  section.data(5).logicalSrcIdx = 26;
	  section.data(5).dtTransOffset = 4051;
	
	  ;% rtB.kwd0e0b1d5
	  section.data(6).logicalSrcIdx = 27;
	  section.data(6).dtTransOffset = 4052;
	
	  ;% rtB.geedmuaywp
	  section.data(7).logicalSrcIdx = 28;
	  section.data(7).dtTransOffset = 4053;
	
	  ;% rtB.fz3ctbaoql
	  section.data(8).logicalSrcIdx = 29;
	  section.data(8).dtTransOffset = 4055;
	
	  ;% rtB.pobnd0mg5i
	  section.data(9).logicalSrcIdx = 30;
	  section.data(9).dtTransOffset = 4057;
	
	  ;% rtB.becw5lzrrr
	  section.data(10).logicalSrcIdx = 31;
	  section.data(10).dtTransOffset = 4058;
	
	  ;% rtB.a4s11ojk1m
	  section.data(11).logicalSrcIdx = 32;
	  section.data(11).dtTransOffset = 4059;
	
	  ;% rtB.j4vvlljgpx
	  section.data(12).logicalSrcIdx = 33;
	  section.data(12).dtTransOffset = 6107;
	
	  ;% rtB.auidd2k43x
	  section.data(13).logicalSrcIdx = 34;
	  section.data(13).dtTransOffset = 6108;
	
	  ;% rtB.iardd3mkw3
	  section.data(14).logicalSrcIdx = 35;
	  section.data(14).dtTransOffset = 6109;
	
	  ;% rtB.gxdfvjpcut
	  section.data(15).logicalSrcIdx = 36;
	  section.data(15).dtTransOffset = 6110;
	
	  ;% rtB.kzyd4u3ksq
	  section.data(16).logicalSrcIdx = 37;
	  section.data(16).dtTransOffset = 6111;
	
	  ;% rtB.ak3sje44b5
	  section.data(17).logicalSrcIdx = 38;
	  section.data(17).dtTransOffset = 6112;
	
	  ;% rtB.e33vjmweeo
	  section.data(18).logicalSrcIdx = 39;
	  section.data(18).dtTransOffset = 6113;
	
	  ;% rtB.iswwz5qktn
	  section.data(19).logicalSrcIdx = 40;
	  section.data(19).dtTransOffset = 6114;
	
	  ;% rtB.pxnn0khacz
	  section.data(20).logicalSrcIdx = 41;
	  section.data(20).dtTransOffset = 6115;
	
	  ;% rtB.o1ydd51tpe
	  section.data(21).logicalSrcIdx = 42;
	  section.data(21).dtTransOffset = 6116;
	
	  ;% rtB.pqyu05wbdd
	  section.data(22).logicalSrcIdx = 43;
	  section.data(22).dtTransOffset = 6290;
	
	  ;% rtB.isoscd3hxa
	  section.data(23).logicalSrcIdx = 44;
	  section.data(23).dtTransOffset = 6458;
	
	  ;% rtB.og0uhfdt4r
	  section.data(24).logicalSrcIdx = 45;
	  section.data(24).dtTransOffset = 6479;
	
	  ;% rtB.dt3ojgl0oz
	  section.data(25).logicalSrcIdx = 46;
	  section.data(25).dtTransOffset = 6480;
	
	  ;% rtB.f52rciltnu
	  section.data(26).logicalSrcIdx = 47;
	  section.data(26).dtTransOffset = 6481;
	
	  ;% rtB.ivalynhusz
	  section.data(27).logicalSrcIdx = 48;
	  section.data(27).dtTransOffset = 6482;
	
	  ;% rtB.mtal0lmzoj
	  section.data(28).logicalSrcIdx = 49;
	  section.data(28).dtTransOffset = 6483;
	
	  ;% rtB.dlexrl4ki2
	  section.data(29).logicalSrcIdx = 50;
	  section.data(29).dtTransOffset = 6484;
	
	  ;% rtB.pdexr5mw4l
	  section.data(30).logicalSrcIdx = 51;
	  section.data(30).dtTransOffset = 6485;
	
	  ;% rtB.hyzdvtfnio
	  section.data(31).logicalSrcIdx = 52;
	  section.data(31).dtTransOffset = 6486;
	
	  ;% rtB.lvhi1ezcxd
	  section.data(32).logicalSrcIdx = 53;
	  section.data(32).dtTransOffset = 6487;
	
	  ;% rtB.fo2nbqef0x
	  section.data(33).logicalSrcIdx = 54;
	  section.data(33).dtTransOffset = 6488;
	
	  ;% rtB.fq0yv3mn1s
	  section.data(34).logicalSrcIdx = 55;
	  section.data(34).dtTransOffset = 6489;
	
	  ;% rtB.db3uscyfsp
	  section.data(35).logicalSrcIdx = 56;
	  section.data(35).dtTransOffset = 6490;
	
	  ;% rtB.eyetzj3uq1
	  section.data(36).logicalSrcIdx = 57;
	  section.data(36).dtTransOffset = 6491;
	
	  ;% rtB.brghorksve
	  section.data(37).logicalSrcIdx = 58;
	  section.data(37).dtTransOffset = 6492;
	
	  ;% rtB.gpopjinata
	  section.data(38).logicalSrcIdx = 59;
	  section.data(38).dtTransOffset = 6493;
	
	  ;% rtB.fzzwpatmzm
	  section.data(39).logicalSrcIdx = 60;
	  section.data(39).dtTransOffset = 6494;
	
	  ;% rtB.nfgvfi3av2
	  section.data(40).logicalSrcIdx = 61;
	  section.data(40).dtTransOffset = 6495;
	
	  ;% rtB.d3burfccqn
	  section.data(41).logicalSrcIdx = 62;
	  section.data(41).dtTransOffset = 6669;
	
	  ;% rtB.loovichlml
	  section.data(42).logicalSrcIdx = 63;
	  section.data(42).dtTransOffset = 6670;
	
	  ;% rtB.hetsq4myqc
	  section.data(43).logicalSrcIdx = 64;
	  section.data(43).dtTransOffset = 6671;
	
	  ;% rtB.o3emxfgw5k
	  section.data(44).logicalSrcIdx = 65;
	  section.data(44).dtTransOffset = 6672;
	
	  ;% rtB.km2ayjw1ft
	  section.data(45).logicalSrcIdx = 66;
	  section.data(45).dtTransOffset = 8720;
	
	  ;% rtB.gplb5zarwj
	  section.data(46).logicalSrcIdx = 67;
	  section.data(46).dtTransOffset = 8741;
	
	  ;% rtB.hitgbienc0
	  section.data(47).logicalSrcIdx = 68;
	  section.data(47).dtTransOffset = 8767;
	
	  ;% rtB.aka4gb231h
	  section.data(48).logicalSrcIdx = 69;
	  section.data(48).dtTransOffset = 8879;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.e5rykhtqm2
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.eyid12vzph
	  section.data(1).logicalSrcIdx = 73;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.fwdjmw1rs5
	  section.data(2).logicalSrcIdx = 74;
	  section.data(2).dtTransOffset = 4096;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.cz25yszbgm
	  section.data(1).logicalSrcIdx = 75;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.has4tk4gru
	  section.data(2).logicalSrcIdx = 76;
	  section.data(2).dtTransOffset = 168;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.egka4n0wgk
	  section.data(1).logicalSrcIdx = 77;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.bu0vc1o0ko
	  section.data(2).logicalSrcIdx = 78;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtB.biivyniief
	  section.data(3).logicalSrcIdx = 79;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtB.cbdvezzfie
	  section.data(1).logicalSrcIdx = 80;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.onboscufhy
	  section.data(2).logicalSrcIdx = 81;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 8;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (rtDW)
    ;%
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtDW.lsxpdgmogp
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.bnupsmlzt5
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 8096;
	
	  ;% rtDW.gqx5btuepb
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 8097;
	
	  ;% rtDW.h1ipc2chyf
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 8137;
	
	  ;% rtDW.elczwj5tyr
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 10137;
	
	  ;% rtDW.a4roe1syac
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10138;
	
	  ;% rtDW.merzb44fhx
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10237;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% rtDW.dhj4vkzmaf
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.effey3xwny
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 2048;
	
	  ;% rtDW.ptaxny3roj
	  section.data(3).logicalSrcIdx = 9;
	  section.data(3).dtTransOffset = 2049;
	
	  ;% rtDW.posib3ggdt
	  section.data(4).logicalSrcIdx = 10;
	  section.data(4).dtTransOffset = 2051;
	
	  ;% rtDW.mc5uo0whgt
	  section.data(5).logicalSrcIdx = 11;
	  section.data(5).dtTransOffset = 2053;
	
	  ;% rtDW.kfpmh01a1k
	  section.data(6).logicalSrcIdx = 12;
	  section.data(6).dtTransOffset = 2054;
	
	  ;% rtDW.ptnmznb0hw
	  section.data(7).logicalSrcIdx = 13;
	  section.data(7).dtTransOffset = 2055;
	
	  ;% rtDW.fefqcieipy
	  section.data(8).logicalSrcIdx = 14;
	  section.data(8).dtTransOffset = 2057;
	
	  ;% rtDW.ktnxdhpbxz
	  section.data(9).logicalSrcIdx = 15;
	  section.data(9).dtTransOffset = 2058;
	
	  ;% rtDW.evsdrk450n
	  section.data(10).logicalSrcIdx = 16;
	  section.data(10).dtTransOffset = 2059;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtDW.ebuhvi04cr
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.o0xvwnxylh
	  section.data(2).logicalSrcIdx = 18;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.lyiqnjqybi
	  section.data(3).logicalSrcIdx = 19;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.akdn11h4te
	  section.data(4).logicalSrcIdx = 20;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.fvcogczy1o
	  section.data(5).logicalSrcIdx = 21;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.n125ugl4m5
	  section.data(6).logicalSrcIdx = 22;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.mwa4qpprzx
	  section.data(7).logicalSrcIdx = 23;
	  section.data(7).dtTransOffset = 18;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtDW.ml1as53acs
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.mpq12xyhdw
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.lunjgzjc24
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 9;
      section.data(9)  = dumData; %prealloc
      
	  ;% rtDW.dooxhebqgo
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.cddzpwnuex
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.ld4ftkewcy
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.df0s3yujg1
	  section.data(4).logicalSrcIdx = 30;
	  section.data(4).dtTransOffset = 3;
	
	  ;% rtDW.fqxk0amxeb
	  section.data(5).logicalSrcIdx = 31;
	  section.data(5).dtTransOffset = 4;
	
	  ;% rtDW.gpf2nblmlt
	  section.data(6).logicalSrcIdx = 32;
	  section.data(6).dtTransOffset = 5;
	
	  ;% rtDW.pc5arjiauv
	  section.data(7).logicalSrcIdx = 33;
	  section.data(7).dtTransOffset = 6;
	
	  ;% rtDW.lvdcsrlwfa
	  section.data(8).logicalSrcIdx = 34;
	  section.data(8).dtTransOffset = 7;
	
	  ;% rtDW.m3asvljnha
	  section.data(9).logicalSrcIdx = 35;
	  section.data(9).dtTransOffset = 8;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.phbiknpp2r
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.ebgqyj5dd2
	  section.data(1).logicalSrcIdx = 37;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.ojjfczgzl5
	  section.data(2).logicalSrcIdx = 38;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.hmivrtfkd4
	  section.data(1).logicalSrcIdx = 39;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.m1yucxivnk
	  section.data(1).logicalSrcIdx = 40;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.gjqfu0f13v
	  section.data(2).logicalSrcIdx = 41;
	  section.data(2).dtTransOffset = 1;
	
	  ;% rtDW.clvzofwwc2
	  section.data(3).logicalSrcIdx = 42;
	  section.data(3).dtTransOffset = 2;
	
	  ;% rtDW.p5sfhhwl21
	  section.data(4).logicalSrcIdx = 43;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 4253915896;
  targMap.checksum1 = 1430370651;
  targMap.checksum2 = 739386552;
  targMap.checksum3 = 4287294336;

