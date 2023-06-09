#include "TROOT.h"
#include "TChain.h"
#include "TFile.h"
#include "TProof.h"

void H4l_Analysis

/* The URL to the ATLAS Open Data website repository */
TString path = "https://atlas-opendata.web.cern.ch/atlas-opendata/samples/2020/2lep/";
  
// writing chains for all data and MC

// Data from the Open Data repository. In the repository, the 4 leptons data
// is divided in 4 files (A, B, C, D), that will all be added to the chain
TChain* chain_dataA = new TChain("mini");
chain_dataA->AddFile(path+"Data/data_A.2lep.root");
chain_dataA->Process("HWWAnalysis.C+","dataA");

TChain* chain_dataB = new TChain("mini");
chain_dataB->AddFile(path+"Data/data_B.2lep.root");
chain_dataB->Process("HWWAnalysis.C+","dataB");

  
TChain* chain_dataC = new TChain("mini");
chain_dataC->AddFile(path+"Data/data_C.2lep.root");
chain_dataC->Process("HWWAnalysis.C+","dataC");

  
TChain* chain_dataD = new TChain("mini");
chain_dataD->AddFile(path+"Data/data_D.2lep.root");
chain_dataD->Process("HWWAnalysis.C+","dataD");

   
  
//////////////////////  MC samples
  

    
// diboson
TChain* chain_ZqqZll = new TChain("mini");
chain_ZqqZll->AddFile(path+"MC/mc_363356.ZqqZll.2lep.root");
chain_ZqqZll->Process("HWWAnalysis.C+","ZqqZll");
    
TChain* chain_WqqZll = new TChain("mini");
chain_WqqZll->AddFile(path+"MC/mc_363358.WqqZll.2lep.root");
chain_WqqZll->Process("HWWAnalysis.C+","WqqZll");
    
TChain* chain_WpqqWmlv = new TChain("mini");
chain_WpqqWmlv->AddFile(path+"MC/mc_363359.WpqqWmlv.2lep.root");
chain_WpqqWmlv->Process("HWWAnalysis.C+","WpqqWmlv");
    
TChain* chain_WplvWmqq = new TChain("mini");
chain_WplvWmqq->AddFile(path+"MC/mc_363360.WplvWmqq.2lep.root");
chain_WplvWmqq->Process("HWWAnalysis.C+","WplvWmqq");
    
TChain* chain_WlvZqq = new TChain("mini");
chain_WlvZqq->AddFile(path+"MC/mc_363489.WlvZqq.2lep.root");
chain_WlvZqq->Process("HWWAnalysis.C+","WlvZqq");



TChain* chain_llll = new TChain("mini");
chain_llll->AddFile(path+"MC/mc_363490.llll.2lep.root");
chain_llll->Process("HWWAnalysis.C+","llll");
    
TChain* chain_lllv = new TChain("mini");
chain_lllv->AddFile(path+"MC/mc_363491.lllv.2lep.root");
chain_lllv->Process("HWWAnalysis.C+","lllv");
    
TChain* chain_llvv = new TChain("mini");
chain_llvv->AddFile(path+"MC/mc_363492.llvv.2lep.root");
chain_llvv->Process("HWWAnalysis.C+","llvv");
    
TChain* chain_lvvv = new TChain("mini");
chain_lvvv->AddFile(path+"MC/mc_363493.lvvv.2lep.root");
chain_lvvv->Process("HWWAnalysis.C+","lvvv");
    
//single top
TChain* chain_single_top_tchan = new TChain("mini");
chain_single_top_tchan->AddFile(path+"MC/mc_410011.single_top_tchan.2lep.root");
chain_single_top_tchan->Process("HWWAnalysis.C+","single_top_tchan");
    
TChain* chain_single_antitop_tchan = new TChain("mini");
chain_single_antitop_tchan->AddFile(path+"MC/mc_410012.single_antitop_tchan.2lep.root");
chain_single_antitop_tchan->Process("HWWAnalysis.C+","single_antitop_tchan");
    
TChain* chain_single_top_schan = new TChain("mini");
chain_single_top_schan->AddFile(path+"MC/mc_410025.single_top_schan.2lep.root");
chain_single_top_schan->Process("HWWAnalysis.C+","single_top_schan");
    
TChain* chain_single_antitop_schan = new TChain("mini");
chain_single_antitop_schan->AddFile(path+"MC/mc_410026.single_antitop_schan.2lep.root");
chain_single_antitop_schan->Process("HWWAnalysis.C+","single_antitop_schan");
    
TChain* chain_single_top_wtchan = new TChain("mini");
chain_single_top_wtchan->AddFile(path+"MC/mc_410013.single_top_wtchan.2lep.root");
chain_single_top_wtchan->Process("HWWAnalysis.C+","single_top_wtchan");
    
TChain* chain_single_antitop_wtchan = new TChain("mini");
chain_single_antitop_wtchan->AddFile(path+"MC/mc_410014.single_antitop_wtchan.2lep.root");
chain_single_antitop_wtchan->Process("HWWAnalysis.C+","single_antitop_wtchan");




// Z+jets inclusive
 
TChain* chain_Zee = new TChain("mini");
chain_Zee->AddFile(path+"MC/mc_361106.Zee.2lep.root");
chain_Zee->Process("HWWAnalysis.C+","Zee");




TChain* chain_Zmumu = new TChain("mini");
chain_Zmumu->AddFile(path+"MC/mc_361107.Zmumu.2lep.root");
chain_Zmumu->Process("HWWAnalysis.C+","Zmumu");




TChain* chain_Ztautau = new TChain("mini");
chain_Ztautau->AddFile(path+"MC/mc_361108.Ztautau.2lep.root");
chain_Ztautau->Process("HWWAnalysis.C+","Ztautau");

//ttbar
TChain* chain_ttbar_lep = new TChain("mini");
chain_ttbar_lep->AddFile(path+"MC/mc_410000.ttbar_lep.2lep.root");
chain_ttbar_lep->Process("HWWAnalysis.C+","ttbar_lep");
    
// W+jets inclusive
TChain* chain_Wplusenu = new TChain("mini");
chain_Wplusenu->AddFile(path+"MC/mc_361100.Wplusenu.2lep.root");
chain_Wplusenu->Process("HWWAnalysis.C+","Wplusenu");

TChain* chain_Wplusmunu = new TChain("mini");
chain_Wplusmunu->AddFile(path+"MC/mc_361101.Wplusmunu.2lep.root");
chain_Wplusmunu->Process("HWWAnalysis.C+","Wplusmunu");

TChain* chain_Wplustaunu = new TChain("mini");
chain_Wplustaunu->AddFile(path+"MC/mc_361102.Wplustaunu.2lep.root");
chain_Wplustaunu->Process("HWWAnalysis.C+","Wplustaunu");

TChain* chain_Wminusenu = new TChain("mini");
chain_Wminusenu->AddFile(path+"MC/mc_361103.Wminusenu.2lep.root");
chain_Wminusenu->Process("HWWAnalysis.C+","Wminusenu");

TChain* chain_Wminusmunu = new TChain("mini");
chain_Wminusmunu->AddFile(path+"MC/mc_361104.Wminusmunu.2lep.root");
chain_Wminusmunu->Process("HWWAnalysis.C+","Wminusmunu");

TChain* chain_Wminustaunu = new TChain("mini");
chain_Wminustaunu->AddFile(path+"MC/mc_361105.Wminustaunu.2lep.root");
chain_Wminustaunu->Process("HWWAnalysis.C+","Wminustaunu");

// ggH
TChain* chain_ggH125_WW = new TChain("mini");
chain_ggH125_WW->AddFile(path+"MC/mc_345324.ggH125_WW2lep.2lep.root");
chain_ggH125_WW->Process("HWWAnalysis.C+","ggH125_WW2lep");

// VBF
TChain* chain_VBFH125_WW = new TChain("mini");
chain_VBFH125_WW->AddFile(path+"MC/mc_345323.VBFH125_WW2lep.2lep.root");
chain_VBFH125_WW->Process("HWWAnalysis.C+","VBFH125_WW2lep");



