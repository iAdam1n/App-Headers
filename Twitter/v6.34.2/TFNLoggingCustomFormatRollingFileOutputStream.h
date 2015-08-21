/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNLoggingRollingFileOutputStream.h>
#import <Twitter/TFNBugReportAttachmentProvider.h>

@class NSSet, NSString;

@interface TFNLoggingCustomFormatRollingFileOutputStream : TFNLoggingRollingFileOutputStream <TFNBugReportAttachmentProvider> {

	NSSet* _channels;
	/*^block*/id _customFormatBlock;
	BOOL _shouldOutputBugReportAttachment;
	BOOL _shouldLogFileOutputEvents;
	NSString* _attachmentFileExtension;
	NSString* _attachmentFileName;

}

@property (nonatomic,copy) NSString * attachmentFileExtension;                  //@synthesize attachmentFileExtension=_attachmentFileExtension - In the implementation block
@property (nonatomic,copy) NSString * attachmentFileName;                       //@synthesize attachmentFileName=_attachmentFileName - In the implementation block
@property (assign,nonatomic) BOOL shouldOutputBugReportAttachment;              //@synthesize shouldOutputBugReportAttachment=_shouldOutputBugReportAttachment - In the implementation block
@property (assign,nonatomic) BOOL shouldLogFileOutputEvents;                    //@synthesize shouldLogFileOutputEvents=_shouldLogFileOutputEvents - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)outputLogInfo:(id)arg1 ;
-(long long)shouldFilterLevel:(long long)arg1 channel:(id)arg2 contextObject:(id)arg3 ;
-(id)attachmentWithContext:(id)arg1 ;
-(BOOL)shouldLogFileOutputEvents;
-(void)fileOutputEventBegan:(long long)arg1 info:(id)arg2 ;
-(void)fileOutputEventFinished:(long long)arg1 info:(id)arg2 ;
-(void)fileOutputEventFailed:(long long)arg1 info:(id)arg2 error:(id)arg3 ;
-(NSString *)attachmentFileExtension;
-(NSString *)attachmentFileName;
-(BOOL)shouldOutputBugReportAttachment;
-(id)attachmentFullFileName;
-(id)initWithLogFileDirectoryPath:(id)arg1 logFilePrefix:(id)arg2 maxLogFiles:(unsigned long long)arg3 maxBytesPerLogFile:(unsigned long long)arg4 channels:(id)arg5 customFormatBlock:(/*^block*/id)arg6 error:(out id*)arg7 ;
-(void)setAttachmentFileExtension:(NSString *)arg1 ;
-(void)setAttachmentFileName:(NSString *)arg1 ;
-(void)setShouldOutputBugReportAttachment:(BOOL)arg1 ;
-(void)setShouldLogFileOutputEvents:(BOOL)arg1 ;
@end

