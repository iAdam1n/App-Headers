/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/FBWebRTCPromoCellController.h>

@protocol FBProvider;
@class FBUserSession, FBWebRTCSchedulingLogger, UIViewController, NSString;

@interface FBWebRTCScheduleCallCellController : NSObject <FBClassProvidable, FBWebRTCPromoCellController> {

	FBUserSession* _session;
	id<FBProvider> _scheduleCallNavigationCoordinatorProvider;
	FBWebRTCSchedulingLogger* _logger;
	UIViewController* presentingViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) UIViewController * presentingViewController; 
@property (nonatomic,copy,readonly) NSString * reuseIdentifier; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)generateCell;
-(BOOL)shouldShowCell;
-(void)performActionFromPromoBar;
-(void)_performActionCore;
-(UIViewController *)presentingViewController;
-(NSString *)reuseIdentifier;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)performAction;
-(void)configureCell:(id)arg1 ;
@end
