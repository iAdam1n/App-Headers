/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:50:48 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/F01A5503-B253-4A30-B0BC-B7B5406FD725/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface WAActionSheetPresenter : NSObject {

	BOOL _presentsInWindow;
	BOOL _showsCancelButton;
	/*^block*/id _completionHandler;

}

@property (nonatomic,copy) id completionHandler;                  //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL presentsInWindow;               //@synthesize presentsInWindow=_presentsInWindow - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton;              //@synthesize showsCancelButton=_showsCancelButton - In the implementation block
-(void)addButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addDestructiveButtonWithTitle:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 image:(id)arg2 useBoldText:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)applicationWillResetUserInterface:(id)arg1 ;
-(void)dismissByCancellingWithAnimation:(BOOL)arg1 ;
-(void)setPresentsInWindow:(BOOL)arg1 ;
-(void)didDismissByCancelling:(BOOL)arg1 ;
-(void)addCancelButton;
-(BOOL)presentsInWindow;
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithTitle:(id)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)presentFromViewController:(id)arg1 ;
@end
