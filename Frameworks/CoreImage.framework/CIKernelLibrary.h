/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIKernelLibrary : NSObject {
    NSObject<OS_dispatch_data> * _data;
    NSSet * _extern_function_names;
    <MTLLibrary> * _library;
    NSMutableArray * _stitchable_function_names;
}

@property (readonly) unsigned long long functionCount;

+ (id)coreImageDylibWithDevice:(id)arg1;
+ (id)internalLibraryWithName:(id)arg1 device:(id)arg2;
+ (id)libraryWithData:(id)arg1 error:(id*)arg2;
+ (id)libraryWithSource:(id)arg1 error:(id*)arg2;

- (void)dealloc;
- (unsigned long long)functionCount;
- (id)functionNames;
- (id)functionWithName:(id)arg1;
- (void)initFunctionNames;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)initWithSource:(id)arg1 error:(id*)arg2;
- (id)newFunctionWithName:(id)arg1;
- (id)newMTLLibraryWithData:(id)arg1 data:(id)arg2 error:(id*)arg3;
- (id)newMTLLibraryWithSource:(id)arg1 source:(id)arg2 error:(id*)arg3;
- (id)newSpecializedFunctionWithName:(id)arg1 constants:(void*)arg2;

@end
