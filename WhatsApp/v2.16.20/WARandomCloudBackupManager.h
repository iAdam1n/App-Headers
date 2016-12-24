/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:47 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WACloudBackupManager.h>

@class NSTimer;

@interface WARandomCloudBackupManager : WACloudBackupManager {

	BOOL _internalAvailable;
	NSTimer* _randomTimer;

}

@property (assign,nonatomic) BOOL internalAvailable;              //@synthesize internalAvailable=_internalAvailable - In the implementation block
@property (nonatomic,retain) NSTimer * randomTimer;               //@synthesize randomTimer=_randomTimer - In the implementation block
-(id)initWithAutoBackupSettings:(id)arg1 ;
-(void)flipAvailable:(id)arg1 ;
-(BOOL)internalAvailable;
-(void)setInternalAvailable:(BOOL)arg1 ;
-(NSTimer *)randomTimer;
-(void)setRandomTimer:(NSTimer *)arg1 ;
-(BOOL)initialized;
-(BOOL)available;
@end
