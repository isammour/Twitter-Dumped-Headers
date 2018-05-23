//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class UIImage, UIView;
@protocol TFNTwitterAVPlayerSessionSource;

@interface T1HeroMomentCell : TFNTableViewCell
{
    // Error parsing type: , name: momentView
    // Error parsing type: , name: momentViewLeadingConstraint
    // Error parsing type: , name: momentViewTrailingConstraint
}

+ (double)estimatedHeightFor:(id)arg1 momentViewModel:(id)arg2;
- (CDUnknownBlockType).cxx_destruct;
- (void)updateWithPlayer:(id)arg1;
- (void)stopPlaybackIndicator;
- (void)startPlaybackIndicatorWithPlayer:(id)arg1;
- (void)detachPlayerViewAnimated:(_Bool)arg1;
- (void)attachPlayerView:(id)arg1 animated:(_Bool)arg2;
@property(nonatomic, readonly) UIImage *playerPreviewImage;
@property(nonatomic, readonly) UIView *playerContainerView;
@property(nonatomic, readonly) id <TFNTwitterAVPlayerSessionSource> playerSessionSource;
- (void)unregisterForPlaybackObservation;
- (void)registerForPlaybackObservation;
- (id)autoplayable;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutMetricsDidChange:(id)arg1;
- (void)cleanup;
- (void)setViewModel:(id)arg1 account:(id)arg2 delegate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic, readonly) UIView *presentationSourceView;

@end

