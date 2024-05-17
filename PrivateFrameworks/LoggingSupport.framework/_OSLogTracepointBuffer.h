/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface _OSLogTracepointBuffer : NSObject {
    unsigned long long  _count;
    unsigned long long  _cursor;
    struct { unsigned int x1; unsigned long long x2; union { struct { struct tracev3_chunk_s {} *x_1_2_1; struct catalog_s {} *x_1_2_2; struct _OSLogEventChunkContext { struct tracev3_chunk_s {} *x_3_3_1; struct _firehose_unaligned_chunk_s {} *x_3_3_2; struct iovec { void *x_3_4_1; unsigned long long x_3_4_2; } x_3_3_3; struct catalog_procinfo_s {} *x_3_3_4; } x_1_2_3; struct _firehose_unaligned_tracepoint_s {} *x_1_2_4; } x_3_1_1; struct { unsigned char x_2_2_1[16]; struct os_timesync_time_entry_s { struct os_timesync_header_s { unsigned short x_1_4_1; unsigned short x_1_4_2; unsigned int x_1_4_3; } x_2_3_1; unsigned long long x_2_3_2; unsigned long long x_2_3_3; struct timezone { int x_4_4_1; int x_4_4_2; } x_2_3_4; } x_2_2_2; } x_3_1_2; struct { unsigned char x_3_2_1[16]; unsigned char x_3_2_2; bool x_3_2_3; } x_3_1_3; } x3; } * _events;
    bool  _mutable;
    unsigned long long  _size;
}

- (bool)_isEmpty;
- (void)beginInsertingTracepointsClippingFromTime:(unsigned long long)arg1;
- (void)dealloc;
- (void)enumerateEventsFromTime:(unsigned long long)arg1 to:(unsigned long long)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (void)finishedInsertingTracepointsWithNextMajorTime:(unsigned long long)arg1 options:(unsigned int)arg2;
- (id)init;
- (void)insertChunk:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg1 timestamp:(unsigned long long)arg2 subchunk:(id)arg3;
- (void)insertNonsparsePoint:(unsigned long long)arg1 uuid:(unsigned char)arg2 ttl:(unsigned char)arg3 inMemory:(bool)arg4;
- (void)insertSimpleChunk:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg1 subchunk:(id)arg2;
- (void)insertStatedumpChunk:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg1 subchunk:(id)arg2;
- (void)insertTimesyncPoints:(struct _os_timesync_db_s { }*)arg1 forBoot:(unsigned char)arg2 oldestContinuousTime:(unsigned long long)arg3;
- (void)insertTracepoints:(struct tracev3_chunk_s { struct tracev3_chunk_preamble_s { unsigned int x_1_1_1; unsigned int x_1_1_2; unsigned long long x_1_1_3; } x1; union { struct tracev3_chunk_header_s { struct mach_timebase_info { unsigned int x_1_3_1; unsigned int x_1_3_2; } x_1_2_1; unsigned long long x_1_2_2; long long x_1_2_3; int x_1_2_4; int x_1_2_5; int x_1_2_6; unsigned int x_1_2_7; struct tracev3_subchunk_preamble_s { unsigned int x_8_3_1; unsigned int x_8_3_2; } x_1_2_8; struct tracev3_subchunk_continuous_s { unsigned long long x_9_3_1; } x_1_2_9; struct tracev3_subchunk_preamble_s { unsigned int x_10_3_1; unsigned int x_10_3_2; } x_1_2_10; struct tracev3_subchunk_systeminfo_s { int x_11_3_1; int x_11_3_2; BOOL x_11_3_3[16]; BOOL x_11_3_4[32]; } x_1_2_11; struct tracev3_subchunk_preamble_s { unsigned int x_12_3_1; unsigned int x_12_3_2; } x_1_2_12; struct tracev3_subchunk_generation_s { unsigned char x_13_3_1[16]; int x_13_3_2; int x_13_3_3; } x_1_2_13; struct tracev3_subchunk_preamble_s { unsigned int x_14_3_1; unsigned int x_14_3_2; } x_1_2_14; struct tracev3_subchunk_timezone_s { BOOL x_15_3_1[48]; } x_1_2_15; } x_2_1_1; struct tracev3_chunk_catalog_s { unsigned short x_2_2_1; unsigned short x_2_2_2; unsigned short x_2_2_3; unsigned short x_2_2_4; unsigned char x_2_2_5[0]; } x_2_1_2; } x2; }*)arg1 subchunk:(id)arg2 options:(unsigned int)arg3;

@end
