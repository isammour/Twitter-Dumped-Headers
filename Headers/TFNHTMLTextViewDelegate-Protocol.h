//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSString, TFNHTMLTextView;

@protocol TFNHTMLTextViewDelegate <NSObject>
- (void)htmlTextViewHandleUserAccessibilityTap:(TFNHTMLTextView *)arg1;
- (void)htmlTextView:(TFNHTMLTextView *)arg1 didTapLink:(NSString *)arg2;
@end

