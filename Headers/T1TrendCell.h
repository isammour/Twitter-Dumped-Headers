//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class UIImage, UIView;
@protocol T1StatusViewEventHandler, TFNTwitterAVPlayerSessionSource;

@interface T1TrendCell : TFNTableViewCell
{
    // Error parsing type: , name: trendView
    // Error parsing type: , name: statusEventHandler
    // Error parsing type: , name: showsRankingEnabled
    // Error parsing type: , name: shouldShowFullSizeTrendsRanking
}

- (CDUnknownBlockType).cxx_destruct;
- (id)handleStatusViewEvent:(id)arg1;
- (void)updateWithPlayer:(id)arg1;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)detachPlayerViewAnimated:(_Bool)arg1;
- (void)attachPlayerView:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (id)autoplayable;
- (id)previewingViewControllerForLocation:(struct CGPoint)arg1 outSourceRect:(struct CGRect *)arg2;
@property(nonatomic) _Bool shouldShowFullSizeTrendsRanking; // @synthesize shouldShowFullSizeTrendsRanking;
@property(nonatomic) _Bool showsRankingEnabled; // @synthesize showsRankingEnabled;
- (void)setViewModel:(id)arg1 account:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, retain) id <T1StatusViewEventHandler> statusEventHandler; // @synthesize statusEventHandler;
@property(nonatomic, copy) CDUnknownBlockType cardEventHandler;

@end

