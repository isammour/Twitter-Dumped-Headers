//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class T1MomentCapsuleCTAViewTheme, T1MomentScoreViewTheme, UIColor, UIFont, UIImage;

@interface T1MomentCapsuleInfoViewTheme : NSObject
{
    _Bool _displaysThumbnail;
    _Bool _displaysLoadingAnimation;
    UIColor *_titleColor;
    UIColor *_detailColor;
    UIColor *_liveBadgeColor;
    UIColor *_thumbnailPlaceholderColor;
    UIColor *_thumbnailOutlineColor;
    UIColor *_backgroundColor;
    unsigned long long _followButtonVariant;
    unsigned long long _followButtonStrength;
    T1MomentScoreViewTheme *_scoreViewTheme;
    T1MomentCapsuleCTAViewTheme *_CTATheme;
    UIImage *_liveBadgeImage;
    UIImage *_cardImage;
}

+ (id)superHeroTheme;
+ (id)wideCardTheme;
+ (id)cardDirectMessageComposeTheme;
+ (id)cardTheme;
+ (id)endPagePivotTheme;
+ (id)endPageTheme;
+ (id)coverPageMakerTheme;
+ (id)coverPageLightTheme;
+ (id)expandedTheme;
+ (id)darkTheme;
+ (id)lightTheme;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(retain, nonatomic) UIImage *liveBadgeImage; // @synthesize liveBadgeImage=_liveBadgeImage;
@property(readonly, nonatomic) T1MomentCapsuleCTAViewTheme *CTATheme; // @synthesize CTATheme=_CTATheme;
@property(readonly, nonatomic) T1MomentScoreViewTheme *scoreViewTheme; // @synthesize scoreViewTheme=_scoreViewTheme;
@property(readonly, nonatomic) unsigned long long followButtonStrength; // @synthesize followButtonStrength=_followButtonStrength;
@property(readonly, nonatomic) unsigned long long followButtonVariant; // @synthesize followButtonVariant=_followButtonVariant;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) _Bool displaysLoadingAnimation; // @synthesize displaysLoadingAnimation=_displaysLoadingAnimation;
@property(readonly, nonatomic) UIColor *thumbnailOutlineColor; // @synthesize thumbnailOutlineColor=_thumbnailOutlineColor;
@property(readonly, nonatomic) UIColor *thumbnailPlaceholderColor; // @synthesize thumbnailPlaceholderColor=_thumbnailPlaceholderColor;
@property(readonly, nonatomic) _Bool displaysThumbnail; // @synthesize displaysThumbnail=_displaysThumbnail;
@property(readonly, nonatomic) UIColor *liveBadgeColor; // @synthesize liveBadgeColor=_liveBadgeColor;
@property(readonly, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(readonly, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long detailStringType;
@property(readonly, nonatomic) _Bool displaysLiveBadge;
@property(readonly, nonatomic) _Bool displaysCardImage;
@property(readonly, nonatomic) struct CGSize thumbnailSize;
@property(readonly, nonatomic) _Bool displaysPlayButton;
@property(readonly, nonatomic) UIFont *likeLabelFont;
@property(readonly, nonatomic) UIFont *likeCountFont;
- (id)_cardImageWithColor:(id)arg1;
@property(readonly, nonatomic) UIFont *liveBadgeFont;
@property(readonly, nonatomic) UIColor *updateDotColor;
@property(readonly, nonatomic) UIColor *authorVerifiedBadgeColor;
@property(readonly, nonatomic) UIFont *authorUsernameFont;
@property(readonly, nonatomic) UIFont *authorFullNameFont;
@property(readonly, nonatomic) UIColor *authorFullNameColor;
@property(readonly, nonatomic) UIFont *categoryFont;
@property(readonly, nonatomic) UIColor *categoryIconImagePlaceholderColor;
@property(readonly, nonatomic) UIColor *categoryWithIconColor;
@property(readonly, nonatomic) UIColor *categoryColor;
@property(readonly, nonatomic) _Bool displaysCategory;
@property(readonly, nonatomic) UIFont *boldDescriptionFont;
@property(readonly, nonatomic) UIFont *descriptionFont;
@property(readonly, nonatomic) UIColor *descriptionColor;
@property(readonly, nonatomic) _Bool displaysDescription;
@property(readonly, nonatomic) _Bool displaysLikeCountButton;
@property(readonly, nonatomic) _Bool displaysLikeCountInDetails;
@property(readonly, nonatomic) _Bool titleAdjustsFontSizeToFitWidth;
@property(readonly, nonatomic) UIFont *detailFont;
@property(readonly, nonatomic) UIFont *titleFont;

@end
