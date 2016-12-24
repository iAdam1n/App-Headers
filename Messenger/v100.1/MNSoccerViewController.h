/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNSoccerViewDelegate.h>

@class MNSoccerView, FBMThreadSummary, NSString, MNSoundController, MNCDNProfileImageDownloader, MNSoccerGameScoreSender;

@interface MNSoccerViewController : UIViewController <MNSoccerViewDelegate> {

	MNSoccerView* _soccerView;
	FBMThreadSummary* _threadSummary;
	NSString* _userFBID;
	BOOL _hadHighScore;
	long long _originalHighScore;
	MNSoundController* _soundController;
	MNCDNProfileImageDownloader* _profileImageDownloader;
	NSString* _highScoreUserId;
	MNSoccerGameScoreSender* _soccerGameScoreSender;

}
-(id)initWithThreadSummary:(id)arg1 userFBID:(id)arg2 profileImageDownloader:(id)arg3 soccerGameScoreSender:(id)arg4 soundController:(id)arg5 ;
-(void)soccerViewDidKick:(id)arg1 ;
-(void)soccerViewDidWallBounce:(id)arg1 ;
-(void)soccerViewBallDidFall:(id)arg1 ;
-(void)soccerViewFireworkDidExplode:(id)arg1 ;
-(id)_downloadProfilePicturesForUserId:(id)arg1 ;
-(void)_profileImageDownloadSuccessWithImage:(id)arg1 forUserId:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end
