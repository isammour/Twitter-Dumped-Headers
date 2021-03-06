//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/TNUBasicRetryPolicyProvider.h>

@class TNURetryAfterHeaderPolicyProvider;
@protocol TNLRequestRetryPolicyProvider;

@interface TNUCompositeRetryPolicyProvider : TNUBasicRetryPolicyProvider
{
    TNURetryAfterHeaderPolicyProvider *_afterDelayHeaderRetryPolicyProvider;
    id <TNLRequestRetryPolicyProvider> _defaultRetryPolicyProvider;
}

- (void).cxx_destruct;
- (void)requestOperation:(id)arg1 willStartRetryFromResponse:(id)arg2 afterDelay:(double)arg3;
- (double)delayBeforeRetryForRequestOperation:(id)arg1 withResponse:(id)arg2;
- (_Bool)shouldRetryRequestOperation:(id)arg1 withResponse:(id)arg2;
- (id)initWithDefaultRetryPolicyProviderClass:(Class)arg1 shouldRespectRetryAfterResponseHeader:(_Bool)arg2 configuration:(id)arg3;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

