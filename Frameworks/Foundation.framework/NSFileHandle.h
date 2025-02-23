/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileHandle : NSObject <NSSecureCoding>

@property (readonly, copy) NSData *availableData;
@property (readonly) unsigned long long offsetInFile;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)fileHandleForReadingAtPath:(id)arg1;
+ (id)fileHandleForReadingFromURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForReadingFromURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForUpdatingAtPath:(id)arg1;
+ (id)fileHandleForUpdatingURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForUpdatingURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleForWritingAtPath:(id)arg1;
+ (id)fileHandleForWritingToURL:(id)arg1 error:(id*)arg2;
+ (id)fileHandleForWritingToURL:(id)arg1 mode:(unsigned short)arg2 error:(id*)arg3;
+ (id)fileHandleWithNullDevice;
+ (id)fileHandleWithStandardError;
+ (id)fileHandleWithStandardInput;
+ (id)fileHandleWithStandardOutput;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void)_closeOnDealloc;
- (id)availableData;
- (Class)classForCoder;
- (bool)closeAndReturnError:(out id*)arg1;
- (void)closeFile;
- (void)encodeWithCoder:(id)arg1;
- (int)fileDescriptor;
- (bool)getOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileDescriptor:(int)arg1;
- (id)initWithFileDescriptor:(int)arg1 closeOnDealloc:(bool)arg2;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3;
- (id)initWithPath:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (id)initWithURL:(id)arg1 flags:(long long)arg2 createMode:(long long)arg3 error:(id*)arg4;
- (unsigned long long)offsetInFile;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)readDataToEndOfFile;
- (id)readDataToEndOfFileAndReturnError:(out id*)arg1;
- (id)readDataUpToLength:(unsigned long long)arg1 error:(out id*)arg2;
- (id /* block */)readabilityHandler;
- (unsigned long long)seekToEndOfFile;
- (bool)seekToEndReturningOffset:(out unsigned long long*)arg1 error:(out id*)arg2;
- (void)seekToFileOffset:(unsigned long long)arg1;
- (bool)seekToOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (void)setReadabilityHandler:(id /* block */)arg1;
- (void)setWriteabilityHandler:(id /* block */)arg1;
- (bool)synchronizeAndReturnError:(out id*)arg1;
- (void)synchronizeFile;
- (bool)truncateAtOffset:(unsigned long long)arg1 error:(out id*)arg2;
- (void)truncateFileAtOffset:(unsigned long long)arg1;
- (void)writeData:(id)arg1;
- (bool)writeData:(id)arg1 error:(out id*)arg2;
- (id /* block */)writeabilityHandler;

@end
