//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@protocol T1Autoplayable, T1AutoplayableManager;

@protocol T1AutoplayableManagerDelegate <NSObject>
- (struct CGRect)contentFrameForAutoplayableManager:(id <T1AutoplayableManager>)arg1;
- (struct CGRect)insetBoundsForAutoplayableManager:(id <T1AutoplayableManager>)arg1;
- (_Bool)shouldAutoplayableManagerUpdateActive;
- (void)autoplayableManagerDidUpdateActive;

@optional
- (void)autoplayableManager:(id <T1AutoplayableManager>)arg1 willAddAutoplayable:(id <T1Autoplayable>)arg2;
@end

