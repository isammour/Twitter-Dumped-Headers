//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterLivePipeline/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol TFSModelBuilder <NSObject>
- (id)modelObjectWithJSONData:(NSData *)arg1 headerFields:(NSDictionary *)arg2 error:(out id *)arg3;

@optional
- (id)modelObjectWithJSONObject:(id)arg1 headerFields:(NSDictionary *)arg2 error:(out id *)arg3;
@end

