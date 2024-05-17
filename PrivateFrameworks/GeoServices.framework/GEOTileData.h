/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileData : NSObject <GEOXPCSerializable> {
    unsigned long long  _cachedFileSize;
    NSData * _data;
    id  _decodedRepresentation;
    NSURL * _fileURL;
    long long  _sandboxExtension;
}

@property (nonatomic, readonly) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) id decodedRepresentation;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSURL *fileURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_replaceFileURL:(id)arg1;
- (id)data;
- (void)dealloc;
- (id)decodedRepresentation;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)fileURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDecodedRepresentation:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (id)readDataWithError:(id*)arg1;

@end
