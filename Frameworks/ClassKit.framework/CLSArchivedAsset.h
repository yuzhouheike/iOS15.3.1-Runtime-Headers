/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSArchivedAsset : CLSObject <CLSRelationable> {
    bool  _addedToFilePresenter;
    NSString * _brItemID;
    NSString * _brOwnerName;
    NSString * _brShareName;
    NSString * _brZoneName;
    long long  _completedUnitCount;
    NSString * _ownerPersonID;
    NSString * _relativePathWithinContainer;
    bool  _shared;
    long long  _totalUnitCount;
    NSString * _ubiquitousContainerName;
    bool  _uploaded;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *brItemID;
@property (nonatomic, retain) NSString *brOwnerName;
@property (nonatomic, retain) NSString *brShareName;
@property (nonatomic, retain) NSString *brZoneName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *ownerPersonID;
@property (nonatomic, retain) NSString *relativePathWithinContainer;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *ubiquitousContainerName;
@property (nonatomic, retain) NSURL *url;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_init;
- (id)brItemID;
- (id)brOwnerName;
- (id)brShareName;
- (id)brZoneName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ownerPersonID;
- (id)relativePathWithinContainer;
- (void)setBrItemID:(id)arg1;
- (void)setBrOwnerName:(id)arg1;
- (void)setBrShareName:(id)arg1;
- (void)setBrZoneName:(id)arg1;
- (void)setOwnerPersonID:(id)arg1;
- (void)setRelativePathWithinContainer:(id)arg1;
- (void)setUbiquitousContainerName:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)ubiquitousContainerName;
- (id)url;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)arg1;

@end
