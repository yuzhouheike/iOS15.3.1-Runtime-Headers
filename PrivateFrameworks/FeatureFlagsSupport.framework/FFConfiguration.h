/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FeatureFlagsSupport.framework/FeatureFlagsSupport
 */

@interface FFConfiguration : NSObject {
    NSMutableSet * _domains;
    <FFFileReader> * _filereader;
    <FFFileWriter> * _filewriter;
    NSMutableArray * _profilePayloads;
    NSMutableDictionary * configByLevel;
    NSMutableSet * disclosuresByLevel;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    NSMutableDictionary * metaByLevel;
    NSArray * searchPaths;
}

@property (nonatomic, readonly) NSSet *domains;
@property (nonatomic, retain) <FFFileReader> *filereader;
@property (nonatomic, retain) <FFFileWriter> *filewriter;
@property (nonatomic, retain) NSMutableArray *profilePayloads;

+ (id)_configurationForTestingWithFileReader:(id)arg1 fileWriter:(id)arg2;
+ (id)configurationForProfileManagement;
+ (id)configurationForTestingWithFileReader:(id)arg1;
+ (id)configurationForTestingWithFileReader:(id)arg1 fileWriter:(id)arg2;
+ (id)configurationForTestingWithFileWriter:(id)arg1;
+ (bool)isValidDisclosureName:(id)arg1;
+ (bool)isValidName:(id)arg1;
+ (id)shared;

- (void).cxx_destruct;
- (void)addDisclosure:(id)arg1 atLevel:(long long)arg2;
- (void)addFeaturesForDomain:(id)arg1 pathIndex:(int)arg2 fromURL:(id)arg3;
- (bool)addProfilePayload:(id)arg1 error:(id*)arg2;
- (void)clearCachedData;
- (bool)commitProfilePayloadsAndReturnError:(id*)arg1;
- (bool)commitUpdates:(id*)arg1;
- (void)createMutableDomainConfig:(id)arg1 level:(long long)arg2;
- (id)currentDisclosures;
- (id)currentDisclosuresAtLevel:(long long)arg1;
- (id)defaultStateForFeature:(id)arg1 domain:(id)arg2;
- (void)disableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)disableFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2;
- (id)disclosureFileURLForLevel:(long long)arg1 pathIndex:(int)arg2;
- (id)domains;
- (id)effectiveStateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)enableFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)enableFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2;
- (id)featuresForDomain:(id)arg1;
- (id)fileURLForDomain:(id)arg1 pathIndex:(int)arg2;
- (id)fileURLForLevel:(long long)arg1 pathIndex:(int)arg2;
- (id)filereader;
- (id)filewriter;
- (id)initPrivate;
- (void)invalidateCache;
- (bool)isFeatureHidden:(id)arg1 domain:(id)arg2;
- (bool)isValidDisclosureName:(id)arg1;
- (bool)isValidName:(id)arg1;
- (void)loadAllData;
- (void)loadAllLevelsForDomain:(id)arg1;
- (void)loadCombinedDataForLevel:(long long)arg1;
- (void)loadDomain:(id)arg1 level:(long long)arg2;
- (id)makeFeatureDictionaryFrom:(id)arg1 forDomain:(id)arg2;
- (id)mutableDisclosureSetAtLevel:(long long)arg1;
- (void)populateDictionary:(id)arg1 withFeatures:(id)arg2;
- (void)prepareToAddProfilePayloads;
- (id)profilePayloads;
- (void)removeAllDisclosuresAtLevel:(long long)arg1;
- (void)removeDisclosure:(id)arg1 atLevel:(long long)arg2;
- (bool)reset:(id*)arg1;
- (bool)resetDomain:(id)arg1 error:(id*)arg2;
- (bool)resolvedStateForDisclosure:(id)arg1;
- (id)resolvedStateForFeature:(id)arg1 domain:(id)arg2;
- (void)setFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2 value:(long long)arg3;
- (void)setFilereader:(id)arg1;
- (void)setFilewriter:(id)arg1;
- (void)setProfilePayloads:(id)arg1;
- (void)setValue:(long long)arg1 feature:(id)arg2 domain:(id)arg3 level:(long long)arg4;
- (id)stateForFeature:(id)arg1 domain:(id)arg2;
- (id)stateForFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)unsetFeature:(id)arg1 domain:(id)arg2 level:(long long)arg3;
- (void)unsetFeaturesMatchingAttribute:(id)arg1 level:(long long)arg2;
- (void)validateName:(id)arg1;
- (bool)writeCombinedUpdates:(id*)arg1;
- (bool)writeCombinedUpdatesAtLevel:(long long)arg1 error:(id*)arg2;
- (bool)writeDisclosureUpdates:(id*)arg1;
- (bool)writeDisclosureUpdatesAtlevel:(long long)arg1 error:(id*)arg2;
- (bool)writeDomainUpdates:(id*)arg1;

@end
