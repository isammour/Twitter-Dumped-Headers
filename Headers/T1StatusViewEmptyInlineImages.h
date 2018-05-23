//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/T1StatusViewInlineImages-Protocol.h>

@class NSString;

@interface T1StatusViewEmptyInlineImages : NSObject <T1StatusViewInlineImages>
{
}

+ (id)sharedInstance;
- (long long)imageContentModeAtIndex:(long long)arg1;
- (struct CGRect)imageContentsRectAtIndex:(long long)arg1;
- (id)imageViewAtIndex:(long long)arg1;
- (id)imageAtIndex:(long long)arg1;
- (id)mediaInfoAtIndex:(long long)arg1;
- (_Bool)hasAnyVisibleImageBeenDownloaded;
@property(readonly, nonatomic) long long numberOfImages;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

