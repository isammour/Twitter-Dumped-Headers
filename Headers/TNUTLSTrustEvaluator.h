//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkUtilities/TNLAuthenticationChallengeHandler-Protocol.h>

@class NSMutableSet, NSSet, NSString;
@protocol OS_dispatch_queue, TNUTLSTrustEvaluatorDelegate;

@interface TNUTLSTrustEvaluator : NSObject <TNLAuthenticationChallengeHandler>
{
    NSObject<OS_dispatch_queue> *_cacheQueue;
    NSMutableSet *_pinnedCertificateFingerprints;
    NSSet *_knownCertificateSPKIHashes;
    long long _options;
    id <TNUTLSTrustEvaluatorDelegate> _delegate;
}

+ (id)defaultEvaluator;
@property __weak id <TNUTLSTrustEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long options; // @synthesize options=_options;
- (void).cxx_destruct;
- (_Bool)_isPinnedSPKI:(id)arg1;
- (void)_cacheValidLeafCertificateFingerprint:(id)arg1;
- (_Bool)_isLeafCertificateFingerprintCached:(id)arg1;
- (_Bool)_isPinnedCertificateChain:(struct __SecTrust *)arg1;
- (_Bool)_isSystemTrustedCertificateChain:(struct __SecTrust *)arg1;
- (struct __SecTrust *)_createTrustFromTrust:(struct __SecTrust *)arg1 withHostToCheck:(id)arg2;
- (id)_unmappedLowercaseHost:(id)arg1;
- (_Bool)_isPinnableLowercaseHost:(id)arg1;
- (long long)_evaluateServerTrust:(struct __SecTrust *)arg1 forHost:(id)arg2;
- (void)networkLayerDidReceiveAuthChallenge:(id)arg1 requestOperation:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forHost:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

