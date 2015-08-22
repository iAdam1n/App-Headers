/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterAccount, NSString;

@interface TFNTwitterCallToAction : NSObject {

	TFNTwitterAccount* _account;
	NSString* _titleText;
	NSString* _detailText;
	NSString* _callToActionText;
	/*^block*/id _actionBlock;

}

@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSString * titleText;                       //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * detailText;                      //@synthesize detailText=_detailText - In the implementation block
@property (nonatomic,copy) NSString * callToActionText;                //@synthesize callToActionText=_callToActionText - In the implementation block
@property (nonatomic,copy) id actionBlock;                             //@synthesize actionBlock=_actionBlock - In the implementation block
-(void)setCallToActionText:(NSString *)arg1 ;
-(NSString *)callToActionText;
-(NSString *)detailText;
-(void)setTitleText:(NSString *)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(NSString *)titleText;
-(void)setDetailText:(NSString *)arg1 ;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
@end
