/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:41:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNPhotoActionSheetPresenterDelegate;
@class UIActionSheet, MNNavigationCoordinator, NSString;

@interface MNPhotoActionSheetPresenter : NSObject <UIActionSheetDelegate, FBClassProvidable> {

	UIActionSheet* _photoActionActionSheet;
	MNNavigationCoordinator* _navigationCoordinator;
	unsigned long long _forwardActionIndex;
	unsigned long long _saveActionIndex;
	id<MNPhotoActionSheetPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoActionSheetPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)_showAlertController:(id)arg1 fromRect:(CGRect)arg2 inView:(id)arg3 ;
-(void)showPhotoActionSheetInView:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)setDelegate:(id<MNPhotoActionSheetPresenterDelegate>)arg1 ;
-(id<MNPhotoActionSheetPresenterDelegate>)delegate;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
