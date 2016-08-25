/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDLogger <NSObject>
@optional
-(void)didAddLogger;
-(void)willRemoveLogger;
-(dispatch_queue_sRef)loggerQueue;
-(id)loggerName;
-(void)flush;

@required
-(id)logFormatter;
-(void)setLogFormatter:(id)arg1;
-(void)logMessage:(id)arg1;

@end

