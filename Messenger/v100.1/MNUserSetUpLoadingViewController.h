/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNUserSetUpDataFetcherControllerDelegate.h>
#import <Messenger/MNUserSetUpStepViewController.h>

@protocol MNUserSetUpStepCompletion;
@class MNLoadingView, MNUserSetUpDataFetcherController, NSString;

@interface MNUserSetUpLoadingViewController : UIViewController <MNUserSetUpDataFetcherControllerDelegate, MNUserSetUpStepViewController> {

	id<MNUserSetUpStepCompletion> completionDelegate;
	MNLoadingView* _loadingView;
	MNUserSetUpDataFetcherController* _userSetUpDataFetcherController;

}

@property (nonatomic,retain) MNLoadingView * loadingView;                                                    //@synthesize loadingView=_loadingView - In the implementation block
@property (nonatomic,retain) MNUserSetUpDataFetcherController * userSetUpDataFetcherController;              //@synthesize userSetUpDataFetcherController=_userSetUpDataFetcherController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNUserSetUpStepCompletion> completionDelegate; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)analyticsModule;
-(void)userSetUpDataFetcherController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)userSetUpDataFetcherController:(id)arg1 didFetchUserData:(id)arg2 ;
-(id)initWithUserSetUpDataFetcherController:(id)arg1 ;
-(MNUserSetUpDataFetcherController *)userSetUpDataFetcherController;
-(void)setUserSetUpDataFetcherController:(MNUserSetUpDataFetcherController *)arg1 ;
-(unsigned long long)preferredTransitionType;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id<MNUserSetUpStepCompletion>)completionDelegate;
-(void)setCompletionDelegate:(id<MNUserSetUpStepCompletion>)arg1 ;
-(void)setLoadingView:(MNLoadingView *)arg1 ;
-(MNLoadingView *)loadingView;
@end
