//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFNTwitterAccount;

@interface T1AdaptiveMediaParameters : NSObject
{
    TFNTwitterAccount *_account;
}

+ (struct CGSize)inlineActionMinimumTappingSize;
@property(nonatomic) __weak TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long userCellStyleInTweetDetails;
- (CDStruct_5e758c1a)videoMaxAspectRatioWithForceAdaptiveRatio:(_Bool)arg1;
- (CDStruct_5e758c1a)singlePhotoMaxAspectRatioWithForceAdaptiveRatio:(_Bool)arg1;
@property(readonly, nonatomic) long long avatarSize;
@property(readonly, nonatomic) double gutterWidth;
- (id)init;
- (id)initWithAccount:(id)arg1;

@end

