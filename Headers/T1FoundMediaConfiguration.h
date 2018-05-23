//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface T1FoundMediaConfiguration : NSObject
{
    _Bool _trendingEnabled;
    NSString *_provider;
    long long _imageFormat;
}

@property(readonly, nonatomic, getter=isTrendingEnabled) _Bool trendingEnabled; // @synthesize trendingEnabled=_trendingEnabled;
@property(readonly, nonatomic) long long imageFormat; // @synthesize imageFormat=_imageFormat;
@property(readonly, copy, nonatomic) NSString *provider; // @synthesize provider=_provider;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithProvider:(id)arg1 trendingEnabled:(_Bool)arg2 imageFormat:(long long)arg3;
- (id)init;

@end
