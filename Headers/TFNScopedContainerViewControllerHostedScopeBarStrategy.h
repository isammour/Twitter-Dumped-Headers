//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNScopedContainerViewControllerScopeBarStrategy-Protocol.h>

@class NSString, TFNScopeBar, TFNScopedContainerViewController;

@interface TFNScopedContainerViewControllerHostedScopeBarStrategy : NSObject <TFNScopedContainerViewControllerScopeBarStrategy>
{
    TFNScopedContainerViewController *_scopedContainerViewController;
    TFNScopeBar *_scopeBar;
}

@property(retain, nonatomic) TFNScopeBar *scopeBar; // @synthesize scopeBar=_scopeBar;
@property(nonatomic) __weak TFNScopedContainerViewController *scopedContainerViewController; // @synthesize scopedContainerViewController=_scopedContainerViewController;
- (void).cxx_destruct;
- (double)additionalTopChromeLength;
- (void)layoutScopeBar;
- (void)setSelectedItemIndex:(long long)arg1;
- (void)setScopeBarItems:(id)arg1;
- (void)setScopeBarHidden:(_Bool)arg1 forViewController:(id)arg2;
- (void)addScopeBarToViewController:(id)arg1 initiallyHidden:(_Bool)arg2;
- (void)removeScopeBarFromViewController:(id)arg1;
- (_Bool)prefersNavigationBarShadowHidden;
- (_Bool)isValidForViewController:(id)arg1;
- (id)initWithScopedContainerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

