/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBGroupsTableViewControllerProtocol.h>

@protocol FBIntentHandler;
@class FBContentInsetTracker, FBUserSession, NSString;

@interface FBGroupsTableViewController : UITableViewController <FBGroupsTableViewControllerProtocol> {

	FBContentInsetTracker* _contentInsetTracker;
	BOOL _contentOffsetOverrideWithInset;
	BOOL _useContentInsetTracker;
	id<FBIntentHandler> _intentHandler;
	FBUserSession* _session;

}

@property (nonatomic,readonly) FBUserSession * session;                             //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL useContentInsetTracker;                           //@synthesize useContentInsetTracker=_useContentInsetTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(void)setUseContentInsetTracker:(BOOL)arg1 ;
-(BOOL)useContentInsetTracker;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
-(void)scrollToTop;
@end
