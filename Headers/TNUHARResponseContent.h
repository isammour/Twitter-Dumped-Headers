//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitterNetworkUtilities/TNUHARObject.h>

@class NSString;

@interface TNUHARResponseContent : TNUHARObject
{
    NSString *_mimeType;
    long long _size;
    NSString *_text;
    NSString *_encoding;
}

@property(copy, nonatomic) NSString *encoding; // @synthesize encoding=_encoding;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (void).cxx_destruct;
- (id)mutableJSONDictionary;

@end

