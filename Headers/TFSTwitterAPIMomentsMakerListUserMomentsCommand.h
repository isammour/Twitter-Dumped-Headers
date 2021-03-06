//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterAPIMomentsCommand.h>

@class NSString;

@interface TFSTwitterAPIMomentsMakerListUserMomentsCommand : TFSTwitterAPIMomentsCommand
{
    _Bool _includesPremadeMoments;
    _Bool _shouldHydrateThumbnail;
    long long _count;
    NSString *_scrollCursor;
    NSString *_userID;
    NSString *_contentType;
}

@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(nonatomic) _Bool shouldHydrateThumbnail; // @synthesize shouldHydrateThumbnail=_shouldHydrateThumbnail;
@property(nonatomic) _Bool includesPremadeMoments; // @synthesize includesPremadeMoments=_includesPremadeMoments;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(copy, nonatomic) NSString *scrollCursor; // @synthesize scrollCursor=_scrollCursor;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)request;
- (id)initWithService:(id)arg1 accountID:(id)arg2 userID:(id)arg3 count:(long long)arg4 scrollCursor:(id)arg5 includesPremadeMoments:(_Bool)arg6 source:(unsigned long long)arg7 shouldHydrateThumbnail:(_Bool)arg8 contentType:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;
- (id)initWithService:(id)arg1 accountID:(id)arg2 authContext:(id)arg3 networkTransactionMetrics:(id)arg4 source:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;

@end

