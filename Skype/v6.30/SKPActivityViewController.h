/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@class NSArray, SKPShareWaitingView, SKPMessage, NSString;

@interface SKPActivityViewController : UIActivityViewController {

	BOOL _errorWasShown;
	/*^block*/id _failureBlock;
	NSArray* _shareActivityItems;
	SKPShareWaitingView* _waitingView;
	SKPMessage* _message;
	NSString* _currentActivity;
	unsigned long long _state;

}

@property (nonatomic,copy) NSArray * shareActivityItems;                     //@synthesize shareActivityItems=_shareActivityItems - In the implementation block
@property (nonatomic,retain) SKPShareWaitingView * waitingView;              //@synthesize waitingView=_waitingView - In the implementation block
@property (nonatomic,retain) SKPMessage * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * currentActivity;                       //@synthesize currentActivity=_currentActivity - In the implementation block
@property (assign,nonatomic) unsigned long long state;                       //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL errorWasShown;                             //@synthesize errorWasShown=_errorWasShown - In the implementation block
@property (nonatomic,copy) id failureBlock;                                  //@synthesize failureBlock=_failureBlock - In the implementation block
-(id)initWithMessage:(id)arg1 withContext:(id)arg2 ;
-(void)configureCompletionBlocks;
-(void)dismissActivityViewControllerIfPresented;
-(void)executeFailureBlock:(BOOL)arg1 ;
-(void)setCurrentActivity:(NSString *)arg1 ;
-(void)hideWaitingView;
-(NSArray *)shareActivityItems;
-(void)showWaitingView;
-(SKPShareWaitingView *)waitingView;
-(void)setWaitingView:(SKPShareWaitingView *)arg1 ;
-(void)createWaitingView;
-(BOOL)errorWasShown;
-(void)setErrorWasShown:(BOOL)arg1 ;
-(void)setShareActivityItems:(NSArray *)arg1 ;
-(void)dealloc;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setMessage:(SKPMessage *)arg1 ;
-(SKPMessage *)message;
-(NSString *)currentActivity;
-(void)showGenericErrorAlert;
-(id)failureBlock;
-(void)setFailureBlock:(id)arg1 ;
@end
