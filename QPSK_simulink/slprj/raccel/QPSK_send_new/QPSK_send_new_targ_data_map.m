  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
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
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% rtP.ConstantBarkerCode_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtP.Constant2_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 13;
	
	  ;% rtP.FromAudioDevice_P1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 19;
	
	  ;% rtP.FromAudioDevice_P2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 20;
	
	  ;% rtP.FromAudioDevice_P3
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 21;
	
	  ;% rtP.FIRInterpolation_FILTER_COEFF
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 22;
	
	  ;% rtP.Buffer2_ic
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 66;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtP.Gain_Gain
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
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
    nTotSects     = 4;
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
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.ouvvvzepvb
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.gvbyyw5o3g
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 400;
	
	  ;% rtB.aftmuloeee
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 500;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% rtB.ehbk4bryz1
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.premmh4kdg
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 21;
	
	  ;% rtB.jd01qs5m4z
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 195;
	
	  ;% rtB.bxe1le5ikg
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 395;
	
	  ;% rtB.jvbcgma2dm
	  section.data(5).logicalSrcIdx = 7;
	  section.data(5).dtTransOffset = 4491;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% rtB.o1szxg5mdq
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtB.hwwkismpaq
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 4096;
	
	  ;% rtB.op5mprqu15
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 8192;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtB.dkjitcvete
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
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
    nTotSects     = 3;
    sectIdxOffset = 4;
    
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
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% rtDW.hoeg5pvh24
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.fgmcscr1iy
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% rtDW.njjl2slvq4
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% rtDW.kfwjt2w4bi
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 4;
	
	  ;% rtDW.hlnhqvglnw
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 5;
	
	  ;% rtDW.ko1ido1o3s
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% rtDW.nuoavhbzfe
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
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


  targMap.checksum0 = 1711761817;
  targMap.checksum1 = 686016757;
  targMap.checksum2 = 2344704805;
  targMap.checksum3 = 614464673;

