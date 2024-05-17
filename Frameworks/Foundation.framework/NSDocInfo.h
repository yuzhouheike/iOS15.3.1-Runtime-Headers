/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDocInfo : NSObject <NSCopying> {
    struct { 
        unsigned int isDir : 1; 
        unsigned int isSingleFile : 1; 
        unsigned int isSoftLink : 1; 
        unsigned int _pad : 13; 
    }  flags;
    unsigned short  mode;
    long long  time;
}

- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initFromInfo:(struct stat { int x1; unsigned short x2; unsigned short x3; unsigned long long x4; unsigned int x5; unsigned int x6; int x7; struct timespec { long long x_8_1_1; long long x_8_1_2; } x8; struct timespec { long long x_9_1_1; long long x_9_1_2; } x9; struct timespec { long long x_10_1_1; long long x_10_1_2; } x10; struct timespec { long long x_11_1_1; long long x_11_1_2; } x11; long long x12; long long x13; int x14; unsigned int x15; unsigned int x16; int x17; long long x18[2]; }*)arg1;
- (id)initWithFileAttributes:(id)arg1;
- (void)setFileAttributes:(id)arg1;

@end
