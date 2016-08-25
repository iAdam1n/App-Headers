/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:47 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AlienBlue/AlienBlue-Structs.h>
#import <UIKit/UIViewController.h>

@protocol FBViewControllerDelegate;
@class UIBarButtonItem, UIView, UINavigationBar;

@interface FBViewController : UIViewController {

	BOOL _autoDismiss;
	BOOL _dismissAnimated;
	UIBarButtonItem* _cancelButton;
	UIBarButtonItem* _doneButton;
	id<FBViewControllerDelegate> _delegate;
	UIView* _canvasView;
	UINavigationBar* _navigationBar;
	/*^block*/id _handler;

}

@property (nonatomic,retain) UIBarButtonItem * cancelButton;                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                       //@synthesize doneButton=_doneButton - In the implementation block
@property (assign,nonatomic) id<FBViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * canvasView;                                //@synthesize canvasView=_canvasView - In the implementation block
@property (nonatomic,retain) UINavigationBar * navigationBar;                    //@synthesize navigationBar=_navigationBar - In the implementation block
@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) BOOL autoDismiss;                                   //@synthesize autoDismiss=_autoDismiss - In the implementation block
@property (assign,nonatomic) BOOL dismissAnimated;                               //@synthesize dismissAnimated=_dismissAnimated - In the implementation block
-(void)logAppEvents:(BOOL)arg1 ;
-(UIView *)canvasView;
-(void)setCanvasView:(UIView *)arg1 ;
-(void)setAutoDismiss:(BOOL)arg1 ;
-(void)setDismissAnimated:(BOOL)arg1 ;
-(void)updateBarForNavigationMode;
-(void)updateBarForPresentedMode;
-(BOOL)autoDismiss;
-(BOOL)dismissAnimated;
-(void)presentModallyFromViewController:(id)arg1 animated:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id<FBViewControllerDelegate>)delegate;
-(UINavigationBar *)navigationBar;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)setNavigationBar:(UINavigationBar *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)updateBar;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)commonInit;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)cancelButtonPressed:(id)arg1 ;
-(CGRect)contentBounds;
-(void)doneButtonPressed:(id)arg1 ;
@end

