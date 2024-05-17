/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
 */

@interface BWDeferredContainer : NSObject {
    NSString * _applicationID;
    NSURL * _baseFolderURL;
    NSArray * _bufferAttributes;
    NSString * _captureRequestIdentifier;
    long long  _creationTimeNS;
    NSMutableArray * _intermediates;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _lock;
    long long  _manifestVersion;
    NSMutableArray * _photoDescriptors;
    BWStillImageCaptureSettings * _stillImageCaptureSettings;
    FigCaptureStillImageSettings * _stillImageSettings;
    NSObject<OS_os_transaction> * _transaction;
}

@property (nonatomic, readonly) NSString *applicationID;
@property (nonatomic, readonly) NSArray *bufferAttributes;
@property (nonatomic, readonly) NSString *captureRequestIdentifier;
@property (nonatomic, readonly) unsigned long long captureRequestIdentifierBytesHigh;
@property (nonatomic, readonly) unsigned long long captureRequestIdentifierBytesLow;
@property (nonatomic, readonly) BWStillImageCaptureSettings *captureSettings;
@property (nonatomic, readonly) NSArray *intermediates;
@property (nonatomic, readonly) NSDictionary *manifest;
@property (nonatomic, readonly) long long manifestVersion;
@property (nonatomic, readonly) unsigned int processingType;
@property (nonatomic, readonly) FigCaptureStillImageSettings *settings;

+ (id)archiveObject:(id)arg1 error:(id*)arg2;
+ (bool)archiveObjectWithURL:(id)arg1 object:(id)arg2 error:(id*)arg3;
+ (id)buildArchiveClasses:(id)arg1;
+ (void)initialize;
+ (id)manifestDictionaryForCaptureRequestIdentifier:(id)arg1 photoDescriptors:(id)arg2;
+ (id)manifestDictionaryForURL:(id)arg1 err:(int*)arg2;
+ (id)unarchiveObject:(id)arg1 classes:(id)arg2 error:(id*)arg3;
+ (id)unarchiveObjectWithURL:(id)arg1 classes:(id)arg2 error:(id*)arg3;
+ (int)validateManifestURLSize:(id)arg1;

- (id)applicationID;
- (id)bufferAttributes;
- (id)captureRequestIdentifier;
- (unsigned long long)captureRequestIdentifierBytesHigh;
- (unsigned long long)captureRequestIdentifierBytesLow;
- (id)captureSettings;
- (void)dealloc;
- (id)description;
- (bool)hasTag:(id)arg1;
- (id)init;
- (id)initWithApplicationID:(id)arg1 captureRequestIdentifier:(id)arg2 baseFolderURL:(id)arg3 queuePriority:(unsigned int)arg4 err:(int*)arg5;
- (id)intermediates;
- (id)manifest;
- (long long)manifestVersion;
- (unsigned int)processingType;
- (id)settings;
- (bool)valid:(int*)arg1;

@end
