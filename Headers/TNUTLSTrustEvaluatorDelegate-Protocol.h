//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/NSObject-Protocol.h>

@class NSString, TNUTLSTrustEvaluator;

@protocol TNUTLSTrustEvaluatorDelegate <NSObject>

@optional
- (_Bool)TLSTrustEvaluator:(TNUTLSTrustEvaluator *)arg1 isPinnableHost:(NSString *)arg2;
- (NSString *)TLSTrustEvaluator:(TNUTLSTrustEvaluator *)arg1 unmappedHostForHost:(NSString *)arg2;
@end

