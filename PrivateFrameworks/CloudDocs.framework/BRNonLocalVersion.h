/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRNonLocalVersion : NSObject {
    NSString * _displayName;
    NSString * _etag;
    bool  _hasThumbnail;
    NSString * _lastEditorDeviceName;
    NSPersonNameComponents * _lastEditorNameComponents;
    NSDate * _modificationDate;
    NSURL * _physicalURL;
    long long  _sandboxHandle;
    unsigned long long  _size;
    NSURL * _url;
    GSPermanentStorage * _versionsStore;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *etag;
@property (nonatomic) bool hasThumbnail;
@property (nonatomic, readonly) bool isLatestVersion;
@property (nonatomic, readonly) NSString *lastEditorDeviceName;
@property (nonatomic, readonly) NSString *lastEditorFormattedName;
@property (nonatomic, readonly) NSPersonNameComponents *lastEditorNameComponents;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) <NSCopying><NSSecureCoding> *persistentIdentifier;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) NSURL *url;

+ (id)listVersionsOfDocumentAtURL:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)etag;
- (bool)hasThumbnail;
- (id)initWithURL:(id)arg1 physicalURL:(id)arg2 size:(id)arg3 extension:(id)arg4 etag:(id)arg5 hasThumbnail:(bool)arg6 displayName:(id)arg7 lastEditorDeviceName:(id)arg8 lastEditorNameComponents:(id)arg9 modificationDate:(id)arg10 versionsStore:(id)arg11;
- (bool)isLatestVersion;
- (id)lastEditorDeviceName;
- (id)lastEditorFormattedName;
- (id)lastEditorNameComponents;
- (id)modificationDate;
- (id)persistentIdentifier;
- (void)setHasThumbnail:(bool)arg1;
- (unsigned long long)size;
- (id)url;

@end
