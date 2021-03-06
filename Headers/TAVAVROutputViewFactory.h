//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterAVCoreAVRKit/TAVPlayerOutputViewFactory-Protocol.h>

@class NSString;

@interface TAVAVROutputViewFactory : NSObject <TAVPlayerOutputViewFactory>
{
    _Bool _preferOpenGL;
    unsigned long long _projectionType;
}

@property(nonatomic) _Bool preferOpenGL; // @synthesize preferOpenGL=_preferOpenGL;
@property(readonly, nonatomic) unsigned long long projectionType; // @synthesize projectionType=_projectionType;
- (id)playerOutputViewForPlaylistItem:(id)arg1;
- (id)initWithProjectionType:(unsigned long long)arg1 preferOpenGL:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

