/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBSDKContainerViewControllerDelegate;
@interface FBSDKContainerViewController : UIViewController {

	id<FBSDKContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSDKContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)displayChildController:(id)arg1 ;
-(void)setDelegate:(id<FBSDKContainerViewControllerDelegate>)arg1 ;
-(id<FBSDKContainerViewControllerDelegate>)delegate;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

