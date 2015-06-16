////for analysis
#define NPT  18
double ptbins[NPT+1] = {-1.0, 0, 0.5, 1.0,1.5,2.0,2.5,3.5,4.5,5.5,7,9,11,13,16,20,28,40,100};
//#define NPT  21
//double ptbins[NPT+1] = {-1.0, 0, 0.5, 1.0,1.5,2.0,2.5,3.5,4.5,5.5,7,9,11,13,16,20,28,40,50,60,70,100};


////to fix particle misid shape
//double NsigMC[NPT] = { 0.,4.71502e+06,4.71502e+06,4.52978e+06,3.53057e+06,1.8534e+06,1.16857e+06,730841, 434796, 226032, 58895.2 , 0.0};
//double NsigMCerror[NPT] = { 0.0,106053, 96199.7, 79213.6, 52891.9, 27333.3, 16174.2, 9442.98, 5095.41, 2368.65, 705.864, 0.0};
//double p0[NPT] = {0.0, 4.46143e+04, 4.60846e+04, 4.47238e+04, 3.36765e+04, 1.65979e+04, 1.00342e+04, 5.93331e+03, 3.42488e+03, 1.76738e+03, 4.44104e+02, 0.0};
//double p0error[NPT] =  { 0.0, 1.06550e+03, 9.82781e+02, 8.94665e+02, 6.81751e+02, 3.46451e+02, 2.08120e+02, 1.14258e+02, 6.55421e+01, 3.36693e+01, 9.40173e+00, 0.0};
//double p1[NPT] = { 0.0, 1.86825e+00, 1.86631e+00, 1.87290e+00, 1.86807e+00, 1.87436e+00, 1.86868e+00, 1.86815e+00, 1.86979e+00, 1.86801e+00, 1.87162e+00, 0.0};
//double p1error[NPT] = { 0.0, 1.84948e-03, 1.87471e-03, 2.14965e-03, 2.43882e-03, 2.53836e-03, 2.55428e-03, 2.39527e-03, 2.34529e-03, 2.40362e-03, 2.65083e-03, 0.0};
//double p2[NPT] = {0.0, 7.32402e-02, 8.08389e-02, 9.76748e-02, 1.13106e-01, 1.13500e-01, 1.17294e-01, 1.15535e-01, 1.19552e-01, 1.27681e-01, 1.24804e-01,0.0};
//double p2error[NPT] = { 0.0, 1.57751e-03, 1.73784e-03, 2.33569e-03, 3.17703e-03, 3.26998e-03, 3.38318e-03, 3.00984e-03, 3.14191e-03, 3.43527e-03, 3.70928e-03,0.0};
//
////signal shape
//double signalmean[NPT] = {0,1.86565,1.86592,1.86524,1.86515,1.865,1.86494,1.86526,1.86503,1.86548,1.86542,0};
//double error_signalmean[NPT] = {0,0.000352339,0.000310234,0.000257164,0.000209636,0.000202339,0.00019053,0.000187834,0.000166811,0.000162372,0.000191981,0};
//double signalsigma1[NPT] = {0,0.0126022,0.0121582,0.0121907,0.011373,0.0110922,0.0120759,0.0123977,0.0127553,0.0139143,0.0143879,0};
//double error_signalsigma1[NPT] = {0,0.000593773,0.000748987,0.0005232,0.000366043,0.000323096,0.00032083,0.000278095,0.000249268,0.000225955,0.000294738,0};
//double signalsigma2[NPT] = {0,0.0278084,0.0228776,0.0262784,0.0242673,0.0242946,0.0285681,0.0286309,0.0303857,0.0371483,0.038566,0};
//double error_signalsigma2[NPT] = {0,0.00223612,0.00162651,0.00177104,0.00109312,0.00103506,0.00140388,0.00133479,0.00138579,0.00212957,0.00256985,0};
//double gaussian1fraction[NPT] = {0,0.806119,0.695778,0.792381,0.745991,0.763274,0.830053,0.834487,0.853495,0.915493,0.904908,0};
//double error_gaussian1fraction[NPT] = {0,0.0540659,0.0867437,0.0499811,0.037339,0.0326685,0.0270635,0.024729,0.0203253,0.0142678,0.0186513,0};
////
////double ptbins[NPT+1] = {0.,4.5,5.5,9.0,13.0,28.,100.};
////double ptbins[NPT+1] = {0.,4.5,7.0,11.0,20.,40.,100.};
//////////////
//#define NPT 7
//double ptbins[NPT+1] = {0., 3.5, 4.5, 7.0, 11.0, 16.0, 28.0,100.};
//
//double NsigMC[NPT] = {0,4.71502e+06,9.24477e+06,5.38399e+06,1.8994e+06,660829,0};
//double NsigMCerror[NPT] = {0,106053,124616,59537.1,18729,5619.05,0};
//double p0[NPT] = {0,4.46143e+04,91165.2,50469.8,16049.9,5202.91,0};
//double p0error[NPT] = {0,1.06550e+03,1312.37,764.953,238.077,73.642,0};
//double p1[NPT] = {0,1.86825,1.86921,1.87027,1.86861,1.86917,0};
//double p1error[NPT] = {0,1.84948e-03,0.00141359,0.00183771,0.00183337,0.00177058,0};
//double p2[NPT] = {0,7.32402e-02,0.0888686,0.113581,0.116896,0.12221,0};
//double p2error[NPT] = {0,1.57751e-03,0.00139948,0.00237393,0.00239575,0.00242842,0};
//
//double signalmean[NPT] = {0,1.86565,1.86558,1.8651,1.86507,1.86518,0};
//double error_signalmean[NPT] = {0,0.000352339,0.000199936,0.000153589,0.000143022,0.000126417,0};
//double signalsigma1[NPT] = {0,0.0126022,0.0122912,0.0112685,0.0122178,0.0131504,0};
//double error_signalsigma1[NPT] = {0,0.000593773,0.000459689,0.000271882,0.000220839,0.000174749,0};
//double signalsigma2[NPT] = {0,0.0278084,0.0247429,0.0242616,0.0286402,0.0323469,0};
//double error_signalsigma2[NPT] = {0,0.00223612,0.00133464,0.000841367,0.00102877,0.00107013,0};
//double gaussian1fraction[NPT] = {0,0.806119,0.759942,0.751291,0.832958,0.876338,0};
//double error_gaussian1fraction[NPT] = {0,0.0540659,0.0488347,0.0279696,0.0191108,0.012641,0};
//
//
//#define NPT 6
//double ptbins[NPT+1] = {0., 4.5, 7.0, 11.0, 16.0, 28.0,100.};
//
//double NsigMC[NPT] = {0,9.24477e+06,5.38399e+06,1.8994e+06,660829,0};
//double NsigMCerror[NPT] = {0,124616,59537.1,18729,5619.05,0};
//double p0[NPT] = {0,91165.2,50469.8,16049.9,5202.91,0};
//double p0error[NPT] = {0,1312.37,764.953,238.077,73.642,0};
//double p1[NPT] = {0,1.86921,1.87027,1.86861,1.86917,0};
//double p1error[NPT] = {0,0.00141359,0.00183771,0.00183337,0.00177058,0};
//double p2[NPT] = {0,0.0888686,0.113581,0.116896,0.12221,0};
//double p2error[NPT] = {0,0.00139948,0.00237393,0.00239575,0.00242842,0};
//
//double signalmean[NPT] = {0,1.86558,1.8651,1.86507,1.86518,0};
//double error_signalmean[NPT] = {0,0.000199936,0.000153589,0.000143022,0.000126417,0};
//double signalsigma1[NPT] = {0,0.0122912,0.0112685,0.0122178,0.0131504,0};
//double error_signalsigma1[NPT] = {0,0.000459689,0.000271882,0.000220839,0.000174749,0};
//double signalsigma2[NPT] = {0,0.0247429,0.0242616,0.0286402,0.0323469,0};
//double error_signalsigma2[NPT] = {0,0.00133464,0.000841367,0.00102877,0.00107013,0};
//double gaussian1fraction[NPT] = {0,0.759942,0.751291,0.832958,0.876338,0};
//double error_gaussian1fraction[NPT] = {0,0.0488347,0.0279696,0.0191108,0.012641,0};
//
//#define NY 12
//double ybins[NY+1] = {-2.0, -1.8, -1.6, -1.2, -0.8, -0.4, 0, 0.4, 0.8, 1.2, 1.6, 1.8, 2.0};

#define NY 6
double ybins[NY+1] = {-2.0, -1.5, -0.7, 0, 0.7, 1.5, 2.0};

//#define NPT 1
//double ptbins[NPT+1] = {4.5, 40};
//
//

//tmva cut
#define NCUTPT 14
const double cut_pt_edge[NCUTPT+1] = {0,1.5,2.5,3.5,4.5,5.5,7,9,11,13,16,20,28,40,100};
const double ffls3dcut[NCUTPT] = {4.5, 4.5, 4.5,3.81, 3.81, 3.91, 3.92, 3.77, 3.57, 3.37, 2.88, 2.71, 2.63, 2.63};
const double alphacut[NCUTPT]  = {0.056, 0.056, 0.056, 0.056, 0.056, 0.048, 0.060, 0.063, 0.057, 0.053, 0.059, 0.059, 0.042, 0.042};
const double fprobcut[NCUTPT] = {0.267, 0.267, 0.267, 0.267, 0.267, 0.065, 0.104, 0.086, 0.038, 0.025, 0.053, 0.033, 0.050, 0.050};