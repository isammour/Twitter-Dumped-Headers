//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PeriscopeViewer/NSObject-Protocol.h>

@class PTVSwitchboardAsset;

@protocol PTVSwitchboardDisplayable <NSObject>
- (void)removeSwitchboardAsset;
- (void)updateSwitchboardAssetAttributes:(struct PTVSwitchboardAssetAttributes)arg1;
- (void)displaySwitchboardAsset:(PTVSwitchboardAsset *)arg1 withAttributes:(struct PTVSwitchboardAssetAttributes)arg2;
@end
