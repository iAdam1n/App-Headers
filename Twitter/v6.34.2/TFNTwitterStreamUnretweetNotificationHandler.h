/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterStreamNotificationHandler.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, NSString;

@interface TFNTwitterStreamUnretweetNotificationHandler : NSObject <TFNTwitterStreamNotificationHandler, TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
-(void)handleNotification:(id)arg1 stream:(id)arg2 ;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

