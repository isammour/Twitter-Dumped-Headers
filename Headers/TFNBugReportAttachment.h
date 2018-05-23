//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TFNBugReportAttachment : NSObject
{
    _Bool _isAttachedAsSeparateFile;
    NSString *_mimeType;
    NSData *_data;
    NSString *_fileName;
    NSString *_filePath;
}

+ (id)attachmentWithFilePath:(id)arg1 mimeType:(id)arg2;
+ (id)attachmentWithText:(id)arg1 fileName:(id)arg2;
+ (id)attachmentWithData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
@property(nonatomic) _Bool isAttachedAsSeparateFile; // @synthesize isAttachedAsSeparateFile=_isAttachedAsSeparateFile;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
- (void).cxx_destruct;
- (id)zippableEntry;

@end

