//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface TSEMultipartFormPart : NSObject
{
    NSString *_name;
    NSData *_data;
    NSString *_contentType;
    NSString *_filename;
    NSString *_file;
}

@property(retain, nonatomic) NSString *file; // @synthesize file=_file;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(retain, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

