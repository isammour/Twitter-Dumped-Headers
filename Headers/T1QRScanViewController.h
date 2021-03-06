//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNViewController.h>

#import <T1Twitter/AVCaptureMetadataOutputObjectsDelegate-Protocol.h>
#import <T1Twitter/TFNTwitterAuthenticated-Protocol.h>
#import <T1Twitter/UIImagePickerControllerDelegate-Protocol.h>
#import <T1Twitter/UINavigationControllerDelegate-Protocol.h>

@class AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoPreviewLayer, CAShapeLayer, NSObject, NSString, TFNAuthorizationInstructionView, TFNTwitterAccount, UIActivityIndicatorView, UIView;
@protocol OS_dispatch_queue;

@interface T1QRScanViewController : TFNViewController <AVCaptureMetadataOutputObjectsDelegate, TFNTwitterAuthenticated, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    _Bool _shouldShowCameraPermissionsPrompt;
    _Bool _qrScanViewFromImagePicker;
    TFNTwitterAccount *_account;
    AVCaptureSession *_captureSession;
    AVCaptureMetadataOutput *_captureMetadataOutput;
    AVCaptureVideoPreviewLayer *_captureVideoPreviewLayer;
    CAShapeLayer *_fillLayer;
    CAShapeLayer *_scanLayer;
    UIView *_scanBoxView;
    UIActivityIndicatorView *_activityView;
    TFNAuthorizationInstructionView *_cameraAuthorizationView;
    NSObject<OS_dispatch_queue> *_image_process_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *image_process_queue; // @synthesize image_process_queue=_image_process_queue;
@property(readonly, nonatomic) TFNAuthorizationInstructionView *cameraAuthorizationView; // @synthesize cameraAuthorizationView=_cameraAuthorizationView;
@property(readonly, nonatomic) UIActivityIndicatorView *activityView; // @synthesize activityView=_activityView;
@property(readonly, nonatomic) UIView *scanBoxView; // @synthesize scanBoxView=_scanBoxView;
@property(readonly, nonatomic) CAShapeLayer *scanLayer; // @synthesize scanLayer=_scanLayer;
@property(readonly, nonatomic) CAShapeLayer *fillLayer; // @synthesize fillLayer=_fillLayer;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *captureVideoPreviewLayer; // @synthesize captureVideoPreviewLayer=_captureVideoPreviewLayer;
@property(retain, nonatomic) AVCaptureMetadataOutput *captureMetadataOutput; // @synthesize captureMetadataOutput=_captureMetadataOutput;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
@property(nonatomic) _Bool qrScanViewFromImagePicker; // @synthesize qrScanViewFromImagePicker=_qrScanViewFromImagePicker;
@property(nonatomic) _Bool shouldShowCameraPermissionsPrompt; // @synthesize shouldShowCameraPermissionsPrompt=_shouldShowCameraPermissionsPrompt;
@property(retain, nonatomic) TFNTwitterAccount *account; // @synthesize account=_account;
- (void).cxx_destruct;
- (id)scribeSection;
- (void)processQRCodeImage:(id)arg1;
- (void)hideScanLayer:(_Bool)arg1;
- (void)_t1_addActivityIndicatorView;
- (id)_t1_replaceBackgroundColorWithBlackColorForQRImage:(id)arg1;
- (void)_t1_showQRLoginMsg:(id)arg1 withError:(id)arg2;
- (void)_t1_qrLoginSubmit:(id)arg1;
- (void)_t1_qrLoginValidate:(id)arg1;
- (void)_t1_processQRCodeMsg:(id)arg1;
- (void)_t1_didDetectQRCode:(id)arg1;
- (void)_t1_invalidQRCode;
- (id)_t1_detectQRFromImage:(id)arg1;
- (void)_t1_stopCapturingHighlightingRecticle;
- (void)_t1_stopCapturing;
- (void)_t1_startCapturing;
- (void)_t1_addCameraAuthorizationView;
- (void)_t1_addScanBoxView;
- (void)captureOutput:(id)arg1 didOutputMetadataObjects:(id)arg2 fromConnection:(id)arg3;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

