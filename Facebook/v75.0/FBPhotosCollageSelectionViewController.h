/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotosCollageInsetsTrackingViewController.h>

@protocol FBPhotosCollageSelectionViewControllerDelegate;
@interface FBPhotosCollageSelectionViewController : FBPhotosCollageInsetsTrackingViewController {

	id<FBPhotosCollageSelectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPhotosCollageSelectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)collageGridResponder:(id)arg1 didTapAtIndexPath:(id)arg2 ;
-(void)setDelegate:(id<FBPhotosCollageSelectionViewControllerDelegate>)arg1 ;
-(id<FBPhotosCollageSelectionViewControllerDelegate>)delegate;
@end
