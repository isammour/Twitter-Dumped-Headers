//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/TNLRequestDelegate-Protocol.h>

@class NSString;

@interface TNLSimpleRequestDelegate : NSObject <TNLRequestDelegate>
{
    CDUnknownBlockType _didCompleteBlock;
}

@property(readonly, nonatomic) CDUnknownBlockType didCompleteBlock; // @synthesize didCompleteBlock=_didCompleteBlock;
- (void).cxx_destruct;
- (void)requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (id)init;
- (id)initWithDidCompleteBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
