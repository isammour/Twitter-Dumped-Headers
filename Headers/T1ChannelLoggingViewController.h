//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNItemsDataViewController.h>

#import <T1Twitter/T1ChannelLoggingOutputStreamDelegate-Protocol.h>

@class NSString, T1ChannelLoggingOutputStream;

@interface T1ChannelLoggingViewController : TFNItemsDataViewController <T1ChannelLoggingOutputStreamDelegate>
{
    T1ChannelLoggingOutputStream *_stream;
}

@property(readonly, nonatomic) T1ChannelLoggingOutputStream *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (void)stream:(id)arg1 didAppendLogEntries:(unsigned long long)arg2 didPruneLogEntries:(unsigned long long)arg3;
- (void)clearLog:(id)arg1;
- (void)_updateSections;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithChannelLoggingOutputStream:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
