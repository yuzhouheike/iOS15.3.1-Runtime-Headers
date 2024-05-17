/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _cloudIdentifier;
    NSString * _contentText;
    NSURL * _contentURL;
    NSDate * _creationDate;
    NSUUID * _identifier;
    NSString * _photoLocalIdentifier;
    NSNumber * _size;
    NSString * _uti;
}

@property (retain) NSUUID *cloudIdentifier;
@property (retain) NSString *contentText;
@property (retain) NSURL *contentURL;
@property (retain) NSDate *creationDate;
@property (retain) NSUUID *identifier;
@property (retain) NSString *photoLocalIdentifier;
@property (retain) NSNumber *size;
@property (retain) NSString *uti;

+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5;
+ (id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudIdentifier;
- (id)contentText;
- (id)contentURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 photoLocalIdentifier:(id)arg3 type:(id)arg4 sizeInBytes:(id)arg5 creationDate:(id)arg6 contentURL:(id)arg7 contentText:(id)arg8;
- (id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7;
- (bool)isEqual:(id)arg1;
- (id)photoLocalIdentifier;
- (void)setCloudIdentifier:(id)arg1;
- (void)setContentText:(id)arg1;
- (void)setContentURL:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPhotoLocalIdentifier:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setUti:(id)arg1;
- (id)size;
- (id)uti;

@end
