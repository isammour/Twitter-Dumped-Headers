//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1AppNavigationTabEntry-Protocol.h>

@class T1TabView, UIView;

@interface T1MomentsAppNavigationTabEntry : NSObject <T1AppNavigationTabEntry>
{
    // Error parsing type: , name: panelID
    // Error parsing type: , name: tabView
    // Error parsing type: , name: hostingView
    // Error parsing type: , name: homeTimelineTabView
    // Error parsing type: , name: tooltipPresenter
    // Error parsing type: , name: shouldShowGuideTooltip
    // Error parsing type: , name: account
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)addContentReadyDependantObservers;
- (id)createContentController;
@property(nonatomic, retain) UIView *hostingView; // @synthesize hostingView;
@property(nonatomic, readonly) T1TabView *tabView; // @synthesize tabView;
@property(nonatomic, readonly) long long panelID; // @synthesize panelID;

@end

