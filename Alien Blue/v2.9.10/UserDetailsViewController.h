/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:45 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/ABOutlineViewController.h>

@class NSString, NSMutableDictionary;

@interface UserDetailsViewController : ABOutlineViewController {

	BOOL _notFound;
	NSString* _username;
	NSMutableDictionary* _user;

}

@property (retain) NSString * username;                     //@synthesize username=_username - In the implementation block
@property (retain) NSMutableDictionary * user;              //@synthesize user=_user - In the implementation block
@property (assign) BOOL notFound;                           //@synthesize notFound=_notFound - In the implementation block
-(void)showPostsForUser;
-(void)showCommentsForUser;
-(BOOL)notFound;
-(void)refreshNodes;
-(void)setNotFound:(BOOL)arg1 ;
-(id)initWithUsername:(id)arg1 ;
-(void)userInfoResponse:(id)arg1 ;
-(id)customScreenNameForAnalytics;
-(NSMutableDictionary *)user;
-(void)setUser:(NSMutableDictionary *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

