/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMStickerViewDelegate.h>

@protocol FBStickerResourceManager, FBMStickerPreviewViewControllerDelegate;
@class FBMStickerView, NSString;

@interface FBMStickerPreviewViewController : UIViewController <FBMStickerViewDelegate> {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBMStickerView* _stickerPreviewView;
	id<FBMStickerPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMStickerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerResourceManager:(id)arg1 ;
-(void)configureWithStickerFbId:(unsigned long long)arg1 originalImageSizeEnabled:(BOOL)arg2 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(void)setDelegate:(id<FBMStickerPreviewViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMStickerPreviewViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)stickerPreview;
@end
