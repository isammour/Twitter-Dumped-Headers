//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1NativeCardClassicHighlightableView.h>

@class NSString, TFNTappableImageView, UIImage, UILabel;
@protocol T1NativeCardClassicAttributionViewDelegate;

@interface T1NativeCardClassicAttributionView : T1NativeCardClassicHighlightableView
{
    TFNTappableImageView *_avatarImageView;
    UILabel *_fullNameLabel;
    id <T1NativeCardClassicAttributionViewDelegate> _delegate;
}

+ (struct CGSize)sizeForWidth:(double)arg1;
+ (void)applyDefaultsForFullNameLabel:(id)arg1;
+ (void)applyDefaultsForAvatarImageView:(id)arg1;
@property(nonatomic) __weak id <T1NativeCardClassicAttributionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UILabel *fullNameLabel; // @synthesize fullNameLabel=_fullNameLabel;
@property(readonly, nonatomic) TFNTappableImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)_didTapOnHighlightView:(id)arg1;
- (void)_didTapOnAvatarImageView:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviewsWithinHighlightViewBounds:(struct CGRect)arg1;
@property(retain, nonatomic) UIImage *avatarImage;
@property(copy, nonatomic) NSString *fullName;
- (id)initWithFrame:(struct CGRect)arg1;

@end
