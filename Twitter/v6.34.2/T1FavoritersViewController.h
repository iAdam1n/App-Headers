/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1UsersItemsTableViewController.h>

@class TFNTwitterScribeContext, NSArray, TFNTwitterAccount;

@interface T1FavoritersViewController : T1UsersItemsTableViewController {

	TFNTwitterScribeContext* _scribeContext;
	NSArray* _users;

}

@property (nonatomic,readonly) TFNTwitterAccount * account; 
@property (nonatomic,copy) TFNTwitterScribeContext * scribeContext;              //@synthesize scribeContext=_scribeContext - In the implementation block
@property (nonatomic,retain) NSArray * users;                                    //@synthesize users=_users - In the implementation block
-(id)scribePage;
-(TFNTwitterScribeContext *)scribeContext;
-(id)scribeSection;
-(id)scribeComponent;
-(id)initWithStatusID:(long long)arg1 account:(id)arg2 ;
-(void)setScribeContext:(TFNTwitterScribeContext *)arg1 ;
-(id)init;
-(void)update;
-(id)initWithAccount:(id)arg1 ;
-(NSArray *)users;
-(void)setUsers:(NSArray *)arg1 ;
@end

