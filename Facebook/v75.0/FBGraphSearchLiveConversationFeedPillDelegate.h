/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedNewStoriesPillDelegate.h>

@class FBGraphSearchLiveConversationFeedLogger, UITableView;

@interface FBGraphSearchLiveConversationFeedPillDelegate : NSObject <FBFeedNewStoriesPillDelegate> {

	FBGraphSearchLiveConversationFeedLogger* _logger;
	BOOL _isPresented;
	UITableView* _tableView;

}

@property (nonatomic,retain) UITableView * tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) BOOL isPresented;                     //@synthesize isPresented=_isPresented - In the implementation block
-(BOOL)isAtOrAboveFirstFeedUnit;
-(id)initWithTableView:(id)arg1 logger:(id)arg2 ;
-(id)initWithLogger:(id)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(BOOL)isPresented;
-(void)setIsPresented:(BOOL)arg1 ;
@end
