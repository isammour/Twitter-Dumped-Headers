//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TFNAttributedActiveTextModel;
@protocol T1TimelinesStatusConversationContextViewDelegate;

@interface T1TimelinesStatusConversationContextView : UIView
{
    // Error parsing type: , name: textView
    // Error parsing type: , name: highlightView
    // Error parsing type: , name: delegate
    // Error parsing type: , name: activeTextModel
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateWithConversationContextLayoutState:(id)arg1;
- (void)highlightViewDidTap;
@property(nonatomic, retain) TFNAttributedActiveTextModel *activeTextModel; // @synthesize activeTextModel;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <T1TimelinesStatusConversationContextViewDelegate> delegate; // @synthesize delegate;

@end

