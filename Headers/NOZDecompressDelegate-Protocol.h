//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ZipUtilities/NSObject-Protocol.h>

@class NOZDecompressOperation, NOZDecompressResult, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol NOZDecompressDelegate <NSObject>

@optional
- (_Bool)shouldDecompressOperation:(NOZDecompressOperation *)arg1 overwriteFileAtPath:(NSString *)arg2;
- (void)decompressOperation:(NOZDecompressOperation *)arg1 didUpdateProgress:(float)arg2;
- (void)decompressOperation:(NOZDecompressOperation *)arg1 didCompleteWithResult:(NOZDecompressResult *)arg2;
- (NSObject<OS_dispatch_queue> *)completionQueue;
@end

