//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/T1ProfileDisplayContentProvider.h>

@interface T1ProfileDisplayBlockedByViewerContentProvider : T1ProfileDisplayContentProvider
{
    _Bool _hasBlockedByViewerMessageBeenDismissed;
}

@property(nonatomic) _Bool hasBlockedByViewerMessageBeenDismissed; // @synthesize hasBlockedByViewerMessageBeenDismissed=_hasBlockedByViewerMessageBeenDismissed;
- (_Bool)_canBlockedByViewerViewAppear;
- (void)profileDataSourceDidInvalidateWithReason:(long long)arg1;
- (id)generateDefaultMainViewController;
- (id)scribeSection;
- (_Bool)shouldAllowScrollingWhenCurrent;
- (_Bool)canBecomeCurrent;

@end

