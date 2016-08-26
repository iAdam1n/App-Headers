/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:41 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface SKPBackgroundTaskExecutor : NSObject {

	NSDate* _lastExecutionDate;

}

@property (nonatomic,retain) NSDate * lastExecutionDate;              //@synthesize lastExecutionDate=_lastExecutionDate - In the implementation block
+(double)executeBackgroundTaskTimeInterval;
-(void)setLastExecutionDate:(NSDate *)arg1 ;
-(NSDate *)lastExecutionDate;
-(id)init;
-(void)invalidate;
-(void)keepAlive;
@end
