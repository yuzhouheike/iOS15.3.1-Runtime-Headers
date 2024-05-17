/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMerchantInformation : PBCodable <NSCopying> {
    struct { 
        unsigned int has_merchantCleanConfidenceLevel : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_merchantAdditionalData : 1; 
        unsigned int read_merchantAddress : 1; 
        unsigned int read_merchantCanl : 1; 
        unsigned int read_merchantCity : 1; 
        unsigned int read_merchantCountryCode : 1; 
        unsigned int read_merchantDoingBusinessAsName : 1; 
        unsigned int read_merchantEnhancedName : 1; 
        unsigned int read_merchantId : 1; 
        unsigned int read_merchantRawAddress : 1; 
        unsigned int read_merchantRawCity : 1; 
        unsigned int read_merchantRawState : 1; 
        unsigned int read_merchantState : 1; 
        unsigned int read_merchantType : 1; 
        unsigned int read_merchantZip : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _merchantAdditionalData;
    NSString * _merchantAddress;
    NSString * _merchantCanl;
    NSString * _merchantCity;
    int  _merchantCleanConfidenceLevel;
    NSString * _merchantCountryCode;
    NSString * _merchantDoingBusinessAsName;
    NSString * _merchantEnhancedName;
    NSString * _merchantId;
    NSString * _merchantRawAddress;
    NSString * _merchantRawCity;
    NSString * _merchantRawState;
    NSString * _merchantState;
    NSString * _merchantType;
    NSString * _merchantZip;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
