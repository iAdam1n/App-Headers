/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:00 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBSDKWebDialogViewDelegate.h>

@protocol FBSDKWebDialogDelegate;
@class UIView, FBSDKWebDialogView, NSString, NSDictionary;

@interface FBSDKWebDialog : NSObject <FBSDKWebDialogViewDelegate> {

	UIView* _backgroundView;
	FBSDKWebDialogView* _dialogView;
	BOOL _deferVisibility;
	id<FBSDKWebDialogDelegate> _delegate;
	NSString* _name;
	NSDictionary* _parameters;

}

@property (assign,nonatomic) BOOL deferVisibility;                             //@synthesize deferVisibility=_deferVisibility - In the implementation block
@property (assign,nonatomic) id<FBSDKWebDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                          //@synthesize parameters=_parameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithName:(id)arg1 parameters:(id)arg2 delegate:(id)arg3 ;
-(id)_generateURL:(id*)arg1 ;
-(id)_findWindow;
-(BOOL)_showWebView;
-(void)_completeWithResults:(id)arg1 ;
-(void)_deviceOrientationDidChangeNotification:(id)arg1 ;
-(void)_updateViewsWithScale:(double)arg1 alpha:(double)arg2 animationDuration:(double)arg3 completion:(/*^block*/id)arg4 ;
-(CGRect)_applicationFrameForOrientation;
-(CGAffineTransform)_transformForOrientation;
-(void)webDialogView:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialogView:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogViewDidCancel:(id)arg1 ;
-(void)webDialogViewDidFinishLoad:(id)arg1 ;
-(BOOL)deferVisibility;
-(void)setDeferVisibility:(BOOL)arg1 ;
-(BOOL)show;
-(void)setDelegate:(id<FBSDKWebDialogDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKWebDialogDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)_cancel;
-(void)_dismissAnimated:(BOOL)arg1 ;
-(void)_failWithError:(id)arg1 ;
-(void)_addObservers;
-(void)_removeObservers;
@end

