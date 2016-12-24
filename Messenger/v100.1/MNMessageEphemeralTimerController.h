/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>
#import <Messenger/MNMessageCellElementController.h>

@protocol FBClock, FBCancelable;
@class MNMessageEphemeralTimerView, MNMessageEphemeralTimerViewStatus, NSString;

@interface MNMessageEphemeralTimerController : NSObject <FBClassProvidable, MNMessageCellElementController> {

	MNMessageEphemeralTimerView* _ephemeralTimerView;
	MNMessageEphemeralTimerViewStatus* _timerStatus;
	id<FBClock> _clock;
	id<FBCancelable> _cancelToken;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)awakeWithView:(id)arg1 delegate:(id)arg2 actionHandler:(id)arg3 ;
-(void)willAppearWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)willUpdateWithViewModel:(id)arg1 threadKey:(id)arg2 inContainerView:(id)arg3 ;
-(void)didDisappearInContainerView:(id)arg1 ;
-(void)_updateExpirationTimeAndLabelWithNewViewModel:(id)arg1 ;
-(void)_cancelAndClearToken;
-(double)_remainingTimeInSeconds;
-(void)_createNewTimerAndAimForNextSecond;
-(void)_updateTimerLabel;
-(void)_updateCountdownAndFireOffNewTimerIfNecessary;
-(double)_nowInMilliseconds;
@end
