//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSTwitterAPI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSURLCache;
@protocol TFSTwitterAPIURLBaseProvider;

@protocol TFSTwitterAPIConfiguration <NSObject>
@property(readonly, nonatomic) NSURLCache *URLCache;
@property(readonly, nonatomic) id <TFSTwitterAPIURLBaseProvider> URLBaseProvider;
- (NSArray *)additionalContentEncoders;
- (NSArray *)additionalContentDecoders;
- (NSDictionary *)momentsParametersDictionary;
- (NSDictionary *)cardsParametersDictionary;
- (NSDictionary *)userParametersDictionary;
- (NSDictionary *)statusParametersDictionary;
@end

