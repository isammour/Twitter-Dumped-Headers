//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNButton, UILabel;
@protocol T1PlacePageInfoViewDelegate;

@interface T1PlacePageInfoView : UIView
{
    id <T1PlacePageInfoViewDelegate> _delegate;
    UILabel *_placeNameLabel;
    UILabel *_placeAddressLabel;
    UIView *_placeAttributionView;
    TFNButton *_ctaButton;
}

@property(retain, nonatomic) TFNButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) UIView *placeAttributionView; // @synthesize placeAttributionView=_placeAttributionView;
@property(retain, nonatomic) UILabel *placeAddressLabel; // @synthesize placeAddressLabel=_placeAddressLabel;
@property(retain, nonatomic) UILabel *placeNameLabel; // @synthesize placeNameLabel=_placeNameLabel;
@property(nonatomic) __weak id <T1PlacePageInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_didTapCTA:(id)arg1;
- (void)updateWithPlace:(id)arg1;
- (double)preferredHeight;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

