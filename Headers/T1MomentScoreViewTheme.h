//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class T1MomentScoreParticipantInfoViewTheme, UIColor, UIFont;

@interface T1MomentScoreViewTheme : NSObject
{
    T1MomentScoreParticipantInfoViewTheme *_participantViewTheme;
    UIColor *_separatorColor;
    UIColor *_notesColor;
    UIColor *_backgroundColor;
}

+ (id)coverPageLightTheme;
+ (id)endPagePivotTheme;
+ (id)darkTheme;
+ (id)lightTheme;
@property(readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) UIColor *notesColor; // @synthesize notesColor=_notesColor;
@property(readonly, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(readonly, nonatomic) T1MomentScoreParticipantInfoViewTheme *participantViewTheme; // @synthesize participantViewTheme=_participantViewTheme;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIFont *notesFont;

@end

