//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNLayoutableViewLayoutDelegate-Protocol.h>

@class NSString;

@interface T1NativeLeadGenCardSubmitViewLayoutDelegate : NSObject <TFNLayoutableViewLayoutDelegate>
{
}

+ (id)textModel;
+ (id)attributedStringForMessage:(id)arg1 isFailure:(_Bool)arg2;
+ (id)sharedLayoutDelegate;
- (id)layoutForViewModel:(id)arg1 width:(double)arg2;
- (void)layoutSubviewsForLayoutableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

