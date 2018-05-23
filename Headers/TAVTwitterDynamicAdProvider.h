//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TAVDynamicAdProvider-Protocol.h>

@class NSNumber, NSString, TFNTwitterAVConfiguration, TFNTwitterAccount, TFNTwitterDynamicVideoAdManager, TFNTwitterDynamicVideoAdResponseItem;

@interface TAVTwitterDynamicAdProvider : NSObject <TAVDynamicAdProvider>
{
    TFNTwitterAccount *_account;
    NSNumber *_statusID;
    NSString *_liveEventID;
    NSString *_impressionID;
    TFNTwitterDynamicVideoAdManager *_dynamicAdManager;
    TFNTwitterDynamicVideoAdResponseItem *_dynamicVideoAdResponseItem;
    TFNTwitterAVConfiguration *_configuration;
}

@property(readonly, copy, nonatomic) TFNTwitterAVConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) TFNTwitterDynamicVideoAdResponseItem *dynamicVideoAdResponseItem; // @synthesize dynamicVideoAdResponseItem=_dynamicVideoAdResponseItem;
@property(readonly, nonatomic) TFNTwitterDynamicVideoAdManager *dynamicAdManager; // @synthesize dynamicAdManager=_dynamicAdManager;
@property(readonly, copy, nonatomic) NSString *impressionID; // @synthesize impressionID=_impressionID;
@property(readonly, copy, nonatomic) NSString *liveEventID; // @synthesize liveEventID=_liveEventID;
@property(readonly, copy, nonatomic) NSNumber *statusID; // @synthesize statusID=_statusID;
@property(readonly, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (void)_tfn_completeWithResponseItem:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)provideAdWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAccount:(id)arg1 statusID:(id)arg2 impressionID:(id)arg3 liveEventID:(id)arg4 dynamicVideoAdResponseItem:(id)arg5 configuration:(id)arg6;
- (id)initWithAccount:(id)arg1 statusID:(id)arg2 impressionID:(id)arg3 liveEventID:(id)arg4 dynamicAdManager:(id)arg5 configuration:(id)arg6;
- (id)initWithAccount:(id)arg1 statusID:(id)arg2 impressionID:(id)arg3 liveEventID:(id)arg4 dynamicAdManager:(id)arg5 dynamicVideoAdResponseItem:(id)arg6 configuration:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

