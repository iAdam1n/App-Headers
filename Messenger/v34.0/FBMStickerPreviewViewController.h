/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/FBMStickerViewDelegate.h>

@protocol FBMStickerPreviewViewControllerDelegate;
@class FBMStickerResourceManager, FBMStickerView, NSString;

@interface FBMStickerPreviewViewController : UIViewController <FBMStickerViewDelegate> {

	FBMStickerResourceManager* _stickerResourceManager;
	FBMStickerView* _stickerPreviewView;
	id<FBMStickerPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMStickerPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithStickerResourceManager:(id)arg1 ;
-(BOOL)stickerViewShouldAnimate:(id)arg1 ;
-(id)stickerPreview;
-(void)configureWithStickerFbId:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<FBMStickerPreviewViewControllerDelegate>)arg1 ;
-(id<FBMStickerPreviewViewControllerDelegate>)delegate;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

