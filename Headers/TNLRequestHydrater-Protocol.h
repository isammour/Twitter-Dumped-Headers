//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/NSObject-Protocol.h>

@class TNLRequestOperation;
@protocol TNLRequest;

@protocol TNLRequestHydrater <NSObject>

@optional
- (void)requestOperation:(TNLRequestOperation *)arg1 hydrateRequest:(id <TNLRequest>)arg2 completion:(void (^)(id <TNLRequest>, NSError *))arg3;
@end

