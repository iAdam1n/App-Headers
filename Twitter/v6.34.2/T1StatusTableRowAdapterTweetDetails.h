/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterAccount, TFNTwitterScribeContext;

@interface T1StatusTableRowAdapterTweetDetails : NSObject {

	TFNTwitterAccount* _account;
	TFNTwitterScribeContext* _scribeContext;

}

@property (nonatomic,retain) TFNTwitterAccount * account;                          //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeContext * scribeContext;              //@synthesize scribeContext=_scribeContext - In the implementation block
-(TFNTwitterScribeContext *)scribeContext;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(id)initWithAccount:(id)arg1 scribeContext:(id)arg2 ;
-(void)presentDetailForStatus:(id)arg1 inTableViewController:(id)arg2 ;
-(id)tableViewController:(id)arg1 didSelectStatus:(id)arg2 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end

