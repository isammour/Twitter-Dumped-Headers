//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIColor, UIFont, UILabel;

@interface TFNFollowsYouView : UIView
{
    UILabel *_label;
    struct UIEdgeInsets _contentEdgeInsets;
}

+ (struct CGSize)sizeForText:(id)arg1 font:(id)arg2 contentEdgeInsets:(struct UIEdgeInsets)arg3;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)sizeToFit;
@property(nonatomic) double baseline;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIFont *font;
@property(nonatomic) long long textAlignment;
@property(copy, nonatomic) NSString *text;
- (void)_setupWithLabel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

