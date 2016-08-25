/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:55 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PTHCommon/PTHViewController.h>

@protocol PTHTweetbotStatusDetailControllerProtocol;
@class PTHTweetbotStatus, UIViewController, NSLayoutConstraint;

@interface PTHTweetbotStatusDetailChildController : PTHViewController {

	BOOL _shouldShow;
	PTHTweetbotStatus* _status;
	UIViewController*<PTHTweetbotStatusDetailControllerProtocol> _mainStatusController;
	NSLayoutConstraint* _showConstraint;
	NSLayoutConstraint* _hideConstraint;

}

@property (nonatomic,readonly) PTHTweetbotStatus * status;                                                                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic,__weak) UIViewController*<PTHTweetbotStatusDetailControllerProtocol> mainStatusController;              //@synthesize mainStatusController=_mainStatusController - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * showConstraint;                                                                   //@synthesize showConstraint=_showConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * hideConstraint;                                                                   //@synthesize hideConstraint=_hideConstraint - In the implementation block
@property (nonatomic,readonly) BOOL shouldShow;                                                                                     //@synthesize shouldShow=_shouldShow - In the implementation block
-(void)didUpdate;
-(void)statusWasUpdated;
-(UIViewController*<PTHTweetbotStatusDetailControllerProtocol>)mainStatusController;
-(void)setMainStatusController:(UIViewController*<PTHTweetbotStatusDetailControllerProtocol>)arg1 ;
-(NSLayoutConstraint *)showConstraint;
-(void)setShowConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)hideConstraint;
-(void)setHideConstraint:(NSLayoutConstraint *)arg1 ;
-(void)show;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(PTHTweetbotStatus *)status;
-(BOOL)shouldShow;
-(id)initWithStatus:(id)arg1 ;
@end

