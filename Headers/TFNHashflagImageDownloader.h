//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TFNUI/TIPImageFetchDelegate-Protocol.h>

@class NSMutableSet, NSString;

@interface TFNHashflagImageDownloader : NSObject <TIPImageFetchDelegate>
{
    NSMutableSet *_hashflagsDownloading;
}

+ (id)sharedDownloader;
@property(readonly, nonatomic) NSMutableSet *hashflagsDownloading; // @synthesize hashflagsDownloading=_hashflagsDownloading;
- (void).cxx_destruct;
- (void)tip_imageFetchOperation:(id)arg1 didFailToLoadFinalImage:(id)arg2;
- (void)tip_imageFetchOperation:(id)arg1 didLoadFinalImage:(id)arg2;
- (void)loadImageForHashflag:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
