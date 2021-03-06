//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVModalView.h>

#import <PeriscopeViewer/UITextViewDelegate-Protocol.h>

@class NSString, PTVExtendedButton, PTVRoundedButton, UIButton, UIImageView, UILabel, UITextView, UIView;

@interface PTVTitleSubtitleModalView : PTVModalView <UITextViewDelegate>
{
    UILabel *_titleLabel;
    UITextView *_subtitleTextView;
    UIImageView *_headerImageView;
    UIView *_headerBackgroundView;
    PTVRoundedButton *_mainActionButton;
    UIButton *_secondaryActionButton;
    PTVExtendedButton *_dismissButton;
    UILabel *_footerLabel;
    _Bool _shouldHideTitleAndHeaderViewInLandscape;
    _Bool _useConstrainedHeight;
}

- (void).cxx_destruct;
- (void)alphaState;
- (void)setShouldDetectLinksInBody:(_Bool)arg1;
- (void)setShowDismissButton:(_Bool)arg1;
- (void)setTitleColor:(id)arg1;
- (_Bool)isHeaderViewAndTitleLabelVisible;
- (void)setInterfaceOrientation:(long long)arg1;
- (id)initWithDelegate:(id)arg1 headerBackgroundColor:(id)arg2 headerImage:(id)arg3 title:(id)arg4 attributedSubtitle:(id)arg5 mainActionTitle:(id)arg6 secondaryActionTitle:(id)arg7 footerLabel:(id)arg8 modalTheme:(long long)arg9 useConstrainedHeight:(_Bool)arg10;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

