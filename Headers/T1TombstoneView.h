//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol T1TombstoneViewDelegate;

@interface T1TombstoneView : UIView
{
    // Error parsing type: , name: frameLayer
    // Error parsing type: , name: button
    // Error parsing type: , name: textView
    // Error parsing type: , name: delegate
}

+ (double)heightWith:(id)arg1 buttonTitle:(id)arg2 width:(double)arg3 layoutMetrics:(id)arg4;
- (CDUnknownBlockType).cxx_destruct;
- (void)attributedTextView:(id)arg1 didTapRange:(id)arg2 rect:(struct CGRect)arg3;
- (void)buttonTapped;
- (void)layoutSubviews;
- (void)updateWith:(id)arg1 buttonTitle:(id)arg2 range:(struct _NSRange)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <T1TombstoneViewDelegate> delegate; // @synthesize delegate;

@end

