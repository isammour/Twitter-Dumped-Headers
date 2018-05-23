//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSRegularExpression;

@interface TFNTwitterAccessSettings : NSObject
{
    NSRegularExpression *_twitterAccessWhiteListExpression;
    NSDictionary *_accessDictionary;
}

+ (void)setShouldShowFoundMediaPrompt:(_Bool)arg1;
+ (void)setShouldShowVideoInterstitial:(_Bool)arg1;
+ (void)setShouldShowDataChargesPrompts:(_Bool)arg1;
+ (void)initialize;
+ (void)showFoundMediaInterstitialIfNeeded:(id)arg1 account:(id)arg2 continueTapBlock:(CDUnknownBlockType)arg3;
+ (void)showVideoInterstitialIfNeeded:(id)arg1 account:(id)arg2 continueTapBlock:(CDUnknownBlockType)arg3;
+ (void)showInterstitialIfNeeded:(id)arg1 account:(id)arg2 continueTapBlock:(CDUnknownBlockType)arg3;
+ (_Bool)isInterstitialNeeded;
@property(readonly, nonatomic) NSDictionary *accessDictionary; // @synthesize accessDictionary=_accessDictionary;
- (void).cxx_destruct;
- (void)_setupWhitelistExpression;
- (id)_bannerUrl;
- (id)_interstitialUrl;
- (_Bool)shouldShowFoundMediaPrompt;
- (_Bool)shouldShowVideoInterstitial;
- (_Bool)shouldShowDataChargesPrompts:(id)arg1;
- (_Bool)shouldShowDataChargesPrompts;
- (id)whitelistExpression;
- (id)hostMapDictionary;
- (_Bool)shouldDisplayInlineMedia:(id)arg1;
- (_Bool)isURLWhitelisted:(id)arg1;
- (long long)expirationSeconds;
- (id)accessBannerString;
- (_Bool)shouldDisplayAccessBanner;
- (_Bool)hasBanner;
- (_Bool)_shouldZeroRateVideos;
- (_Bool)isExternalLinksInterstitialEnabled;
- (_Bool)isTwitterAccessEnabled;
- (id)interstitialHTMLString;
- (id)carrierId;
- (id)initWithAccessDictionary:(id)arg1;

@end

