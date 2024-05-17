/* Generated by RuntimeBrowser.
 */

@protocol GEOBatchOpportunisticTileDownloaderDelegate <NSObject>

@required

- (void)batchOpportunisticTileDownloader:(GEOBatchOpportunisticTileDownloader *)arg1 failedToLoadKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 36; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg2 error:(NSError *)arg3;
- (void)batchOpportunisticTileDownloader:(GEOBatchOpportunisticTileDownloader *)arg1 receivedData:(GEOTileData *)arg2 tileEdition:(unsigned int)arg3 tileSet:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 8; union { struct { unsigned int x_1_3_1 : 14; unsigned int x_1_3_2 : 4; unsigned int x_1_3_3 : 4; } x_2_2_1; struct { unsigned int x_2_3_1 : 8; unsigned int x_2_3_2 : 16; } x_2_2_2; } x_2_1_2; } x2; })arg4 etag:(NSString *)arg5 forKey:(struct _GEOTileKey { unsigned int x1 : 7; unsigned int x2 : 1; union { struct _GEOStandardTileKey { unsigned int x_1_2_1 : 40; unsigned int x_1_2_2 : 6; unsigned int x_1_2_3 : 26; unsigned int x_1_2_4 : 26; unsigned int x_1_2_5 : 14; unsigned int x_1_2_6 : 4; unsigned int x_1_2_7 : 4; } x_3_1_1; struct _GEOGloriaQuadIDTileKey { unsigned int x_2_2_1 : 6; unsigned int x_2_2_2 : 64; unsigned int x_2_2_3 : 14; unsigned int x_2_2_4 : 36; } x_3_1_2; struct _GEORegionalResourceKey { unsigned int x_3_2_1 : 32; unsigned int x_3_2_2 : 8; unsigned int x_3_2_3 : 6; unsigned int x_3_2_4 : 8; unsigned int x_3_2_5 : 8; unsigned int x_3_2_6 : 1; unsigned int x_3_2_7 : 57; } x_3_1_3; struct _GEOSputnikMetadataKey { unsigned int x_4_2_1 : 32; unsigned int x_4_2_2 : 24; unsigned int x_4_2_3 : 14; unsigned int x_4_2_4 : 8; unsigned int x_4_2_5 : 42; } x_3_1_4; struct _GEOFlyoverKey { unsigned int x_5_2_1 : 6; unsigned int x_5_2_2 : 26; unsigned int x_5_2_3 : 26; unsigned int x_5_2_4 : 8; unsigned int x_5_2_5 : 24; unsigned int x_5_2_6 : 14; unsigned int x_5_2_7 : 8; unsigned int x_5_2_8 : 8; } x_3_1_5; } x3; })arg6 userInfo:(NSDictionary *)arg7;
- (void)batchOpportunisticTileDownloaderDidFinish:(GEOBatchOpportunisticTileDownloader *)arg1;

@end
