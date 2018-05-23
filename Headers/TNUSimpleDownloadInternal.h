//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNUSimpleDownload-Protocol.h>

@class NSString, NSURL, TNLRequestOperation;

@interface TNUSimpleDownloadInternal : NSObject <TNUSimpleDownload>
{
    _Bool _done;
    CDUnknownBlockType _completionBlock;
    NSURL *_downloadURL;
    NSString *_fileIdentifier;
    TNLRequestOperation *_underlyingOperation;
}

@property(readonly, nonatomic) TNLRequestOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
@property(readonly, copy, nonatomic) NSString *fileIdentifier; // @synthesize fileIdentifier=_fileIdentifier;
@property(readonly, copy, nonatomic) NSURL *downloadURL; // @synthesize downloadURL=_downloadURL;
- (void).cxx_destruct;
- (void)completeWithFileURL:(id)arg1 error:(id)arg2;
- (void)cancelWithSource:(id)arg1;
- (void)startWithUnderlyingOperation:(id)arg1;
- (id)initWithDownloadURL:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

