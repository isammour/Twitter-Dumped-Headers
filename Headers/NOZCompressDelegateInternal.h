//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ZipUtilities/NOZCompressDelegate-Protocol.h>

@class NSString;

@interface NOZCompressDelegateInternal : NSObject <NOZCompressDelegate>
{
    CDUnknownBlockType _completionBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (void)compressOperation:(id)arg1 didCompleteWithResult:(id)arg2;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
