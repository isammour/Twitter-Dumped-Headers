//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1StatusBodyTextView;
@protocol TFSActiveTextRange;

@protocol T1StatusBodyTextViewDelegate <NSObject>

@optional
- (void)bodyTextView:(T1StatusBodyTextView *)arg1 didTapTruncationTokenAreaWithRect:(struct CGRect)arg2;
- (void)bodyTextView:(T1StatusBodyTextView *)arg1 didLongPressActiveTextRange:(id <TFSActiveTextRange>)arg2 withFrame:(struct CGRect)arg3;
- (void)bodyTextView:(T1StatusBodyTextView *)arg1 didTapActiveTextRange:(id <TFSActiveTextRange>)arg2 withFrame:(struct CGRect)arg3;
@end

