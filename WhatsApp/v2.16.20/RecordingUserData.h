/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WhatsApp/WhatsApp-Structs.h>
@class NSDate;

@interface RecordingUserData : NSObject {

	NSDate* _startTime;
	gzFile_s* _fileHanlde;

}

@property (nonatomic,retain) NSDate * startTime;                //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) gzFile_s* fileHanlde;              //@synthesize fileHanlde=_fileHanlde - In the implementation block
-(void)setFileHanlde:(gzFile_s*)arg1 ;
-(id)initWithDate:(id)arg1 fileHandle:(gzFile_s*)arg2 ;
-(gzFile_s*)fileHanlde;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSDate *)startTime;
@end
