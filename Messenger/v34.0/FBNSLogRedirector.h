/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:46 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface FBNSLogRedirector : NSObject {

	int _originalNSLogFD;
	int _newNSLogFD;
	NSString* _filename;
	NSTimer* _rotateTimer;

}

@property (nonatomic,copy) NSString * filename;                  //@synthesize filename=_filename - In the implementation block
@property (nonatomic,retain) NSTimer * rotateTimer;              //@synthesize rotateTimer=_rotateTimer - In the implementation block
+(id)redirectorWithFilename:(id)arg1 ;
-(void)onLogRotateTimer:(id)arg1 ;
-(void)setRotateTimer:(NSTimer *)arg1 ;
-(id)filenameWithExtension:(int)arg1 ;
-(void)redirectStderrToFile:(id)arg1 ;
-(NSTimer *)rotateTimer;
-(void)closeNewNSLogFD;
-(void)restoreStderr;
-(id)logFileDataArray;
-(void)rotateLogFiles;
-(void)dealloc;
-(id)init;
-(void)close;
-(NSString *)filename;
-(void)setFilename:(NSString *)arg1 ;
-(void)open;
@end

