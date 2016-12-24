/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNPresentableDialog.h>

@class MNCancellableOperationView, NSString;

@interface MNCancellableOperationDialog : UIViewController <MNPresentableDialog> {

	MNCancellableOperationView* _dialogView;
	/*^block*/id _cancelBlock;

}

@property (nonatomic,retain) MNCancellableOperationView * dialogView;              //@synthesize dialogView=_dialogView - In the implementation block
@property (nonatomic,copy) id cancelBlock;                                         //@synthesize cancelBlock=_cancelBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)willOpenKeyboardOnAppear;
-(id)initWithCancelBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(MNCancellableOperationView *)dialogView;
-(void)setDialogView:(MNCancellableOperationView *)arg1 ;
-(id)cancelBlock;
-(void)setCancelBlock:(id)arg1 ;
-(void)_cancelButtonPressed:(id)arg1 ;
@end
