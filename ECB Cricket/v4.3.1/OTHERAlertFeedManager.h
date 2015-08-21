/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:44:03 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/DE3331E2-1165-4E9B-8894-BDF4D69820B5/ECBCricketApp.app/ECBCricketApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSURL, NSDictionary, NSString;

@interface OTHERAlertFeedManager : NSObject <UIAlertViewDelegate> {

	BOOL _loading;
	NSURL* _feedURL;
	NSDictionary* _lastAlert;

}

@property (nonatomic,retain) NSURL * feedURL;                       //@synthesize feedURL=_feedURL - In the implementation block
@property (assign,nonatomic) BOOL loading;                          //@synthesize loading=_loading - In the implementation block
@property (nonatomic,retain) NSDictionary * lastAlert;              //@synthesize lastAlert=_lastAlert - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAlertFeedManager;
-(void)setFeedURL:(NSURL *)arg1 ;
-(void)checkForAlerts;
-(void)processAlertsFromFeed:(id)arg1 ;
-(BOOL)alertShownBefore:(id)arg1 ;
-(void)setLastAlert:(NSDictionary *)arg1 ;
-(void)displayAlert:(id)arg1 ;
-(NSDictionary *)lastAlert;
-(id)init;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(NSURL *)feedURL;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)loading;
@end
