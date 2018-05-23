//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TFSTwitterEntityURL;
@protocol TFSActiveTextRange;

@interface T1ProfileUserPreviewItem : NSObject
{
    unsigned long long _type;
    TFSTwitterEntityURL *_url;
    id <TFSActiveTextRange> _bioTextRange;
}

+ (id)previewItemFollowers;
+ (id)previewItemFollowing;
+ (id)previewItemWithBioTextActiveRange:(id)arg1;
+ (id)previewItemWithURL:(id)arg1;
@property(readonly, nonatomic) id <TFSActiveTextRange> bioTextRange; // @synthesize bioTextRange=_bioTextRange;
@property(readonly, nonatomic) TFSTwitterEntityURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

