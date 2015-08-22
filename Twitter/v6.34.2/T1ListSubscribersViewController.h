/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:36 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1UsersViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterUserListSubscribersList, TFNTwitterList, NSString, TFNTwitterAccount;

@interface T1ListSubscribersViewController : T1UsersViewController <TFNTwitterAuthenticated> {

	TFNTwitterUserListSubscribersList* _subscribersList;
	TFNTwitterList* _list;

}

@property (nonatomic,retain) TFNTwitterList * list;                    //@synthesize list=_list - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account; 
-(id)scribe;
-(id)scribePage;
-(id)scribeSection;
-(void)requestUsers;
-(void)_unregisterNotificationHandlers;
-(void)_requestRelationships;
-(void)_subscribersListDidUpdate:(id)arg1 ;
-(void)_registerNotificationHandlers;
-(void)dealloc;
-(void)viewDidLoad;
-(void)setList:(TFNTwitterList *)arg1 ;
-(TFNTwitterList *)list;
@end
