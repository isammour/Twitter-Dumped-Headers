//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFNTwitterAmplifyAbstractInstance.h>

#import <T1Twitter/NSXMLParserDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, TFNTwitterAVPlayerControllerVideo;

@interface TFNTwitterAmplifyVMAPInstance : TFNTwitterAmplifyAbstractInstance <NSXMLParserDelegate>
{
    NSMutableArray *_mutableAdVideos;
    NSMutableArray *_mutableContentVideos;
    NSString *_processingTrackingEventKey;
    NSMutableArray *_elementStack;
    long long _currentAdPosition;
    _Bool _useVideoBirdUrl;
    NSArray *_videos;
}

@property(readonly, nonatomic) _Bool useVideoBirdUrl; // @synthesize useVideoBirdUrl=_useVideoBirdUrl;
- (id)videos;
- (void).cxx_destruct;
- (_Bool)_processVideoVariantWithAttributes:(id)arg1;
- (void)parser:(id)arg1 foundCDATA:(id)arg2;
- (_Bool)_processCTAURLElementWithAttributes:(id)arg1 ctaType:(unsigned long long)arg2;
- (_Bool)_processCTAWatchElementWithAttributes:(id)arg1;
- (_Bool)_processCTAOpenElementWithAttributes:(id)arg1;
- (_Bool)_processCTAAppStoreElementWithAttributes:(id)arg1;
- (_Bool)_processTwitterAdElementWithAttributes:(id)arg1;
- (_Bool)_processAdElement;
- (_Bool)_processAdBreakElementWithAttributes:(id)arg1;
- (_Bool)_processTrackingElementWithAttributes:(id)arg1;
- (_Bool)_processContentElementWithAttributes:(id)arg1;
- (_Bool)_processElement:(long long)arg1 attributes:(id)arg2 namespace:(long long)arg3;
- (long long)_namespaceForURI:(id)arg1;
- (long long)_elementForName:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidEndDocument:(id)arg1;
- (id)_createParserWithData:(id)arg1;
- (void)_cleanUpDataStores;
- (void)_createDataStores;
- (id)processResponse:(id)arg1;
- (id)_processResponseStatusCode:(long long)arg1 data:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) TFNTwitterAVPlayerControllerVideo *currentVideo;
- (id)initWithURL:(id)arg1 dynamicAdId:(id)arg2;
- (id)initWithURL:(id)arg1 dynamicAdId:(id)arg2 useVideoBirdUrl:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
