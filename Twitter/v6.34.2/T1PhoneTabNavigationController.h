/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/T1TabNavigationController.h>
#import <Twitter/TFNUISearchingDelegate.h>
#import <Twitter/TFNNavigationControllerTransitionProvider.h>

@class NSString;

@interface T1PhoneTabNavigationController : T1TabNavigationController <TFNUISearchingDelegate, TFNNavigationControllerTransitionProvider> {

	BOOL _isAnimatingSearch;

}

@property (assign,nonatomic) BOOL isAnimatingSearch;                //@synthesize isAnimatingSearch=_isAnimatingSearch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsAnimatingSearch:(BOOL)arg1 ;
-(id)navigationControllerTransitionForOperation:(long long)arg1 ;
-(BOOL)isAnimatingSearch;
-(void)showComposeFromBarButtonItem:(id)arg1 ;
-(void)showDraftsFromBarButtonItem:(id)arg1 ;
-(void)showSearchFromBarButtonItem:(id)arg1 ;
-(void)addStandardBarButtonItems:(id)arg1 ;
-(void)searchViewControllerDidCancel:(id)arg1 ;
-(id)init;
@end

