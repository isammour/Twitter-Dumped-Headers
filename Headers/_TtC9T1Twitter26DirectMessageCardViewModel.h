//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TFNTwitterCardContext;

__attribute__((visibility("hidden")))
@interface _TtC9T1Twitter26DirectMessageCardViewModel : NSObject
{
    // Error parsing type: , name: title
    // Error parsing type: , name: buttonTexts
    // Error parsing type: , name: welcomeMessageIds
    // Error parsing type: , name: imageURLString
    // Error parsing type: , name: imageAlternateText
    // Error parsing type: , name: imageDimensions
    // Error parsing type: , name: isMediaViewHidden
    // Error parsing type: , name: isMediaViewOverlayHidden
    // Error parsing type: , name: isMediaViewPlayButtonHidden
    // Error parsing type: , name: isVideoAvailable
    // Error parsing type: , name: recipientViewModel
    // Error parsing type: , name: streamURL
    // Error parsing type: , name: cardContext
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)initWithCardContext:(id)arg1;
@property(nonatomic, retain) TFNTwitterCardContext *cardContext; // @synthesize cardContext;
@property(nonatomic, readonly) long long playerControllerMode;
@property(nonatomic, readonly) _Bool canPlayStreamInline;
@property(nonatomic, readonly) _Bool isMediaStream;
@property(nonatomic, readonly) _Bool isAmplify;
@property(nonatomic, readonly) _Bool isVine;
@property(nonatomic, copy) NSString *streamURL; // @synthesize streamURL;

@end

