//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <T1Twitter/TFNPlayerDownloadItem-Protocol.h>

@class NSError, NSString, NSURL;
@protocol TFNPlayerDownloadItemDelegate, TNUSimpleDownload;

@interface TFNPlayerDownloadItemInternal : NSObject <TFNPlayerDownloadItem>
{
    id <TNUSimpleDownload> _download;
    NSError *_downloadError;
    _Bool _logAVPlayerErrorsToCrashlytics;
    id <TFNPlayerDownloadItemDelegate> _delegate;
    NSURL *_sourceURL;
    NSURL *_downloadItemFileURL;
}

@property(nonatomic) _Bool logAVPlayerErrorsToCrashlytics; // @synthesize logAVPlayerErrorsToCrashlytics=_logAVPlayerErrorsToCrashlytics;
@property(readonly, nonatomic) NSURL *downloadItemFileURL; // @synthesize downloadItemFileURL=_downloadItemFileURL;
@property(readonly, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property(nonatomic) __weak id <TFNPlayerDownloadItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)private_handleCompletion:(id)arg1 fileURL:(id)arg2 error:(id)arg3;
- (void)private_stopDownload;
- (void)stopDownload;
- (void)startDownload;
@property(readonly, nonatomic) long long status;
- (void)dealloc;
- (id)initWithSourceURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
