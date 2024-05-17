/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLookThumbnailing.framework/QuickLookThumbnailing
 */

@interface QLThumbnailHostContext : NSExtensionContext <QLThumbnailHost> {
    <QLThumbnailSurfaceGeneratorProtocol> * _ioSurfaceGenerator;
    NSOperationQueue * _thumbnailGenerationConcurrenQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <QLThumbnailSurfaceGeneratorProtocol> *ioSurfaceGenerator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSOperationQueue *thumbnailGenerationConcurrenQueue;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;

- (void).cxx_destruct;
- (void)generateThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 minimumSize:(double)arg2 scale:(double)arg3 badgeType:(unsigned long long)arg4 iconFlavor:(int)arg5 withItem:(id)arg6 ioSurfaceGenerator:(id)arg7 generatorData:(id)arg8 interpolationQuality:(int)arg9 completionHandler:(id /* block */)arg10;
- (id)ioSurfaceGenerator;
- (void)ioSurfaceWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)protocolServiceWithErrorHandler:(id /* block */)arg1;
- (void)setIoSurfaceGenerator:(id)arg1;
- (void)setThumbnailGenerationConcurrenQueue:(id)arg1;
- (id)thumbnailGenerationConcurrenQueue;

@end
