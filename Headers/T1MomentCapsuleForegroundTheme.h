//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface T1MomentCapsuleForegroundTheme : NSObject
{
    _Bool _shouldShowGradient;
    UIColor *_backgroundColor;
    UIColor *_statusTextColor;
    UIFont *_statusTextFont;
    UIColor *_authorFullNameColor;
    UIFont *_authorFullNameFont;
    UIColor *_authorUsernameColor;
    UIFont *_authorUsernameFont;
    long long _layoutType;
    UIColor *_verifiedBadgeColor;
}

+ (id)darkCapsuleForegroundCanvasTheme;
+ (id)lightCapsuleForegroundCanvasThemeWithRenderTheme:(id)arg1;
+ (id)darkCapsuleForegroundTheme;
+ (id)lightCapsuleForegroundThemeWithRenderTheme:(id)arg1;
+ (id)canvasThemeForMomentPage:(id)arg1;
+ (id)themeForMomentPage:(id)arg1;
@property(readonly, nonatomic) UIColor *verifiedBadgeColor; // @synthesize verifiedBadgeColor=_verifiedBadgeColor;
@property(readonly, nonatomic) _Bool shouldShowGradient; // @synthesize shouldShowGradient=_shouldShowGradient;
@property(readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) UIFont *authorUsernameFont; // @synthesize authorUsernameFont=_authorUsernameFont;
@property(readonly, nonatomic) UIColor *authorUsernameColor; // @synthesize authorUsernameColor=_authorUsernameColor;
@property(readonly, nonatomic) UIFont *authorFullNameFont; // @synthesize authorFullNameFont=_authorFullNameFont;
@property(readonly, nonatomic) UIColor *authorFullNameColor; // @synthesize authorFullNameColor=_authorFullNameColor;
@property(readonly, nonatomic) UIFont *statusTextFont; // @synthesize statusTextFont=_statusTextFont;
@property(readonly, nonatomic) UIColor *statusTextColor; // @synthesize statusTextColor=_statusTextColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) double actionsViewAlpha;
@property(readonly, nonatomic) UIFont *summaryLinkDescriptionFont;
@property(readonly, nonatomic) UIFont *summaryLinkTitleFont;
@property(readonly, nonatomic) UIColor *summaryLinkDescriptionColor;
@property(readonly, nonatomic) UIColor *summaryLinkTitleColor;
@property(readonly, nonatomic) UIColor *attachmentBackgroundColor;

@end
