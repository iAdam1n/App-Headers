/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSData;

@interface BITHockeyAttachment : NSObject <NSCoding> {

	NSString* _filename;
	NSData* _hockeyAttachmentData;
	NSString* _contentType;

}

@property (nonatomic,readonly) NSString * filename;                        //@synthesize filename=_filename - In the implementation block
@property (nonatomic,readonly) NSData * hockeyAttachmentData;              //@synthesize hockeyAttachmentData=_hockeyAttachmentData - In the implementation block
@property (nonatomic,readonly) NSString * contentType;                     //@synthesize contentType=_contentType - In the implementation block
-(id)initWithFilename:(id)arg1 hockeyAttachmentData:(id)arg2 contentType:(id)arg3 ;
-(NSData *)hockeyAttachmentData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)contentType;
-(NSString *)filename;
@end

