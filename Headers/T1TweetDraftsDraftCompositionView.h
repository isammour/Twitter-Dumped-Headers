//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class T1TweetDraftsDraftAttachmentsView, T1TweetDraftsDraftCompositionViewLayout, TFNAttributedTextView, TFNTwitterComposition, UIImageView, UILabel;

@interface T1TweetDraftsDraftCompositionView : UIView
{
    _Bool _selfThreadComposerEnabled;
    TFNTwitterComposition *_composition;
    double _widthForCachedLayout;
    T1TweetDraftsDraftCompositionViewLayout *_cachedLayout;
    UIImageView *_errorMessageIconImageView;
    UILabel *_errorMessageLabel;
    TFNAttributedTextView *_textView;
    T1TweetDraftsDraftAttachmentsView *_attachmentsView;
    UIImageView *_pollIconImageView;
    UILabel *_replyChainMessageLabel;
}

@property(readonly, nonatomic) UILabel *replyChainMessageLabel; // @synthesize replyChainMessageLabel=_replyChainMessageLabel;
@property(readonly, nonatomic) UIImageView *pollIconImageView; // @synthesize pollIconImageView=_pollIconImageView;
@property(readonly, nonatomic) T1TweetDraftsDraftAttachmentsView *attachmentsView; // @synthesize attachmentsView=_attachmentsView;
@property(readonly, nonatomic) TFNAttributedTextView *textView; // @synthesize textView=_textView;
@property(readonly, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property(readonly, nonatomic) UIImageView *errorMessageIconImageView; // @synthesize errorMessageIconImageView=_errorMessageIconImageView;
@property(copy, nonatomic) T1TweetDraftsDraftCompositionViewLayout *cachedLayout; // @synthesize cachedLayout=_cachedLayout;
@property(nonatomic) double widthForCachedLayout; // @synthesize widthForCachedLayout=_widthForCachedLayout;
@property(nonatomic, getter=isSelfThreadComposeEnabled) _Bool selfThreadComposerEnabled; // @synthesize selfThreadComposerEnabled=_selfThreadComposerEnabled;
@property(retain, nonatomic) TFNTwitterComposition *composition; // @synthesize composition=_composition;
- (void).cxx_destruct;
- (id)_t1_main_layoutForWidth:(double)arg1;
- (id)_t1_main_cachedLayoutForWidth:(double)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_t1_main_updateForComposition;
- (void)_t1_tweetDraftsDraftView_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

