/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface _WAURLSessionDownloadTaskResumeDataOS6 : NSObject <NSSecureCoding> {

	NSString* _filePath;
	NSString* _etag;

}

@property (nonatomic,copy) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (nonatomic,copy) NSString * etag;                  //@synthesize etag=_etag - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
@end
