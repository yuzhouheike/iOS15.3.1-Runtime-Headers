/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBinaryEntry : NSObject {
    NSObject<OS_dispatch_data> * _data;
    NSArray * _importedLibraries;
    NSArray * _importedSymbols;
}

@property (readonly) NSObject<OS_dispatch_data> *data;
@property (readonly) NSArray *importedLibraries;
@property (readonly) NSArray *importedSymbols;

- (id)data;
- (void)dealloc;
- (id)description;
- (id)importedLibraries;
- (id)importedSymbols;
- (id)initWithData:(id)arg1 importedSymbols:(id)arg2 importedLibraries:(id)arg3;

@end
