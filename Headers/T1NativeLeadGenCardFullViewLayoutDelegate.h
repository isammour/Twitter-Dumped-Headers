//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterCardViewLayoutDelegate.h>

@class TFNTwitterCardStateManager;

@interface T1NativeLeadGenCardFullViewLayoutDelegate : TFNTwitterCardViewLayoutDelegate
{
    TFNTwitterCardStateManager *_cardStateManager;
}

+ (id)viewModelWithCardContext:(id)arg1;
+ (id)sharedLayoutDelegate;
@property(retain, nonatomic) TFNTwitterCardStateManager *cardStateManager; // @synthesize cardStateManager=_cardStateManager;
- (void).cxx_destruct;
- (id)_layoutHelperForViewModel:(id)arg1;
- (void)layoutSubviewsForCardView:(id)arg1 withState:(id)arg2;
- (id)layoutForViewModel:(id)arg1 layoutMetrics:(id)arg2;
- (struct CGSize)targetImageSizeForViewModel:(id)arg1 contentWidth:(double)arg2;

@end
