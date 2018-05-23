//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterShareExtensionUI/TSETweetAttachment-Protocol.h>

@class NSItemProvider, NSMutableArray, NSString;
@protocol OS_dispatch_queue, TSECardPreviewProvider, TSEImageDownloader;

@interface TSETweetAttachmentCocoaItemProvider : NSObject <TSETweetAttachment>
{
    NSObject<OS_dispatch_queue> *_afterURLLoadQueue;
    NSMutableArray *_afterURLLoadBlocks;
    NSString *_title;
    NSItemProvider *_itemProvider;
    id <TSECardPreviewProvider> _cardPreviewProvider;
    id <TSEImageDownloader> _imageDownloader;
    NSString *_urlString;
}

@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
@property(readonly, copy, nonatomic) id <TSEImageDownloader> imageDownloader; // @synthesize imageDownloader=_imageDownloader;
@property(readonly, copy, nonatomic) id <TSECardPreviewProvider> cardPreviewProvider; // @synthesize cardPreviewProvider=_cardPreviewProvider;
@property(readonly, copy, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)afterURLLoadPerform:(CDUnknownBlockType)arg1;
- (id)initWithTitle:(id)arg1 itemProvider:(id)arg2 cardPreviewProvider:(id)arg3 imageDownloader:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

