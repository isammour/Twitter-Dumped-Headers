//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNRichTextContainerView;
@protocol TFSActiveTextRange;

@protocol TFNRichTextContainerViewDelegate <NSObject>

@optional
- (void)richTextContainerView:(TFNRichTextContainerView *)arg1 didMuteSelectedText:(NSString *)arg2;
- (void)richTextContainerView:(TFNRichTextContainerView *)arg1 didSearchSelectedText:(NSString *)arg2;
- (void)richTextContainerView:(TFNRichTextContainerView *)arg1 didLongPressActiveRange:(id <TFSActiveTextRange>)arg2;
- (void)richTextContainerView:(TFNRichTextContainerView *)arg1 didTapActiveRange:(id <TFSActiveTextRange>)arg2;
@end

