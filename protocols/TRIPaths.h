/* Generated by RuntimeBrowser.
 */

@protocol TRIPaths

@required

+ (NSString *)resolveHardCodedPath:(NSString *)arg1;

- (NSString *)assetStore;
- (TRIAppContainer *)container;
- (NSString *)containerDir;
- (NSString *)databaseDir;
- (NSString *)decryptionKeyDirForAppleInternal:(bool)arg1;
- (NSString *)deviceIdentifierFile;
- (NSString *)experimentsDir;
- (NSString *)localTempDir;
- (NSString *)logDir;
- (NSString *)namespaceDescriptorsDefaultDir;
- (NSString *)namespaceDescriptorsDir;
- (NSString *)namespaceDescriptorsExperimentDir;
- (NSString *)namespaceDescriptorsPathForLayer:(unsigned long long)arg1;
- (NSString *)namespaceDescriptorsRolloutDir;
- (<TRIPaths> *)pathsForContainer:(TRIAppContainer *)arg1 asClientProcess:(bool)arg2;
- (NSString *)subjectDataFile;
- (NSString *)systemDataFile;
- (NSString *)treatmentsDir;
- (NSString *)trialRootDir;
- (NSString *)trialRootVolume;
- (bool)validateWithError:(id*)arg1;

@end
