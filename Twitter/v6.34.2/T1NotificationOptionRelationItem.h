/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1NotificationOptionItem.h>

@interface T1NotificationOptionRelationItem : T1NotificationOptionItem {

	BOOL _mentionEnabled;
	long long _type;
	/*^block*/id _mentionEnableBlock;

}

@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL mentionEnabled;              //@synthesize mentionEnabled=_mentionEnabled - In the implementation block
@property (nonatomic,copy) id mentionEnableBlock;              //@synthesize mentionEnableBlock=_mentionEnableBlock - In the implementation block
-(id)initWithTitle:(id)arg1 enabled:(long long)arg2 mentionEnabled:(BOOL)arg3 ;
-(void)setMentionEnableBlock:(id)arg1 ;
-(void)setMentionEnabled:(BOOL)arg1 ;
-(id)_summaryForEnabled:(long long)arg1 ;
-(id)_viewControllerWithTitle:(id)arg1 ;
-(BOOL)mentionEnabled;
-(id)mentionEnableBlock;
-(void)setType:(long long)arg1 ;
-(long long)type;
@end

