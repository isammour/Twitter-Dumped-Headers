//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface TFNTwitterAPITrendsPlusResponse : NSObject
{
    NSArray *_trends;
    NSNumber *_refreshInterval;
    NSString *_contextMode;
}

+ (id)trendsPlusResponseWithJSONData:(id)arg1 validTrendModules:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) NSString *contextMode; // @synthesize contextMode=_contextMode;
@property(readonly, nonatomic) NSNumber *refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(readonly, nonatomic) NSArray *trends; // @synthesize trends=_trends;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 validTrendModules:(id)arg2;
- (id)initWithTrends:(id)arg1 refreshInterval:(id)arg2 contextMode:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
