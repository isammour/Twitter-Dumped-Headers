//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNButton, UIButton, UILabel;

@interface T1SignedOutView : UIView
{
    TFNButton *_primaryButton;
    TFNButton *_secondaryButton;
    UIView *_logoView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
}

@property(readonly, nonatomic) UIButton *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(readonly, nonatomic) UIButton *primaryButton; // @synthesize primaryButton=_primaryButton;
@property(readonly, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

