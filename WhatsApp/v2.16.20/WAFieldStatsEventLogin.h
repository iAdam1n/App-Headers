/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:46 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@interface WAFieldStatsEventLogin : WAFieldStatsEvent {

	double _login_result;
	double _retry_count;
	double _login_t;

}

@property (assign,nonatomic) double login_result;              //@synthesize login_result=_login_result - In the implementation block
@property (assign,nonatomic) double retry_count;               //@synthesize retry_count=_retry_count - In the implementation block
@property (assign,nonatomic) double login_t;                   //@synthesize login_t=_login_t - In the implementation block
-(void)setRetry_count:(double)arg1 ;
-(void)setLogin_result:(double)arg1 ;
-(void)setLogin_t:(double)arg1 ;
-(double)retry_count;
-(double)login_result;
-(double)login_t;
-(void)submit;
-(id)init;
@end
