//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1StatusInlineActionButtonAnimator-Protocol.h>

@class T1StatusInlineActionButton;

@interface T1StatusInlineActionButtonDefaultAnimator : NSObject <T1StatusInlineActionButtonAnimator>
{
    T1StatusInlineActionButton *_button;
}

@property(nonatomic) __weak T1StatusInlineActionButton *button; // @synthesize button=_button;
- (void).cxx_destruct;
- (void)reset;
- (void)animateToCount:(long long)arg1;

@end

