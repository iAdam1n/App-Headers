/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterStatus, TFNTwitterAccount;

@interface T1TweetDetailsViewAnalyticsItem : NSObject {

	TFNTwitterStatus* _status;
	TFNTwitterAccount* _account;

}

@property (nonatomic,readonly) TFNTwitterStatus * status;                       //@synthesize status=_status - In the implementation block
@property (nonatomic,__weak,readonly) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
+(id)tfn_defaultDataViewAdapter;
-(id)initWithStatus:(id)arg1 account:(id)arg2 ;
-(id)init;
-(TFNTwitterStatus *)status;
-(TFNTwitterAccount *)account;
@end
