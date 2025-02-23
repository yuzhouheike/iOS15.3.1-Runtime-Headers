/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileWrapper : NSObject <NSSecureCoding> {
    id  _contents;
    NSDictionary * _fileAttributes;
    NSString * _fileName;
    id  _icon;
    id  _moreVars;
    NSString * _preferredFileName;
}

@property (getter=isDirectory, readonly) bool directory;
@property (copy) NSDictionary *fileAttributes;
@property (readonly, copy) NSDictionary *fileWrappers;
@property (copy) NSString *filename;
@property (copy) NSString *preferredFilename;
@property (getter=isRegularFile, readonly) bool regularFile;
@property (readonly, copy) NSData *regularFileContents;
@property (readonly, copy) NSData *serializedRepresentation;
@property (getter=isSymbolicLink, readonly) bool symbolicLink;
@property (readonly, copy) NSURL *symbolicLinkDestinationURL;

+ (bool)_canSafelyMapFilesAtPath:(id)arg1;
+ (bool)_finishWritingToURL:(id)arg1 byMovingItemAtURL:(id)arg2 addingAttributes:(id)arg3 error:(id*)arg4;
+ (bool)_finishWritingToURL:(id)arg1 byTakingContentsFromItemAtURL:(id)arg2 addingAttributes:(id)arg3 usingTemporaryDirectoryAtURL:(id)arg4 backupFileName:(id)arg5 error:(id*)arg6;
+ (bool)_forPath:(id)arg1 getItemKind:(id*)arg2 modificationDate:(id*)arg3;
+ (id)_newContentsAtURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 oldChildrenByUniqueFileName:(id)arg4 options:(unsigned long long)arg5 error:(id*)arg6;
+ (id)_pathForURL:(id)arg1 reading:(bool)arg2 error:(id*)arg3;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_temporaryDirectoryURLForWritingToURL:(id)arg1 error:(id*)arg2;
+ (void)_writeAttributes:(id)arg1 toURL:(id)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (id)_addChild:(id)arg1 forUniqueFileName:(id)arg2;
- (void)_addParent:(id)arg1;
- (id)_attributesToWrite;
- (bool)_forWritingToURL:(id)arg1 returnContentsLazyReadingError:(id*)arg2;
- (id)_fullDescription:(bool)arg1;
- (id)_init;
- (void)_initDirectoryContents;
- (id)_initWithImpl:(id)arg1 preferredFileName:(id)arg2 uniqueFileName:(id)arg3 docInfo:(id)arg4 iconData:(id)arg5;
- (bool)_matchesItemKind:(id)arg1 modificationDate:(id)arg2;
- (id)_newImpl;
- (void)_observePreferredFileNameOfChild:(id)arg1;
- (bool)_readContentsFromURL:(id)arg1 path:(id)arg2 itemKind:(id)arg3 options:(unsigned long long)arg4 error:(id*)arg5;
- (void)_removeChild:(id)arg1 forUniqueFileName:(id)arg2;
- (void)_removeParent:(id)arg1;
- (void)_resetFileModificationDate;
- (id)_uniqueFileNameOfChild:(id)arg1;
- (void)_updateDescendantFileNames;
- (bool)_writeContentsToURL:(id)arg1 path:(id)arg2 originalContentsURL:(id)arg3 tryHardLinking:(bool)arg4 didHardLinking:(bool*)arg5 error:(id*)arg6;
- (id)addFileWrapper:(id)arg1;
- (id)addRegularFileWithContents:(id)arg1 preferredFilename:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fileAttributes;
- (id)fileWrappers;
- (id)filename;
- (id)init;
- (id)initDirectoryWithFileWrappers:(id)arg1;
- (id)initRegularFileWithContents:(id)arg1;
- (id)initSymbolicLinkWithDestinationURL:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)initWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isDirectory;
- (bool)isRegularFile;
- (bool)isSymbolicLink;
- (id)keyForFileWrapper:(id)arg1;
- (bool)matchesContentsOfURL:(id)arg1;
- (id)preferredFilename;
- (bool)readFromURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)regularFileContents;
- (void)removeFileWrapper:(id)arg1;
- (id)serializedRepresentation;
- (void)setFileAttributes:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setPreferredFilename:(id)arg1;
- (id)symbolicLinkDestinationURL;
- (bool)writeToURL:(id)arg1 options:(unsigned long long)arg2 originalContentsURL:(id)arg3 error:(id*)arg4;

@end
