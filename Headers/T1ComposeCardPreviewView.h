//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <T1Twitter/TFNTwitterCardViewDataSource-Protocol.h>

@class NSString, T1NativeCardContainerView, TFNPaddedButton, TFNTwitterCardContext, TFNTwitterCardView;
@protocol TFNTwitterCardViewDelegate;

@interface T1ComposeCardPreviewView : UIView <TFNTwitterCardViewDataSource>
{
    TFNPaddedButton *_removeButton;
    T1NativeCardContainerView *_cardContainerView;
}

+ (double)reservedRightMarginForRemoveButton;
+ (struct CGSize)removeButtonSize;
+ (struct UIEdgeInsets)removeButtonMargins;
@property(retain, nonatomic) T1NativeCardContainerView *cardContainerView; // @synthesize cardContainerView=_cardContainerView;
@property(retain, nonatomic) TFNPaddedButton *removeButton; // @synthesize removeButton=_removeButton;
- (void).cxx_destruct;
- (id)calculatedLayoutMetrics;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <TFNTwitterCardViewDelegate> cardViewDelegate;
@property(readonly, nonatomic) TFNTwitterCardView *cardView;
@property(retain, nonatomic) TFNTwitterCardContext *cardContext;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

