/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventICloudAutoBackupError : WAFieldStatsEvent {

	double _icloud_backup_error;
	double _icloud_backup_interval;

}

@property (assign,nonatomic) double icloud_backup_error;                 //@synthesize icloud_backup_error=_icloud_backup_error - In the implementation block
@property (assign,nonatomic) double icloud_backup_interval;              //@synthesize icloud_backup_interval=_icloud_backup_interval - In the implementation block
-(double)icloud_backup_error;
-(void)setIcloud_backup_error:(double)arg1 ;
-(double)icloud_backup_interval;
-(void)setIcloud_backup_interval:(double)arg1 ;
-(void)submit;
-(id)init;
@end
