//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIScrollView;

@interface PTVBroadcastOverflowScrollContainerView : UIView
{
    _Bool _isObservingScrollView;
    CAGradientLayer *_maskLayer;
    UIScrollView *_scrollView;
    double _maskHeight;
    double _maskBottomOffset;
}

@property(nonatomic) double maskBottomOffset; // @synthesize maskBottomOffset=_maskBottomOffset;
@property(nonatomic) double maskHeight; // @synthesize maskHeight=_maskHeight;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)updateMaskColors;
- (void)updateMaskLocation;
- (id)maskLayer;
- (void)updateMaskLayer;
- (void)scrollViewContentOffsetDidChange;
- (void)scrollViewContentSizeDidChange;
- (void)stopObservingScrollView;
- (void)startObservingScrollView;
- (void)updateContentInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

