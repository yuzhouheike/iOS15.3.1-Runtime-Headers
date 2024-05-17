/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface _MTLFunction : _MTLObjectWithLabel <MTLFunctionSPI> {
    NSArray * _arguments;
    MTLDebugInstrumentationData * _debugInstrumentationData;
    <MTLDevice> * _device;
    NSDictionary * _functionConstantDictionary;
    struct { 
        unsigned char key[32]; 
    }  _functionConstantSpecializationHash;
    NSArray * _functionConstants;
    unsigned long long  _functionType;
    NSArray * _importedLibraries;
    NSArray * _importedSymbols;
    struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; } * _libraryData;
    NSString * _name;
    unsigned long long  _options;
    NSObject<OS_dispatch_data> * _precompiledOutput;
    NSArray * _relocations;
    MTLType * _returnType;
    NSString * _unpackedFilePath;
    id  _vendorPrivate;
    NSArray * _vertexAttributes;
}

@property NSArray *arguments;
@property (readonly) unsigned long long bitCodeOffset;
@property (nonatomic) unsigned char bitcodeType;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) MTLDebugInstrumentationData *debugInstrumentationData;
@property (readonly, copy) NSString *description;
@property (readonly) <MTLDevice> *device;
@property (copy) NSString *filePath;
@property NSArray *functionConstants;
@property (readonly) NSDictionary *functionConstantsDictionary;
@property (nonatomic, readonly) <MTLFunctionHandle> *functionHandle;
@property (readonly) NSObject<OS_dispatch_data> *functionInputs;
@property (readonly) unsigned long long functionType;
@property (readonly) unsigned long long hash;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;
@property (copy) NSString *label;
@property (readonly) struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*libraryData;
@property long long lineNumber;
@property (readonly) NSString *name;
@property (readonly) bool needsFunctionConstantValues;
@property (readonly) unsigned long long options;
@property (readonly) long long patchControlPointCount;
@property (readonly) unsigned long long patchType;
@property NSData *pluginData;
@property NSObject<OS_dispatch_data> *precompiledOutput;
@property (nonatomic, copy) NSArray *relocations;
@property (readonly) unsigned long long renderTargetArrayIndexType;
@property MTLType *returnType;
@property (readonly) NSArray *stageInputAttributes;
@property (readonly) Class superclass;
@property (copy) NSString *unpackedFilePath;
@property (readonly) id vendorPrivate;
@property NSArray *vertexAttributes;

- (unsigned long long)bitCodeFileSize;
- (const struct { unsigned char x1[32]; }*)bitCodeHash;
- (id)bitcodeData;
- (void)dealloc;
- (id)debugInstrumentationData;
- (id)description;
- (id)device;
- (id)formattedDescription:(unsigned long long)arg1;
- (const struct { unsigned char x1[32]; }*)functionConstantSpecializationHash;
- (id)functionConstantsDictionary;
- (id)functionHandle;
- (unsigned int)functionRef;
- (unsigned long long)functionType;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)initWithName:(id)arg1 type:(unsigned long long)arg2 libraryData:(struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)arg3 device:(id)arg4;
- (struct MTLLibraryData { int (**x1)(); struct { unsigned char x_2_1_1[32]; } x2; _Atomic int x3; id x4; id x5; }*)libraryData;
- (id)name;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 functionReflection:(id)arg3;
- (id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3;
- (id)newFunctionWithPluginData:(id)arg1 bitcodeType:(unsigned char)arg2;
- (unsigned long long)options;
- (id)reflectionWithOptions:(unsigned long long)arg1;
- (id)reflectionWithOptions:(unsigned long long)arg1 binaryArchives:(id)arg2;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (id)reflectionWithOptions:(unsigned long long)arg1 pipelineLibrary:(id)arg2;
- (void)setDebugInstrumentationData:(id)arg1;
- (void)setUnpackedFilePath:(id)arg1;
- (void)setVendorPrivate:(id)arg1;
- (id)unpackedFilePath;
- (id)vendorPrivate;

@end
