//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/PTVActionSheetHeaderView.h>

#import <PeriscopeViewer/UIScrollViewDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSString, UIScrollView;
@protocol PTVChatActionHeaderViewDelegate;

@interface PTVChatActionSheetHeaderView : PTVActionSheetHeaderView <UIScrollViewDelegate>
{
    id <PTVChatActionHeaderViewDelegate> _delegate;
    UIScrollView *_messageScrollView;
    NSArray *_messageContainerViews;
    NSArray *_messageBackgroundViews;
    NSArray *_messageViews;
    NSMutableArray *_messageViewCachedFrames;
    NSAttributedString *_attributedReportTitle;
    _Bool _isTitleHidden;
    _Bool _isReportIconHidden;
    unsigned long long _currentScrollIndex;
}

@property(nonatomic) unsigned long long currentScrollIndex; // @synthesize currentScrollIndex=_currentScrollIndex;
- (void).cxx_destruct;
- (void)scrollToNextMessage;
- (void)scrollToPreviousMessage;
- (void)messageCarouselTapOccurred:(id)arg1;
- (void)setTitleHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setReportIconHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMessageViewStateForMessageIndex:(long long)arg1;
- (void)resetMessageFrameCache;
- (void)setCurrentClosestScrollIndexFromScrollOffset;
- (void)setTitleLabelWithCandyStyle:(int)arg1;
- (void)setTitleHiddenForCandyStyle:(int)arg1;
- (long long)currentMessageIndexFromScrollView;
- (_Bool)shouldShowLabelForCandyStyle:(int)arg1;
- (int)candyStyleForCurrentCarouselMessage;
- (id)usernameForMessageView:(id)arg1;
- (struct CGSize)getSizeForMessageView:(id)arg1 containerSize:(struct CGSize)arg2;
- (struct CGSize)getAndCacheMessageSizeIfNecessaryForMessageView:(id)arg1 index:(unsigned long long)arg2 containerSize:(struct CGSize)arg3;
- (id)initWithAttributedReportTitle:(id)arg1 messageViews:(id)arg2 delegate:(id)arg3 currentMessageIndex:(unsigned long long)arg4;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutTitleView;
- (void)layoutMessageCarousel;
- (double)heightForMessageView:(id)arg1 superviewSize:(struct CGSize)arg2;
- (double)largestMessageHeightForSuperviewWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

