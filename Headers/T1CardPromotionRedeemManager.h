//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TNLRequestDelegate-Protocol.h>

@class NSString;

@interface T1CardPromotionRedeemManager : NSObject <TNLRequestDelegate>
{
}

+ (id)mtForRedeemType:(unsigned long long)arg1;
+ (id)sharedManager;
- (void)requestOperation:(id)arg1 didCompleteWithResponse:(id)arg2;
- (id)redeemLinkForRedeemType:(unsigned long long)arg1 didValue:(id)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

