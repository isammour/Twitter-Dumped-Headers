//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class T1TweetDraftsDraftCompositionView, TFNTwitterComposition;

@interface T1TweetDraftsViewCell : TFNTableViewCell
{
    _Bool _selfThreadComposerEnabled;
    T1TweetDraftsDraftCompositionView *_draftCompositionView;
}

+ (id)cellLayoutForComposition:(id)arg1 selfThreadComposerEnabled:(_Bool)arg2 layoutMetrics:(id)arg3 withPreviousLayout:(id)arg4;
@property(readonly, nonatomic) T1TweetDraftsDraftCompositionView *draftCompositionView; // @synthesize draftCompositionView=_draftCompositionView;
@property(nonatomic, getter=isSelfThreadComposeEnabled) _Bool selfThreadComposerEnabled; // @synthesize selfThreadComposerEnabled=_selfThreadComposerEnabled;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)isSelfThreadComposerEnabled;
@property(retain, nonatomic) TFNTwitterComposition *composition;
- (void)_t1_tweetDraftsTableViewCell_initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

