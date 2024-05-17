/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISTransform3DGrader : NSObject {
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _allowedRotations;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _allowedScales;
    struct vector<double, std::allocator<double>> { 
        double *__begin_; 
        double *__end_; 
        struct __compressed_pair<double *, std::allocator<double>> { 
            double *__value_; 
        } __end_cap_; 
    }  _allowedSkews;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)allowRotations:(const double*)arg1 count:(unsigned long long)arg2;
- (void)allowRotations:(const double*)arg1 count:(unsigned long long)arg2 lowerMultiplier:(double)arg3 lowerConstant:(double)arg4 upperMultiplier:(double)arg5 upperConstant:(double)arg6;
- (void)allowScales:(const double*)arg1 count:(unsigned long long)arg2;
- (void)allowScales:(const double*)arg1 count:(unsigned long long)arg2 lowerMultiplier:(double)arg3 lowerConstant:(double)arg4 upperMultiplier:(double)arg5 upperConstant:(double)arg6;
- (void)allowSkews:(const double*)arg1 count:(unsigned long long)arg2;
- (void)allowSkews:(const double*)arg1 count:(unsigned long long)arg2 lowerMultiplier:(double)arg3 lowerConstant:(double)arg4 upperMultiplier:(double)arg5 upperConstant:(double)arg6;
- (unsigned long long)gradeTransform3D:(struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })arg1;
- (id)init;

@end
