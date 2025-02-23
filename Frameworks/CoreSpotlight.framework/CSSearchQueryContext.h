/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSSearchQueryContext : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _bundleIDs;
    NSString * _clientBundleID;
    NSArray * _completionAttributes;
    unsigned int  _completionOptions;
    long long  _completionResultCount;
    NSString * _completionString;
    NSArray * _completionWeights;
    double  _currentTime;
    NSArray * _disableBundles;
    long long  _dominantRankingQueryCount;
    long long  _dominatedRankingQueryCount;
    NSArray * _fetchAttributes;
    NSArray * _filterQueries;
    NSString * _filterQuery;
    unsigned short  _flags;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMask;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _fuzzyMatch;
    long long  _highMatchBit;
    long long  _highRecencyBit;
    NSString * _keyboardLanguage;
    long long  _lowMatchBit;
    long long  _lowRecencyBit;
    NSArray * _markedTextArray;
    double  _maxAge;
    long long  _maxCount;
    long long  _minCount;
    double  _minL2Score;
    NSArray * _mountPoints;
    NSArray * _preferredLanguages;
    NSArray * _protectionClasses;
    unsigned int  _qos;
    long long  _queryID;
    NSArray * _rankingQueries;
    int  _rankingType;
    NSString * _reason;
    NSArray * _scopes;
    long long  _shortcutBit;
    long long  _strongRankingQueryCount;
    NSString * _userQuery;
}

@property (nonatomic) bool attribute;
@property (nonatomic, retain) NSArray *bundleIDs;
@property (nonatomic, retain) NSString *clientBundleID;
@property (nonatomic, retain) NSArray *completionAttributes;
@property (nonatomic) unsigned int completionOptions;
@property (nonatomic) long long completionResultCount;
@property (nonatomic, retain) NSString *completionString;
@property (nonatomic, retain) NSArray *completionWeights;
@property (nonatomic) bool counting;
@property (nonatomic) double currentTime;
@property (nonatomic) bool disableBlockingOnIndex;
@property (nonatomic, retain) NSArray *disableBundles;
@property (nonatomic) long long dominantRankingQueryCount;
@property (nonatomic) long long dominatedRankingQueryCount;
@property (nonatomic, retain) NSArray *fetchAttributes;
@property (nonatomic, copy) NSArray *filterQueries;
@property (nonatomic, retain) NSString *filterQuery;
@property (nonatomic) unsigned short flags;
@property (nonatomic) bool fsOnly;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMask;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*fuzzyMatch;
@property (nonatomic) bool grouped;
@property (nonatomic) long long highMatchBit;
@property (nonatomic) long long highRecencyBit;
@property (nonatomic) bool includeUserActivities;
@property (nonatomic) bool internal;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic) bool live;
@property (nonatomic) long long lowMatchBit;
@property (nonatomic) bool lowPriority;
@property (nonatomic) long long lowRecencyBit;
@property (nonatomic, retain) NSArray *markedTextArray;
@property (nonatomic) double maxAge;
@property (nonatomic) long long maxCount;
@property (nonatomic) long long minCount;
@property (nonatomic) double minL2Score;
@property (nonatomic, retain) NSArray *mountPoints;
@property (nonatomic, copy) NSDictionary *options;
@property (nonatomic) bool parseUserQuery;
@property (nonatomic) bool playback;
@property (nonatomic, retain) NSArray *preferredLanguages;
@property (nonatomic, retain) NSArray *protectionClasses;
@property (nonatomic) unsigned int qos;
@property (nonatomic) long long queryID;
@property (nonatomic, retain) NSArray *rankingQueries;
@property (nonatomic) int rankingType;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSArray *scopes;
@property (nonatomic) long long shortcutBit;
@property (nonatomic) long long strongRankingQueryCount;
@property (nonatomic, retain) NSString *userQuery;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)attribute;
- (id)bundleIDs;
- (id)clientBundleID;
- (id)completionAttributes;
- (unsigned int)completionOptions;
- (long long)completionResultCount;
- (id)completionString;
- (id)completionWeights;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)counting;
- (double)currentTime;
- (id)debugDescription;
- (id)description;
- (bool)disableBlockingOnIndex;
- (id)disableBundles;
- (long long)dominantRankingQueryCount;
- (long long)dominatedRankingQueryCount;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (id)filterQuery;
- (unsigned short)flags;
- (bool)fsOnly;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMask;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)fuzzyMatch;
- (bool)grouped;
- (long long)highMatchBit;
- (long long)highRecencyBit;
- (bool)includeUserActivities;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithQoS:(unsigned int)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (bool)internal;
- (id)keyboardLanguage;
- (bool)live;
- (long long)lowMatchBit;
- (bool)lowPriority;
- (long long)lowRecencyBit;
- (id)markedTextArray;
- (double)maxAge;
- (long long)maxCount;
- (long long)minCount;
- (double)minL2Score;
- (id)mountPoints;
- (id)options;
- (bool)parseUserQuery;
- (bool)playback;
- (id)preferredLanguages;
- (id)protectionClasses;
- (unsigned int)qos;
- (long long)queryID;
- (id)rankingQueries;
- (int)rankingType;
- (id)reason;
- (id)scopes;
- (void)setAttribute:(bool)arg1;
- (void)setBundleIDs:(id)arg1;
- (void)setClientBundleID:(id)arg1;
- (void)setCompletionAttributes:(id)arg1;
- (void)setCompletionOptions:(unsigned int)arg1;
- (void)setCompletionResultCount:(long long)arg1;
- (void)setCompletionString:(id)arg1;
- (void)setCompletionWeights:(id)arg1;
- (void)setCounting:(bool)arg1;
- (void)setCurrentTime:(double)arg1;
- (void)setDisableBlockingOnIndex:(bool)arg1;
- (void)setDisableBundles:(id)arg1;
- (void)setDominantRankingQueryCount:(long long)arg1;
- (void)setDominatedRankingQueryCount:(long long)arg1;
- (void)setFetchAttributes:(id)arg1;
- (void)setFilterQueries:(id)arg1;
- (void)setFilterQuery:(id)arg1;
- (void)setFlags:(unsigned short)arg1;
- (void)setFsOnly:(bool)arg1;
- (void)setFuzzyMask:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setFuzzyMatch:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setGrouped:(bool)arg1;
- (void)setHighMatchBit:(long long)arg1;
- (void)setHighRecencyBit:(long long)arg1;
- (void)setIncludeUserActivities:(bool)arg1;
- (void)setInternal:(bool)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setLive:(bool)arg1;
- (void)setLowMatchBit:(long long)arg1;
- (void)setLowPriority:(bool)arg1;
- (void)setLowRecencyBit:(long long)arg1;
- (void)setMarkedTextArray:(id)arg1;
- (void)setMaxAge:(double)arg1;
- (void)setMaxCount:(long long)arg1;
- (void)setMinCount:(long long)arg1;
- (void)setMinL2Score:(double)arg1;
- (void)setMountPoints:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setParseUserQuery:(bool)arg1;
- (void)setPlayback:(bool)arg1;
- (void)setPreferredLanguages:(id)arg1;
- (void)setProtectionClasses:(id)arg1;
- (void)setQos:(unsigned int)arg1;
- (void)setQueryID:(long long)arg1;
- (void)setRankingQueries:(id)arg1;
- (void)setRankingType:(int)arg1;
- (void)setReason:(id)arg1;
- (void)setScopes:(id)arg1;
- (void)setShortcutBit:(long long)arg1;
- (void)setStrongRankingQueryCount:(long long)arg1;
- (void)setUserQuery:(id)arg1;
- (long long)shortcutBit;
- (long long)strongRankingQueryCount;
- (id)userQuery;
- (id)xpc_dictionary;

@end
