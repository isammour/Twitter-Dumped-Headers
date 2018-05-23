//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNButton;

@interface T1DirectMessageEntrySpamOptionsView : UIView
{
    TFNButton *_markAsSpamButton;
    TFNButton *_unmarkAsSpamButton;
    double _preferredMaxLayoutWidth;
}

+ (_Bool)_shouldStackButtonsForWidth:(double)arg1 unmarkAsSpamButtonWidth:(double)arg2 markAsSpamButtonWidth:(double)arg3;
+ (struct CGSize)spamOptionsViewSizeThatFits:(double)arg1;
@property(nonatomic) double preferredMaxLayoutWidth; // @synthesize preferredMaxLayoutWidth=_preferredMaxLayoutWidth;
@property(readonly, nonatomic) TFNButton *unmarkAsSpamButton; // @synthesize unmarkAsSpamButton=_unmarkAsSpamButton;
@property(readonly, nonatomic) TFNButton *markAsSpamButton; // @synthesize markAsSpamButton=_markAsSpamButton;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

