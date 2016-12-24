/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBSpeechRecognitionServiceListener.h>

@class FBUserSession, FBSpeechRecognitionService, FBVoiceSearchView, NSDictionary, FBVoiceSearchEarconPlayer, FBVoiceSearchHandler, FBVoiceSearchTimeoutHandler, NSString;

@interface FBVoiceSearchViewController : UIViewController <FBSpeechRecognitionServiceListener> {

	FBUserSession* _session;
	FBSpeechRecognitionService* _speechReco;
	FBVoiceSearchView* _voiceSearchView;
	FBVoiceSearchState _state;
	NSDictionary* _tabForIntentLabel;
	FBVoiceSearchEarconPlayer* _earcons;
	FBVoiceSearchHandler* _searchHandler;
	FBVoiceSearchTimeoutHandler* _timeoutHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishedTranscribing;
-(id)recoSettings;
-(void)handleTimeout;
-(void)handleRecordPermission:(BOOL)arg1 ;
-(void)onResult:(id)arg1 ;
-(void)playFinalSound:(id)arg1 ;
-(void)launchSearch;
-(void)onAudioUpdate:(short*)arg1 withLength:(unsigned long long)arg2 ;
-(void)onEndOfSpeech;
-(void)onIntent:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)onError:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)updateState:(FBVoiceSearchState)arg1 ;
@end
