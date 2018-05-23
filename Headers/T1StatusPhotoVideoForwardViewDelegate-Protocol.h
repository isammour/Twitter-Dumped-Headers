//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class NSError, T1StatusPhotoVideoForwardView, TFSTwitterEntityMedia;

@protocol T1StatusPhotoVideoForwardViewDelegate <NSObject>

@optional
- (void)photoVideoForwardView:(T1StatusPhotoVideoForwardView *)arg1 didTapAttributionForMediaEntity:(TFSTwitterEntityMedia *)arg2;
- (void)photoVideoForwardView:(T1StatusPhotoVideoForwardView *)arg1 didLoadImageAtIndex:(unsigned long long)arg2 fromSource:(long long)arg3 error:(NSError *)arg4;
- (void)photoVideoForwardView:(T1StatusPhotoVideoForwardView *)arg1 didLongPressImageAtIndex:(unsigned long long)arg2;
- (void)photoVideoForwardView:(T1StatusPhotoVideoForwardView *)arg1 didTapImageAtIndex:(unsigned long long)arg2;
@end

