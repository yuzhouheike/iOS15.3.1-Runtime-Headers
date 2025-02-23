/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface MWTSchemaMWTVMCPUStatsReported : SISchemaInstrumentationMessage {
    unsigned long long  _compressions;
    unsigned long long  _cpuTicksIdle;
    unsigned long long  _cpuTicksNice;
    unsigned long long  _cpuTicksSystem;
    unsigned long long  _cpuTicksUser;
    unsigned long long  _decompressions;
    unsigned long long  _faults;
    struct { 
        unsigned int snapshotStage : 1; 
        unsigned int cpuTicksSystem : 1; 
        unsigned int cpuTicksUser : 1; 
        unsigned int cpuTicksIdle : 1; 
        unsigned int cpuTicksNice : 1; 
        unsigned int compressions : 1; 
        unsigned int decompressions : 1; 
        unsigned int pageins : 1; 
        unsigned int faults : 1; 
    }  _has;
    unsigned long long  _pageins;
    int  _snapshotStage;
}

@property (nonatomic) unsigned long long compressions;
@property (nonatomic) unsigned long long cpuTicksIdle;
@property (nonatomic) unsigned long long cpuTicksNice;
@property (nonatomic) unsigned long long cpuTicksSystem;
@property (nonatomic) unsigned long long cpuTicksUser;
@property (nonatomic) unsigned long long decompressions;
@property (nonatomic) unsigned long long faults;
@property (nonatomic) bool hasCompressions;
@property (nonatomic) bool hasCpuTicksIdle;
@property (nonatomic) bool hasCpuTicksNice;
@property (nonatomic) bool hasCpuTicksSystem;
@property (nonatomic) bool hasCpuTicksUser;
@property (nonatomic) bool hasDecompressions;
@property (nonatomic) bool hasFaults;
@property (nonatomic) bool hasPageins;
@property (nonatomic) bool hasSnapshotStage;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long pageins;
@property (nonatomic) int snapshotStage;

- (unsigned long long)compressions;
- (unsigned long long)cpuTicksIdle;
- (unsigned long long)cpuTicksNice;
- (unsigned long long)cpuTicksSystem;
- (unsigned long long)cpuTicksUser;
- (unsigned long long)decompressions;
- (id)dictionaryRepresentation;
- (unsigned long long)faults;
- (bool)hasCompressions;
- (bool)hasCpuTicksIdle;
- (bool)hasCpuTicksNice;
- (bool)hasCpuTicksSystem;
- (bool)hasCpuTicksUser;
- (bool)hasDecompressions;
- (bool)hasFaults;
- (bool)hasPageins;
- (bool)hasSnapshotStage;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned long long)pageins;
- (bool)readFrom:(id)arg1;
- (void)setCompressions:(unsigned long long)arg1;
- (void)setCpuTicksIdle:(unsigned long long)arg1;
- (void)setCpuTicksNice:(unsigned long long)arg1;
- (void)setCpuTicksSystem:(unsigned long long)arg1;
- (void)setCpuTicksUser:(unsigned long long)arg1;
- (void)setDecompressions:(unsigned long long)arg1;
- (void)setFaults:(unsigned long long)arg1;
- (void)setHasCompressions:(bool)arg1;
- (void)setHasCpuTicksIdle:(bool)arg1;
- (void)setHasCpuTicksNice:(bool)arg1;
- (void)setHasCpuTicksSystem:(bool)arg1;
- (void)setHasCpuTicksUser:(bool)arg1;
- (void)setHasDecompressions:(bool)arg1;
- (void)setHasFaults:(bool)arg1;
- (void)setHasPageins:(bool)arg1;
- (void)setHasSnapshotStage:(bool)arg1;
- (void)setPageins:(unsigned long long)arg1;
- (void)setSnapshotStage:(int)arg1;
- (int)snapshotStage;
- (void)writeTo:(id)arg1;

@end
