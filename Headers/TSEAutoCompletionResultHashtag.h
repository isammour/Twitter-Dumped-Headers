//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterShareExtensionUI/TSEAutoCompletionResult-Protocol.h>

@class NSString;

@interface TSEAutoCompletionResultHashtag : NSObject <TSEAutoCompletionResult>
{
    NSString *_hashtag;
}

@property(readonly, copy, nonatomic) NSString *hashtag; // @synthesize hashtag=_hashtag;
- (void).cxx_destruct;
- (id)initWithHashtag:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
