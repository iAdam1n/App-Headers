/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:30 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNScopedContainerViewController.h>
#import <Twitter/TFNTwitterAuthenticated.h>
#import <Twitter/TFNScopedContainerViewControllerDelegate.h>

@class T1CustomTimelineCreatedListViewController, T1CustomTimelineFollowingListViewController, TFNTwitterAccount, TFNTwitterUser, NSString;

@interface T1CustomTimelineListViewController : TFNScopedContainerViewController <TFNTwitterAuthenticated, TFNScopedContainerViewControllerDelegate> {

	T1CustomTimelineCreatedListViewController* _createdTimeline;
	T1CustomTimelineFollowingListViewController* _followingTimeline;
	TFNTwitterAccount* _account;
	TFNTwitterUser* _user;

}

@property (nonatomic,retain) TFNTwitterUser * user;                    //@synthesize user=_user - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;              //@synthesize account=_account - In the implementation block
-(id)scribe;
-(id)scribePage;
-(BOOL)showsSearchButton;
-(BOOL)showsComposeButton;
-(id)scopedContainerViewController:(id)arg1 titleForSegmentAtIndex:(long long)arg2 ;
-(id)init;
-(void)viewDidLoad;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterUser *)user;
-(void)setUser:(TFNTwitterUser *)arg1 ;
@end
