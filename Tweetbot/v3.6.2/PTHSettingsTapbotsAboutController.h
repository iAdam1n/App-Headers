/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:06:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/ECBB6493-3CD3-4031-8AE5-B625F29152BF/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Tweetbot/PTHViewController.h>

@class ACAccountStore, NSArray;

@interface PTHSettingsTapbotsAboutController : PTHViewController {

	ACAccountStore* _acAccountStore;
	NSArray* _acAccounts;

}
+(void)requestACAccounts:(/*^block*/id)arg1 ;
-(void)follow:(id)arg1 credit:(id)arg2 ;
-(void)openReviewPage:(id)arg1 ;
-(void)showPrivacy:(id)arg1 ;
-(void)openGiftPage:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
@end
