//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFSUtilities/TFSDependentConcurrentOperation.h>

#import <T1Twitter/TFSOperationDependencyResult-Protocol.h>

@class NSArray, NSError, NSString, TFNTwitterCompositionUploadContext;
@protocol TFNTwitterCompositionUploadAttachmentsOperationDelegate;

@interface TFNTwitterCompositionUploadAttachmentsOperation : TFSDependentConcurrentOperation <TFSOperationDependencyResult>
{
    _Bool _uploading;
    unsigned long long _resultState;
    NSError *_error;
    id <TFNTwitterCompositionUploadAttachmentsOperationDelegate> _delegate;
    NSArray *_attachments;
    TFNTwitterCompositionUploadContext *_context;
    NSArray *_uploadingAttachments;
    NSError *_firstError;
}

@property(nonatomic, getter=isUploading) _Bool uploading; // @synthesize uploading=_uploading;
@property(retain, nonatomic) NSError *firstError; // @synthesize firstError=_firstError;
@property(retain, nonatomic) NSArray *uploadingAttachments; // @synthesize uploadingAttachments=_uploadingAttachments;
@property(readonly, nonatomic) TFNTwitterCompositionUploadContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(nonatomic) __weak id <TFNTwitterCompositionUploadAttachmentsOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSError *resultError; // @synthesize resultError=_error;
@property unsigned long long resultState; // @synthesize resultState=_resultState;
- (void).cxx_destruct;
- (void)_tfn_main_updateResultStatus;
- (void)_tfn_main_attachmentUploadDidEnd;
- (void)_tfn_main_notification_attachmentUploadDidCancel:(id)arg1;
- (void)_tfn_main_notification_attachmentUploadDidFail:(id)arg1;
- (void)_tfn_main_notification_attachmentUploadDidSucceed:(id)arg1;
- (void)_tfn_main_notification_attachmentUpdateDidProgress:(id)arg1;
- (void)_tfn_main_notification_attachmentUploadDidStart:(id)arg1;
- (void)_tfn_main_cancel;
- (void)_tfn_main_observeAttachmentUploadNotifications:(id)arg1;
- (void)_tfn_main_run;
- (void)cancel;
- (void)run;
- (void)dealloc;
- (id)initWithAttachments:(id)arg1 context:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

