//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIColor, UIFont;

@interface T1MomentScoreParticipantInfoViewTheme : NSObject
{
    UIColor *_nameColor;
    UIColor *_scoreColor;
    UIColor *_strongScoreColor;
    UIColor *_backgroundColor;
    UIColor *_winnerAttributionColor;
}

+ (id)darkTheme;
+ (id)lightTheme;
@property(readonly, nonatomic) UIColor *winnerAttributionColor; // @synthesize winnerAttributionColor=_winnerAttributionColor;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *strongScoreColor; // @synthesize strongScoreColor=_strongScoreColor;
@property(readonly, nonatomic) UIColor *scoreColor; // @synthesize scoreColor=_scoreColor;
@property(readonly, nonatomic) UIColor *nameColor; // @synthesize nameColor=_nameColor;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *scoreFont;
@property(readonly, nonatomic) UIFont *nameFont;
@property(readonly, nonatomic) double avatarCornerRadius;
@property(readonly, nonatomic) struct CGSize avatarSize;

@end
