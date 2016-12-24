/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPSAppointmentCancelViewDelegate.h>

@protocol MNPSAppointmentCancelViewControllerDelegate;
@class FBProfServicesBookingDataModel, NSString;

@interface MNPSAppointmentCancelViewController : UIViewController <MNPSAppointmentCancelViewDelegate> {

	id<MNPSAppointmentCancelViewControllerDelegate> _delegate;
	FBProfServicesBookingDataModel* _dataModel;
	NSString* _entryPoint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * entryPoint;                   //@synthesize entryPoint=_entryPoint - In the implementation block
+(Class)fb_cancelViewClass;
+(id)fb_eventName;
-(void)setEntryPoint:(NSString *)arg1 ;
-(id)initWithDataModel:(id)arg1 delegate:(id)arg2 ;
-(void)cancelViewDidTap:(id)arg1 ;
-(void)cancelViewDidChange:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(NSString *)entryPoint;
@end
