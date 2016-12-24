/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAURLTaskData.h>

@class NSURL, NSData;

@interface WAURLDownloadTaskData : WAURLTaskData {

	NSURL* _fileURL;
	NSData* _resumeData;

}

@property (nonatomic,copy) NSURL * fileURL;                  //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * resumeData;              //@synthesize resumeData=_resumeData - In the implementation block
+(Class)taskClass;
-(void)setResumeData:(NSData *)arg1 ;
-(BOOL)validateResponseForTask:(id)arg1 error:(id*)arg2 ;
-(void)validateDownloadedFileForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)transformDownloadedFileForTask:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSData *)resumeData;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
@end
