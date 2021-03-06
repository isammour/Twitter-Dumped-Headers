//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNLRequestRetryPolicyProvider-Protocol.h>

@class NSArray, NSString;
@protocol TNLRequestRetryPolicyProvider;

@interface TNUChainedHttpRequestRetryPolicyProvider : NSObject <TNLRequestRetryPolicyProvider>
{
    NSArray<TNLRequestRetryPolicyProvider> *_childProviders;
    id <TNLRequestRetryPolicyProvider> _selectedChildProvider;
}

@property(retain, nonatomic) id <TNLRequestRetryPolicyProvider> selectedChildProvider; // @synthesize selectedChildProvider=_selectedChildProvider;
@property(retain, nonatomic) NSArray<TNLRequestRetryPolicyProvider> *childProviders; // @synthesize childProviders=_childProviders;
- (void).cxx_destruct;
- (void)requestOperation:(id)arg1 didStartRetryFromResponse:(id)arg2;
- (void)requestOperation:(id)arg1 willStartRetryFromResponse:(id)arg2 afterDelay:(double)arg3;
- (double)idleTimeoutOfRetryForRequestOperation:(id)arg1 withResponse:(id)arg2;
- (double)delayBeforeRetryForRequestOperation:(id)arg1 withResponse:(id)arg2;
- (_Bool)shouldRetryRequestOperation:(id)arg1 withResponse:(id)arg2;
- (id)initWithChildProviders:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

